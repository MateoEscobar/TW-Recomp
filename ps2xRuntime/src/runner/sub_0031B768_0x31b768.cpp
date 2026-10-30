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

// Function: sub_0031B768
// Address: 0x31b768 - 0x31bc08
void sub_0031B768_0x31b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B768_0x31b768");
#endif

    switch (ctx->pc) {
        case 0x31b768u: goto label_31b768;
        case 0x31b76cu: goto label_31b76c;
        case 0x31b770u: goto label_31b770;
        case 0x31b774u: goto label_31b774;
        case 0x31b778u: goto label_31b778;
        case 0x31b77cu: goto label_31b77c;
        case 0x31b780u: goto label_31b780;
        case 0x31b784u: goto label_31b784;
        case 0x31b788u: goto label_31b788;
        case 0x31b78cu: goto label_31b78c;
        case 0x31b790u: goto label_31b790;
        case 0x31b794u: goto label_31b794;
        case 0x31b798u: goto label_31b798;
        case 0x31b79cu: goto label_31b79c;
        case 0x31b7a0u: goto label_31b7a0;
        case 0x31b7a4u: goto label_31b7a4;
        case 0x31b7a8u: goto label_31b7a8;
        case 0x31b7acu: goto label_31b7ac;
        case 0x31b7b0u: goto label_31b7b0;
        case 0x31b7b4u: goto label_31b7b4;
        case 0x31b7b8u: goto label_31b7b8;
        case 0x31b7bcu: goto label_31b7bc;
        case 0x31b7c0u: goto label_31b7c0;
        case 0x31b7c4u: goto label_31b7c4;
        case 0x31b7c8u: goto label_31b7c8;
        case 0x31b7ccu: goto label_31b7cc;
        case 0x31b7d0u: goto label_31b7d0;
        case 0x31b7d4u: goto label_31b7d4;
        case 0x31b7d8u: goto label_31b7d8;
        case 0x31b7dcu: goto label_31b7dc;
        case 0x31b7e0u: goto label_31b7e0;
        case 0x31b7e4u: goto label_31b7e4;
        case 0x31b7e8u: goto label_31b7e8;
        case 0x31b7ecu: goto label_31b7ec;
        case 0x31b7f0u: goto label_31b7f0;
        case 0x31b7f4u: goto label_31b7f4;
        case 0x31b7f8u: goto label_31b7f8;
        case 0x31b7fcu: goto label_31b7fc;
        case 0x31b800u: goto label_31b800;
        case 0x31b804u: goto label_31b804;
        case 0x31b808u: goto label_31b808;
        case 0x31b80cu: goto label_31b80c;
        case 0x31b810u: goto label_31b810;
        case 0x31b814u: goto label_31b814;
        case 0x31b818u: goto label_31b818;
        case 0x31b81cu: goto label_31b81c;
        case 0x31b820u: goto label_31b820;
        case 0x31b824u: goto label_31b824;
        case 0x31b828u: goto label_31b828;
        case 0x31b82cu: goto label_31b82c;
        case 0x31b830u: goto label_31b830;
        case 0x31b834u: goto label_31b834;
        case 0x31b838u: goto label_31b838;
        case 0x31b83cu: goto label_31b83c;
        case 0x31b840u: goto label_31b840;
        case 0x31b844u: goto label_31b844;
        case 0x31b848u: goto label_31b848;
        case 0x31b84cu: goto label_31b84c;
        case 0x31b850u: goto label_31b850;
        case 0x31b854u: goto label_31b854;
        case 0x31b858u: goto label_31b858;
        case 0x31b85cu: goto label_31b85c;
        case 0x31b860u: goto label_31b860;
        case 0x31b864u: goto label_31b864;
        case 0x31b868u: goto label_31b868;
        case 0x31b86cu: goto label_31b86c;
        case 0x31b870u: goto label_31b870;
        case 0x31b874u: goto label_31b874;
        case 0x31b878u: goto label_31b878;
        case 0x31b87cu: goto label_31b87c;
        case 0x31b880u: goto label_31b880;
        case 0x31b884u: goto label_31b884;
        case 0x31b888u: goto label_31b888;
        case 0x31b88cu: goto label_31b88c;
        case 0x31b890u: goto label_31b890;
        case 0x31b894u: goto label_31b894;
        case 0x31b898u: goto label_31b898;
        case 0x31b89cu: goto label_31b89c;
        case 0x31b8a0u: goto label_31b8a0;
        case 0x31b8a4u: goto label_31b8a4;
        case 0x31b8a8u: goto label_31b8a8;
        case 0x31b8acu: goto label_31b8ac;
        case 0x31b8b0u: goto label_31b8b0;
        case 0x31b8b4u: goto label_31b8b4;
        case 0x31b8b8u: goto label_31b8b8;
        case 0x31b8bcu: goto label_31b8bc;
        case 0x31b8c0u: goto label_31b8c0;
        case 0x31b8c4u: goto label_31b8c4;
        case 0x31b8c8u: goto label_31b8c8;
        case 0x31b8ccu: goto label_31b8cc;
        case 0x31b8d0u: goto label_31b8d0;
        case 0x31b8d4u: goto label_31b8d4;
        case 0x31b8d8u: goto label_31b8d8;
        case 0x31b8dcu: goto label_31b8dc;
        case 0x31b8e0u: goto label_31b8e0;
        case 0x31b8e4u: goto label_31b8e4;
        case 0x31b8e8u: goto label_31b8e8;
        case 0x31b8ecu: goto label_31b8ec;
        case 0x31b8f0u: goto label_31b8f0;
        case 0x31b8f4u: goto label_31b8f4;
        case 0x31b8f8u: goto label_31b8f8;
        case 0x31b8fcu: goto label_31b8fc;
        case 0x31b900u: goto label_31b900;
        case 0x31b904u: goto label_31b904;
        case 0x31b908u: goto label_31b908;
        case 0x31b90cu: goto label_31b90c;
        case 0x31b910u: goto label_31b910;
        case 0x31b914u: goto label_31b914;
        case 0x31b918u: goto label_31b918;
        case 0x31b91cu: goto label_31b91c;
        case 0x31b920u: goto label_31b920;
        case 0x31b924u: goto label_31b924;
        case 0x31b928u: goto label_31b928;
        case 0x31b92cu: goto label_31b92c;
        case 0x31b930u: goto label_31b930;
        case 0x31b934u: goto label_31b934;
        case 0x31b938u: goto label_31b938;
        case 0x31b93cu: goto label_31b93c;
        case 0x31b940u: goto label_31b940;
        case 0x31b944u: goto label_31b944;
        case 0x31b948u: goto label_31b948;
        case 0x31b94cu: goto label_31b94c;
        case 0x31b950u: goto label_31b950;
        case 0x31b954u: goto label_31b954;
        case 0x31b958u: goto label_31b958;
        case 0x31b95cu: goto label_31b95c;
        case 0x31b960u: goto label_31b960;
        case 0x31b964u: goto label_31b964;
        case 0x31b968u: goto label_31b968;
        case 0x31b96cu: goto label_31b96c;
        case 0x31b970u: goto label_31b970;
        case 0x31b974u: goto label_31b974;
        case 0x31b978u: goto label_31b978;
        case 0x31b97cu: goto label_31b97c;
        case 0x31b980u: goto label_31b980;
        case 0x31b984u: goto label_31b984;
        case 0x31b988u: goto label_31b988;
        case 0x31b98cu: goto label_31b98c;
        case 0x31b990u: goto label_31b990;
        case 0x31b994u: goto label_31b994;
        case 0x31b998u: goto label_31b998;
        case 0x31b99cu: goto label_31b99c;
        case 0x31b9a0u: goto label_31b9a0;
        case 0x31b9a4u: goto label_31b9a4;
        case 0x31b9a8u: goto label_31b9a8;
        case 0x31b9acu: goto label_31b9ac;
        case 0x31b9b0u: goto label_31b9b0;
        case 0x31b9b4u: goto label_31b9b4;
        case 0x31b9b8u: goto label_31b9b8;
        case 0x31b9bcu: goto label_31b9bc;
        case 0x31b9c0u: goto label_31b9c0;
        case 0x31b9c4u: goto label_31b9c4;
        case 0x31b9c8u: goto label_31b9c8;
        case 0x31b9ccu: goto label_31b9cc;
        case 0x31b9d0u: goto label_31b9d0;
        case 0x31b9d4u: goto label_31b9d4;
        case 0x31b9d8u: goto label_31b9d8;
        case 0x31b9dcu: goto label_31b9dc;
        case 0x31b9e0u: goto label_31b9e0;
        case 0x31b9e4u: goto label_31b9e4;
        case 0x31b9e8u: goto label_31b9e8;
        case 0x31b9ecu: goto label_31b9ec;
        case 0x31b9f0u: goto label_31b9f0;
        case 0x31b9f4u: goto label_31b9f4;
        case 0x31b9f8u: goto label_31b9f8;
        case 0x31b9fcu: goto label_31b9fc;
        case 0x31ba00u: goto label_31ba00;
        case 0x31ba04u: goto label_31ba04;
        case 0x31ba08u: goto label_31ba08;
        case 0x31ba0cu: goto label_31ba0c;
        case 0x31ba10u: goto label_31ba10;
        case 0x31ba14u: goto label_31ba14;
        case 0x31ba18u: goto label_31ba18;
        case 0x31ba1cu: goto label_31ba1c;
        case 0x31ba20u: goto label_31ba20;
        case 0x31ba24u: goto label_31ba24;
        case 0x31ba28u: goto label_31ba28;
        case 0x31ba2cu: goto label_31ba2c;
        case 0x31ba30u: goto label_31ba30;
        case 0x31ba34u: goto label_31ba34;
        case 0x31ba38u: goto label_31ba38;
        case 0x31ba3cu: goto label_31ba3c;
        case 0x31ba40u: goto label_31ba40;
        case 0x31ba44u: goto label_31ba44;
        case 0x31ba48u: goto label_31ba48;
        case 0x31ba4cu: goto label_31ba4c;
        case 0x31ba50u: goto label_31ba50;
        case 0x31ba54u: goto label_31ba54;
        case 0x31ba58u: goto label_31ba58;
        case 0x31ba5cu: goto label_31ba5c;
        case 0x31ba60u: goto label_31ba60;
        case 0x31ba64u: goto label_31ba64;
        case 0x31ba68u: goto label_31ba68;
        case 0x31ba6cu: goto label_31ba6c;
        case 0x31ba70u: goto label_31ba70;
        case 0x31ba74u: goto label_31ba74;
        case 0x31ba78u: goto label_31ba78;
        case 0x31ba7cu: goto label_31ba7c;
        case 0x31ba80u: goto label_31ba80;
        case 0x31ba84u: goto label_31ba84;
        case 0x31ba88u: goto label_31ba88;
        case 0x31ba8cu: goto label_31ba8c;
        case 0x31ba90u: goto label_31ba90;
        case 0x31ba94u: goto label_31ba94;
        case 0x31ba98u: goto label_31ba98;
        case 0x31ba9cu: goto label_31ba9c;
        case 0x31baa0u: goto label_31baa0;
        case 0x31baa4u: goto label_31baa4;
        case 0x31baa8u: goto label_31baa8;
        case 0x31baacu: goto label_31baac;
        case 0x31bab0u: goto label_31bab0;
        case 0x31bab4u: goto label_31bab4;
        case 0x31bab8u: goto label_31bab8;
        case 0x31babcu: goto label_31babc;
        case 0x31bac0u: goto label_31bac0;
        case 0x31bac4u: goto label_31bac4;
        case 0x31bac8u: goto label_31bac8;
        case 0x31baccu: goto label_31bacc;
        case 0x31bad0u: goto label_31bad0;
        case 0x31bad4u: goto label_31bad4;
        case 0x31bad8u: goto label_31bad8;
        case 0x31badcu: goto label_31badc;
        case 0x31bae0u: goto label_31bae0;
        case 0x31bae4u: goto label_31bae4;
        case 0x31bae8u: goto label_31bae8;
        case 0x31baecu: goto label_31baec;
        case 0x31baf0u: goto label_31baf0;
        case 0x31baf4u: goto label_31baf4;
        case 0x31baf8u: goto label_31baf8;
        case 0x31bafcu: goto label_31bafc;
        case 0x31bb00u: goto label_31bb00;
        case 0x31bb04u: goto label_31bb04;
        case 0x31bb08u: goto label_31bb08;
        case 0x31bb0cu: goto label_31bb0c;
        case 0x31bb10u: goto label_31bb10;
        case 0x31bb14u: goto label_31bb14;
        case 0x31bb18u: goto label_31bb18;
        case 0x31bb1cu: goto label_31bb1c;
        case 0x31bb20u: goto label_31bb20;
        case 0x31bb24u: goto label_31bb24;
        case 0x31bb28u: goto label_31bb28;
        case 0x31bb2cu: goto label_31bb2c;
        case 0x31bb30u: goto label_31bb30;
        case 0x31bb34u: goto label_31bb34;
        case 0x31bb38u: goto label_31bb38;
        case 0x31bb3cu: goto label_31bb3c;
        case 0x31bb40u: goto label_31bb40;
        case 0x31bb44u: goto label_31bb44;
        case 0x31bb48u: goto label_31bb48;
        case 0x31bb4cu: goto label_31bb4c;
        case 0x31bb50u: goto label_31bb50;
        case 0x31bb54u: goto label_31bb54;
        case 0x31bb58u: goto label_31bb58;
        case 0x31bb5cu: goto label_31bb5c;
        case 0x31bb60u: goto label_31bb60;
        case 0x31bb64u: goto label_31bb64;
        case 0x31bb68u: goto label_31bb68;
        case 0x31bb6cu: goto label_31bb6c;
        case 0x31bb70u: goto label_31bb70;
        case 0x31bb74u: goto label_31bb74;
        case 0x31bb78u: goto label_31bb78;
        case 0x31bb7cu: goto label_31bb7c;
        case 0x31bb80u: goto label_31bb80;
        case 0x31bb84u: goto label_31bb84;
        case 0x31bb88u: goto label_31bb88;
        case 0x31bb8cu: goto label_31bb8c;
        case 0x31bb90u: goto label_31bb90;
        case 0x31bb94u: goto label_31bb94;
        case 0x31bb98u: goto label_31bb98;
        case 0x31bb9cu: goto label_31bb9c;
        case 0x31bba0u: goto label_31bba0;
        case 0x31bba4u: goto label_31bba4;
        case 0x31bba8u: goto label_31bba8;
        case 0x31bbacu: goto label_31bbac;
        case 0x31bbb0u: goto label_31bbb0;
        case 0x31bbb4u: goto label_31bbb4;
        case 0x31bbb8u: goto label_31bbb8;
        case 0x31bbbcu: goto label_31bbbc;
        case 0x31bbc0u: goto label_31bbc0;
        case 0x31bbc4u: goto label_31bbc4;
        case 0x31bbc8u: goto label_31bbc8;
        case 0x31bbccu: goto label_31bbcc;
        case 0x31bbd0u: goto label_31bbd0;
        case 0x31bbd4u: goto label_31bbd4;
        case 0x31bbd8u: goto label_31bbd8;
        case 0x31bbdcu: goto label_31bbdc;
        case 0x31bbe0u: goto label_31bbe0;
        case 0x31bbe4u: goto label_31bbe4;
        case 0x31bbe8u: goto label_31bbe8;
        case 0x31bbecu: goto label_31bbec;
        case 0x31bbf0u: goto label_31bbf0;
        case 0x31bbf4u: goto label_31bbf4;
        case 0x31bbf8u: goto label_31bbf8;
        case 0x31bbfcu: goto label_31bbfc;
        case 0x31bc00u: goto label_31bc00;
        case 0x31bc04u: goto label_31bc04;
        default: break;
    }

    ctx->pc = 0x31b768u;

label_31b768:
    // 0x31b768: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_31b76c:
    // 0x31b76c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31b770:
    // 0x31b770: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_31b774:
    // 0x31b774: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_31b778:
    // 0x31b778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b77c:
    // 0x31b77c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_31b780:
    // 0x31b780: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_31b784:
    // 0x31b784: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_31b788:
    // 0x31b788: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_31b78c:
    // 0x31b78c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_31b790:
    // 0x31b790: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31b794:
    // 0x31b794: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x31b794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_31b798:
    // 0x31b798: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31b79c:
    // 0x31b79c: 0x1043010f  beq         $v0, $v1, . + 4 + (0x10F << 2)
label_31b7a0:
    if (ctx->pc == 0x31B7A0u) {
        ctx->pc = 0x31B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B79Cu;
        // 0x31b7a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7A4u;
        goto label_31b7a4;
    }
    ctx->pc = 0x31B79Cu;
    {
        const bool branch_taken_0x31b79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B79Cu;
        // 0x31b7a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b79c) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B7A4u;
label_31b7a4:
    // 0x31b7a4: 0xc05b0e2  jal         func_16C388
label_31b7a8:
    if (ctx->pc == 0x31B7A8u) {
        ctx->pc = 0x31B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7A4u;
        // 0x31b7a8: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7ACu;
        goto label_31b7ac;
    }
    ctx->pc = 0x31B7A4u;
    SET_GPR_U32(ctx, 31, 0x31B7ACu);
    ctx->pc = 0x31B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7A4u;
    // 0x31b7a8: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31B7A4u, 0x31B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7ACu;
label_31b7ac:
    // 0x31b7ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31b7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b7b0:
    // 0x31b7b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x31b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_31b7b4:
    // 0x31b7b4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_31b7b8:
    if (ctx->pc == 0x31B7B8u) {
        ctx->pc = 0x31B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7B4u;
        // 0x31b7b8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7BCu;
        goto label_31b7bc;
    }
    ctx->pc = 0x31B7B4u;
    {
        const bool branch_taken_0x31b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7B4u;
        // 0x31b7b8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7b4) {
            ctx->pc = 0x31B8E4u;
            goto label_31b8e4;
        }
    }
    ctx->pc = 0x31B7BCu;
label_31b7bc:
    // 0x31b7bc: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x31b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_31b7c0:
    // 0x31b7c0: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x31b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_31b7c4:
    // 0x31b7c4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x31b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_31b7c8:
    // 0x31b7c8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31b7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31b7cc:
    // 0x31b7cc: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_31b7d0:
    if (ctx->pc == 0x31B7D0u) {
        ctx->pc = 0x31B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7CCu;
        // 0x31b7d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7D4u;
        goto label_31b7d4;
    }
    ctx->pc = 0x31B7CCu;
    {
        const bool branch_taken_0x31b7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7CCu;
        // 0x31b7d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7cc) {
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B7D4u;
label_31b7d4:
    // 0x31b7d4: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x31b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
label_31b7d8:
    // 0x31b7d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b7dc:
    // 0x31b7dc: 0xc05959e  jal         func_165678
label_31b7e0:
    if (ctx->pc == 0x31B7E0u) {
        ctx->pc = 0x31B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7DCu;
        // 0x31b7e0: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7E4u;
        goto label_31b7e4;
    }
    ctx->pc = 0x31B7DCu;
    SET_GPR_U32(ctx, 31, 0x31B7E4u);
    ctx->pc = 0x31B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7DCu;
    // 0x31b7e0: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B7DCu, 0x31B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7E4u;
label_31b7e4:
    // 0x31b7e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31b7e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b7e8:
    // 0x31b7e8: 0xc05959e  jal         func_165678
label_31b7ec:
    if (ctx->pc == 0x31B7ECu) {
        ctx->pc = 0x31B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7E8u;
        // 0x31b7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7F0u;
        goto label_31b7f0;
    }
    ctx->pc = 0x31B7E8u;
    SET_GPR_U32(ctx, 31, 0x31B7F0u);
    ctx->pc = 0x31B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7E8u;
    // 0x31b7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B7E8u, 0x31B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7F0u;
label_31b7f0:
    // 0x31b7f0: 0x126000f9  beqz        $s3, . + 4 + (0xF9 << 2)
label_31b7f4:
    if (ctx->pc == 0x31B7F4u) {
        ctx->pc = 0x31B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F0u;
        // 0x31b7f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B7F8u;
        goto label_31b7f8;
    }
    ctx->pc = 0x31B7F0u;
    {
        const bool branch_taken_0x31b7f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F0u;
        // 0x31b7f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f0) {
            ctx->pc = 0x31BBD8u;
            goto label_31bbd8;
        }
    }
    ctx->pc = 0x31B7F8u;
label_31b7f8:
    // 0x31b7f8: 0x120000f7  beqz        $s0, . + 4 + (0xF7 << 2)
label_31b7fc:
    if (ctx->pc == 0x31B7FCu) {
        ctx->pc = 0x31B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F8u;
        // 0x31b7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B800u;
        goto label_31b800;
    }
    ctx->pc = 0x31B7F8u;
    {
        const bool branch_taken_0x31b7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F8u;
        // 0x31b7fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f8) {
            ctx->pc = 0x31BBD8u;
            goto label_31bbd8;
        }
    }
    ctx->pc = 0x31B800u;
label_31b800:
    // 0x31b800: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b804:
    // 0x31b804: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x31b804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_31b808:
    // 0x31b808: 0xc0594da  jal         func_165368
label_31b80c:
    if (ctx->pc == 0x31B80Cu) {
        ctx->pc = 0x31B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B808u;
        // 0x31b80c: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B810u;
        goto label_31b810;
    }
    ctx->pc = 0x31B808u;
    SET_GPR_U32(ctx, 31, 0x31B810u);
    ctx->pc = 0x31B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B808u;
    // 0x31b80c: 0x3c160071  lui         $s6, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165368u, 0x31B808u, 0x31B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B810u;
label_31b810:
    // 0x31b810: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31b814:
    if (ctx->pc == 0x31B814u) {
        ctx->pc = 0x31B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B810u;
        // 0x31b814: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B818u;
        goto label_31b818;
    }
    ctx->pc = 0x31B810u;
    {
        const bool branch_taken_0x31b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B810u;
        // 0x31b814: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b810) {
            ctx->pc = 0x31B84Cu;
            goto label_31b84c;
        }
    }
    ctx->pc = 0x31B818u;
label_31b818:
    // 0x31b818: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x31b818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_31b81c:
    // 0x31b81c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x31b81cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31b820:
    // 0x31b820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b824:
    // 0x31b824: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31b824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31b828:
    // 0x31b828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b82c:
    // 0x31b82c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31b830:
    // 0x31b830: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31b830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31b834:
    // 0x31b834: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31b838:
    // 0x31b838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b83c:
    // 0x31b83c: 0xc09381e  jal         func_24E078
label_31b840:
    if (ctx->pc == 0x31B840u) {
        ctx->pc = 0x31B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B83Cu;
        // 0x31b840: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B844u;
        goto label_31b844;
    }
    ctx->pc = 0x31B83Cu;
    SET_GPR_U32(ctx, 31, 0x31B844u);
    ctx->pc = 0x31B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B83Cu;
    // 0x31b840: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x31B83Cu, 0x31B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B844u;
label_31b844:
    // 0x31b844: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_31b848:
    if (ctx->pc == 0x31B848u) {
        ctx->pc = 0x31B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B844u;
        // 0x31b848: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B84Cu;
        goto label_31b84c;
    }
    ctx->pc = 0x31B844u;
    {
        const bool branch_taken_0x31b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b844) {
            ctx->pc = 0x31B848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B844u;
            // 0x31b848: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B8D8u;
            goto label_31b8d8;
        }
    }
    ctx->pc = 0x31B84Cu;
label_31b84c:
    // 0x31b84c: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x31b84cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_31b850:
    // 0x31b850: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x31b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_31b854:
    // 0x31b854: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x31b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_31b858:
    // 0x31b858: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31b858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31b85c:
    // 0x31b85c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31b860:
    // 0x31b860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b864:
    // 0x31b864: 0xc136d6c  jal         func_4DB5B0
label_31b868:
    if (ctx->pc == 0x31B868u) {
        ctx->pc = 0x31B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B864u;
        // 0x31b868: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B86Cu;
        goto label_31b86c;
    }
    ctx->pc = 0x31B864u;
    SET_GPR_U32(ctx, 31, 0x31B86Cu);
    ctx->pc = 0x31B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B864u;
    // 0x31b868: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x31B864u, 0x31B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B86Cu;
label_31b86c:
    // 0x31b86c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31b870:
    // 0x31b870: 0xc0e409a  jal         func_390268
label_31b874:
    if (ctx->pc == 0x31B874u) {
        ctx->pc = 0x31B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B870u;
        // 0x31b874: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B878u;
        goto label_31b878;
    }
    ctx->pc = 0x31B870u;
    SET_GPR_U32(ctx, 31, 0x31B878u);
    ctx->pc = 0x31B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B870u;
    // 0x31b874: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31B870u, 0x31B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B878u;
label_31b878:
    // 0x31b878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b87c:
    // 0x31b87c: 0x520000d7  beql        $s0, $zero, . + 4 + (0xD7 << 2)
label_31b880:
    if (ctx->pc == 0x31B880u) {
        ctx->pc = 0x31B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B87Cu;
        // 0x31b880: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B884u;
        goto label_31b884;
    }
    ctx->pc = 0x31B87Cu;
    {
        const bool branch_taken_0x31b87c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b87c) {
            ctx->pc = 0x31B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B87Cu;
            // 0x31b880: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B884u;
label_31b884:
    // 0x31b884: 0xc087502  jal         func_21D408
label_31b888:
    if (ctx->pc == 0x31B888u) {
        ctx->pc = 0x31B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B884u;
        // 0x31b888: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B88Cu;
        goto label_31b88c;
    }
    ctx->pc = 0x31B884u;
    SET_GPR_U32(ctx, 31, 0x31B88Cu);
    ctx->pc = 0x31B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B884u;
    // 0x31b888: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B884u, 0x31B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B88Cu;
label_31b88c:
    // 0x31b88c: 0xc0a2fc0  jal         func_28BF00
label_31b890:
    if (ctx->pc == 0x31B890u) {
        ctx->pc = 0x31B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B88Cu;
        // 0x31b890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B894u;
        goto label_31b894;
    }
    ctx->pc = 0x31B88Cu;
    SET_GPR_U32(ctx, 31, 0x31B894u);
    ctx->pc = 0x31B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B88Cu;
    // 0x31b890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x31B88Cu, 0x31B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B894u;
label_31b894:
    // 0x31b894: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x31b894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_31b898:
    // 0x31b898: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_31b89c:
    // 0x31b89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31b8a0:
    // 0x31b8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b8a4:
    // 0x31b8a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_31b8a8:
    // 0x31b8a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31b8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_31b8ac:
    // 0x31b8ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b8b0:
    // 0x31b8b0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_31b8b4:
    // 0x31b8b4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31b8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_31b8b8:
    // 0x31b8b8: 0xc0888fa  jal         func_2223E8
label_31b8bc:
    if (ctx->pc == 0x31B8BCu) {
        ctx->pc = 0x31B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8B8u;
        // 0x31b8bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8C0u;
        goto label_31b8c0;
    }
    ctx->pc = 0x31B8B8u;
    SET_GPR_U32(ctx, 31, 0x31B8C0u);
    ctx->pc = 0x31B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8B8u;
    // 0x31b8bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x31B8B8u, 0x31B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8C0u;
label_31b8c0:
    // 0x31b8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b8c4:
    // 0x31b8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b8c8:
    // 0x31b8c8: 0x108300c4  beq         $a0, $v1, . + 4 + (0xC4 << 2)
label_31b8cc:
    if (ctx->pc == 0x31B8CCu) {
        ctx->pc = 0x31B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8C8u;
        // 0x31b8cc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8D0u;
        goto label_31b8d0;
    }
    ctx->pc = 0x31B8C8u;
    {
        const bool branch_taken_0x31b8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8C8u;
        // 0x31b8cc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8c8) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B8D0u;
label_31b8d0:
    // 0x31b8d0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_31b8d4:
    if (ctx->pc == 0x31B8D4u) {
        ctx->pc = 0x31B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8D0u;
        // 0x31b8d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8D8u;
        goto label_31b8d8;
    }
    ctx->pc = 0x31B8D0u;
    {
        const bool branch_taken_0x31b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8D0u;
        // 0x31b8d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8d0) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B8D8u;
label_31b8d8:
    // 0x31b8d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31b8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b8dc:
    // 0x31b8dc: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
label_31b8e0:
    if (ctx->pc == 0x31B8E0u) {
        ctx->pc = 0x31B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8DCu;
        // 0x31b8e0: 0x8e0201a8  lw          $v0, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8E4u;
        goto label_31b8e4;
    }
    ctx->pc = 0x31B8DCu;
    {
        const bool branch_taken_0x31b8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x31b8dc) {
            ctx->pc = 0x31B8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B8DCu;
            // 0x31b8e0: 0x8e0201a8  lw          $v0, 0x1A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B8ECu;
            goto label_31b8ec;
        }
    }
    ctx->pc = 0x31B8E4u;
label_31b8e4:
    // 0x31b8e4: 0x100000bd  b           . + 4 + (0xBD << 2)
label_31b8e8:
    if (ctx->pc == 0x31B8E8u) {
        ctx->pc = 0x31B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8E4u;
        // 0x31b8e8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8ECu;
        goto label_31b8ec;
    }
    ctx->pc = 0x31B8E4u;
    {
        const bool branch_taken_0x31b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8E4u;
        // 0x31b8e8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8e4) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B8ECu;
label_31b8ec:
    // 0x31b8ec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x31b8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_31b8f0:
    // 0x31b8f0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_31b8f4:
    if (ctx->pc == 0x31B8F4u) {
        ctx->pc = 0x31B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8F0u;
        // 0x31b8f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B8F8u;
        goto label_31b8f8;
    }
    ctx->pc = 0x31B8F0u;
    {
        const bool branch_taken_0x31b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b8f0) {
            ctx->pc = 0x31B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B8F0u;
            // 0x31b8f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B91Cu;
            goto label_31b91c;
        }
    }
    ctx->pc = 0x31B8F8u;
label_31b8f8:
    // 0x31b8f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b8fc:
    // 0x31b8fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b900:
    // 0x31b900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b904:
    // 0x31b904: 0xc0888a2  jal         func_222288
label_31b908:
    if (ctx->pc == 0x31B908u) {
        ctx->pc = 0x31B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B904u;
        // 0x31b908: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B90Cu;
        goto label_31b90c;
    }
    ctx->pc = 0x31B904u;
    SET_GPR_U32(ctx, 31, 0x31B90Cu);
    ctx->pc = 0x31B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B904u;
    // 0x31b908: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x31B904u, 0x31B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B90Cu;
label_31b90c:
    // 0x31b90c: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
label_31b910:
    if (ctx->pc == 0x31B910u) {
        ctx->pc = 0x31B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B90Cu;
        // 0x31b910: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B914u;
        goto label_31b914;
    }
    ctx->pc = 0x31B90Cu;
    {
        const bool branch_taken_0x31b90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x31b90c) {
            ctx->pc = 0x31B910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B90Cu;
            // 0x31b910: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B91Cu;
            goto label_31b91c;
        }
    }
    ctx->pc = 0x31B914u;
label_31b914:
    // 0x31b914: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_31b918:
    if (ctx->pc == 0x31B918u) {
        ctx->pc = 0x31B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B914u;
        // 0x31b918: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B91Cu;
        goto label_31b91c;
    }
    ctx->pc = 0x31B914u;
    {
        const bool branch_taken_0x31b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B914u;
        // 0x31b918: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b914) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B91Cu;
label_31b91c:
    // 0x31b91c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b920:
    // 0x31b920: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x31b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31b924:
    // 0x31b924: 0xc4940014  lwc1        $f20, 0x14($a0)
    ctx->pc = 0x31b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31b928:
    // 0x31b928: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x31b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31b92c:
    // 0x31b92c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x31b92cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_31b930:
    // 0x31b930: 0xc0cdb38  jal         func_336CE0
label_31b934:
    if (ctx->pc == 0x31B934u) {
        ctx->pc = 0x31B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B930u;
        // 0x31b934: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B938u;
        goto label_31b938;
    }
    ctx->pc = 0x31B930u;
    SET_GPR_U32(ctx, 31, 0x31B938u);
    ctx->pc = 0x31B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B930u;
    // 0x31b934: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31B930u, 0x31B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B938u;
label_31b938:
    // 0x31b938: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x31b938u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_31b93c:
    // 0x31b93c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31b93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31b940:
    // 0x31b940: 0x0  nop
    ctx->pc = 0x31b940u;
    // NOP
label_31b944:
    // 0x31b944: 0x450100a5  bc1t        . + 4 + (0xA5 << 2)
label_31b948:
    if (ctx->pc == 0x31B948u) {
        ctx->pc = 0x31B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B944u;
        // 0x31b948: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B94Cu;
        goto label_31b94c;
    }
    ctx->pc = 0x31B944u;
    {
        const bool branch_taken_0x31b944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B944u;
        // 0x31b948: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b944) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B94Cu;
label_31b94c:
    // 0x31b94c: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x31b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_31b950:
    // 0x31b950: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x31b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31b954:
    // 0x31b954: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x31b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_31b958:
    // 0x31b958: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x31b958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31b95c:
    // 0x31b95c: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_31b960:
    if (ctx->pc == 0x31B960u) {
        ctx->pc = 0x31B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B95Cu;
        // 0x31b960: 0x248203e8  addiu       $v0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B964u;
        goto label_31b964;
    }
    ctx->pc = 0x31B95Cu;
    {
        const bool branch_taken_0x31b95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B95Cu;
        // 0x31b960: 0x248203e8  addiu       $v0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b95c) {
            ctx->pc = 0x31BBD8u;
            goto label_31bbd8;
        }
    }
    ctx->pc = 0x31B964u;
label_31b964:
    // 0x31b964: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b968:
    // 0x31b968: 0xc05959e  jal         func_165678
label_31b96c:
    if (ctx->pc == 0x31B96Cu) {
        ctx->pc = 0x31B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B968u;
        // 0x31b96c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B970u;
        goto label_31b970;
    }
    ctx->pc = 0x31B968u;
    SET_GPR_U32(ctx, 31, 0x31B970u);
    ctx->pc = 0x31B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B968u;
    // 0x31b96c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B968u, 0x31B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B970u;
label_31b970:
    // 0x31b970: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31b970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b974:
    // 0x31b974: 0xc05959e  jal         func_165678
label_31b978:
    if (ctx->pc == 0x31B978u) {
        ctx->pc = 0x31B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B974u;
        // 0x31b978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B97Cu;
        goto label_31b97c;
    }
    ctx->pc = 0x31B974u;
    SET_GPR_U32(ctx, 31, 0x31B97Cu);
    ctx->pc = 0x31B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B974u;
    // 0x31b978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31B974u, 0x31B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B97Cu;
label_31b97c:
    // 0x31b97c: 0x12600096  beqz        $s3, . + 4 + (0x96 << 2)
label_31b980:
    if (ctx->pc == 0x31B980u) {
        ctx->pc = 0x31B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B97Cu;
        // 0x31b980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B984u;
        goto label_31b984;
    }
    ctx->pc = 0x31B97Cu;
    {
        const bool branch_taken_0x31b97c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B97Cu;
        // 0x31b980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b97c) {
            ctx->pc = 0x31BBD8u;
            goto label_31bbd8;
        }
    }
    ctx->pc = 0x31B984u;
label_31b984:
    // 0x31b984: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
label_31b988:
    if (ctx->pc == 0x31B988u) {
        ctx->pc = 0x31B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B984u;
        // 0x31b988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B98Cu;
        goto label_31b98c;
    }
    ctx->pc = 0x31B984u;
    {
        const bool branch_taken_0x31b984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B984u;
        // 0x31b988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b984) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31B98Cu;
label_31b98c:
    // 0x31b98c: 0xc087502  jal         func_21D408
label_31b990:
    if (ctx->pc == 0x31B990u) {
        ctx->pc = 0x31B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B98Cu;
        // 0x31b990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B994u;
        goto label_31b994;
    }
    ctx->pc = 0x31B98Cu;
    SET_GPR_U32(ctx, 31, 0x31B994u);
    ctx->pc = 0x31B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B98Cu;
    // 0x31b990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B98Cu, 0x31B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B994u;
label_31b994:
    // 0x31b994: 0xc0a2fc0  jal         func_28BF00
label_31b998:
    if (ctx->pc == 0x31B998u) {
        ctx->pc = 0x31B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B994u;
        // 0x31b998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B99Cu;
        goto label_31b99c;
    }
    ctx->pc = 0x31B994u;
    SET_GPR_U32(ctx, 31, 0x31B99Cu);
    ctx->pc = 0x31B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B994u;
    // 0x31b998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x31B994u, 0x31B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B99Cu;
label_31b99c:
    // 0x31b99c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x31b99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_31b9a0:
    // 0x31b9a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_31b9a4:
    // 0x31b9a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31b9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31b9a8:
    // 0x31b9a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31b9ac:
    // 0x31b9ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31b9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_31b9b0:
    // 0x31b9b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31b9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_31b9b4:
    // 0x31b9b4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x31b9b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_31b9b8:
    // 0x31b9b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_31b9bc:
    // 0x31b9bc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31b9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_31b9c0:
    // 0x31b9c0: 0xc0888fa  jal         func_2223E8
label_31b9c4:
    if (ctx->pc == 0x31B9C4u) {
        ctx->pc = 0x31B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C0u;
        // 0x31b9c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9C8u;
        goto label_31b9c8;
    }
    ctx->pc = 0x31B9C0u;
    SET_GPR_U32(ctx, 31, 0x31B9C8u);
    ctx->pc = 0x31B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9C0u;
    // 0x31b9c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x31B9C0u, 0x31B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_31b9cc:
    if (ctx->pc == 0x31B9CCu) {
        ctx->pc = 0x31B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C8u;
        // 0x31b9cc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B9D0u;
        goto label_31b9d0;
    }
    ctx->pc = 0x31B9C8u;
    {
        const bool branch_taken_0x31b9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C8u;
        // 0x31b9cc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9c8) {
            ctx->pc = 0x31BBD8u;
            goto label_31bbd8;
        }
    }
    ctx->pc = 0x31B9D0u;
label_31b9d0:
    // 0x31b9d0: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x31b9d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_31b9d4:
    // 0x31b9d4: 0x24434b00  addiu       $v1, $v0, 0x4B00
    ctx->pc = 0x31b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31b9d8:
    // 0x31b9d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31b9d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b9dc:
    // 0x31b9dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31b9e0:
    // 0x31b9e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b9e4:
    // 0x31b9e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x31b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_31b9e8:
    // 0x31b9e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x31b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_31b9ec:
    // 0x31b9ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31b9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_31b9f0:
    // 0x31b9f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31b9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31b9f4:
    // 0x31b9f4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_31b9f8:
    // 0x31b9f8: 0xc0cd8ec  jal         func_3363B0
label_31b9fc:
    if (ctx->pc == 0x31B9FCu) {
        ctx->pc = 0x31B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9F8u;
        // 0x31b9fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA00u;
        goto label_31ba00;
    }
    ctx->pc = 0x31B9F8u;
    SET_GPR_U32(ctx, 31, 0x31BA00u);
    ctx->pc = 0x31B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9F8u;
    // 0x31b9fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x31B9F8u, 0x31BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA00u;
label_31ba00:
    // 0x31ba00: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x31ba00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ba04:
    // 0x31ba04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31ba08:
    // 0x31ba08: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x31ba08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31ba0c:
    // 0x31ba0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31ba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ba10:
    // 0x31ba10: 0xc137866  jal         func_4DE198
label_31ba14:
    if (ctx->pc == 0x31BA14u) {
        ctx->pc = 0x31BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA10u;
        // 0x31ba14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA18u;
        goto label_31ba18;
    }
    ctx->pc = 0x31BA10u;
    SET_GPR_U32(ctx, 31, 0x31BA18u);
    ctx->pc = 0x31BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA10u;
    // 0x31ba14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x31BA10u, 0x31BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA18u;
label_31ba18:
    // 0x31ba18: 0xc0e409a  jal         func_390268
label_31ba1c:
    if (ctx->pc == 0x31BA1Cu) {
        ctx->pc = 0x31BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA18u;
        // 0x31ba1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA20u;
        goto label_31ba20;
    }
    ctx->pc = 0x31BA18u;
    SET_GPR_U32(ctx, 31, 0x31BA20u);
    ctx->pc = 0x31BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA18u;
    // 0x31ba1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31BA18u, 0x31BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA20u;
label_31ba20:
    // 0x31ba20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ba24:
    // 0x31ba24: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
label_31ba28:
    if (ctx->pc == 0x31BA28u) {
        ctx->pc = 0x31BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA24u;
        // 0x31ba28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA2Cu;
        goto label_31ba2c;
    }
    ctx->pc = 0x31BA24u;
    {
        const bool branch_taken_0x31ba24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA24u;
        // 0x31ba28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba24) {
            ctx->pc = 0x31BBC8u;
            goto label_31bbc8;
        }
    }
    ctx->pc = 0x31BA2Cu;
label_31ba2c:
    // 0x31ba2c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_31ba30:
    // 0x31ba30: 0xc089998  jal         func_226660
label_31ba34:
    if (ctx->pc == 0x31BA34u) {
        ctx->pc = 0x31BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA30u;
        // 0x31ba34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA38u;
        goto label_31ba38;
    }
    ctx->pc = 0x31BA30u;
    SET_GPR_U32(ctx, 31, 0x31BA38u);
    ctx->pc = 0x31BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA30u;
    // 0x31ba34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x31BA30u, 0x31BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA38u;
label_31ba38:
    // 0x31ba38: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
label_31ba3c:
    if (ctx->pc == 0x31BA3Cu) {
        ctx->pc = 0x31BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA38u;
        // 0x31ba3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA40u;
        goto label_31ba40;
    }
    ctx->pc = 0x31BA38u;
    {
        const bool branch_taken_0x31ba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ba38) {
            ctx->pc = 0x31BA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA38u;
            // 0x31ba3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBCCu;
            goto label_31bbcc;
        }
    }
    ctx->pc = 0x31BA40u;
label_31ba40:
    // 0x31ba40: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_31ba44:
    // 0x31ba44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ba48:
    // 0x31ba48: 0x54620060  bnel        $v1, $v0, . + 4 + (0x60 << 2)
label_31ba4c:
    if (ctx->pc == 0x31BA4Cu) {
        ctx->pc = 0x31BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA48u;
        // 0x31ba4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA50u;
        goto label_31ba50;
    }
    ctx->pc = 0x31BA48u;
    {
        const bool branch_taken_0x31ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ba48) {
            ctx->pc = 0x31BA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA48u;
            // 0x31ba4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBCCu;
            goto label_31bbcc;
        }
    }
    ctx->pc = 0x31BA50u;
label_31ba50:
    // 0x31ba50: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x31ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_31ba54:
    // 0x31ba54: 0xc0cd4ee  jal         func_3353B8
label_31ba58:
    if (ctx->pc == 0x31BA58u) {
        ctx->pc = 0x31BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA54u;
        // 0x31ba58: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA5Cu;
        goto label_31ba5c;
    }
    ctx->pc = 0x31BA54u;
    SET_GPR_U32(ctx, 31, 0x31BA5Cu);
    ctx->pc = 0x31BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA54u;
    // 0x31ba58: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31BA54u, 0x31BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA5Cu;
label_31ba5c:
    // 0x31ba5c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31ba5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_31ba60:
    // 0x31ba60: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_31ba64:
    if (ctx->pc == 0x31BA64u) {
        ctx->pc = 0x31BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA60u;
        // 0x31ba64: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA68u;
        goto label_31ba68;
    }
    ctx->pc = 0x31BA60u;
    {
        const bool branch_taken_0x31ba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA60u;
        // 0x31ba64: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba60) {
            ctx->pc = 0x31BBC8u;
            goto label_31bbc8;
        }
    }
    ctx->pc = 0x31BA68u;
label_31ba68:
    // 0x31ba68: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x31ba68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31ba6c:
    // 0x31ba6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31ba70:
    // 0x31ba70: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31ba74:
    // 0x31ba74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31ba78:
    // 0x31ba78: 0xc0cd8ec  jal         func_3363B0
label_31ba7c:
    if (ctx->pc == 0x31BA7Cu) {
        ctx->pc = 0x31BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA78u;
        // 0x31ba7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BA80u;
        goto label_31ba80;
    }
    ctx->pc = 0x31BA78u;
    SET_GPR_U32(ctx, 31, 0x31BA80u);
    ctx->pc = 0x31BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA78u;
    // 0x31ba7c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x31BA78u, 0x31BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA80u;
label_31ba80:
    // 0x31ba80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x31ba80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31ba84:
    // 0x31ba84: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x31ba84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31ba88:
    // 0x31ba88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x31ba88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_31ba8c:
    // 0x31ba8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31ba8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_31ba90:
    // 0x31ba90: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x31ba90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_31ba94:
    // 0x31ba94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x31ba94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_31ba98:
    // 0x31ba98: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x31ba98u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_31ba9c:
    // 0x31ba9c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x31ba9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_31baa0:
    // 0x31baa0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x31baa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_31baa4:
    // 0x31baa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31baa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31baa8:
    // 0x31baa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31baa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31baac:
    // 0x31baac: 0x0  nop
    ctx->pc = 0x31baacu;
    // NOP
label_31bab0:
    // 0x31bab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31bab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31bab4:
    // 0x31bab4: 0x0  nop
    ctx->pc = 0x31bab4u;
    // NOP
label_31bab8:
    // 0x31bab8: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
label_31babc:
    if (ctx->pc == 0x31BABCu) {
        ctx->pc = 0x31BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAB8u;
        // 0x31babc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAC0u;
        goto label_31bac0;
    }
    ctx->pc = 0x31BAB8u;
    {
        const bool branch_taken_0x31bab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31bab8) {
            ctx->pc = 0x31BABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BAB8u;
            // 0x31babc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBCCu;
            goto label_31bbcc;
        }
    }
    ctx->pc = 0x31BAC0u;
label_31bac0:
    // 0x31bac0: 0x56130022  bnel        $s0, $s3, . + 4 + (0x22 << 2)
label_31bac4:
    if (ctx->pc == 0x31BAC4u) {
        ctx->pc = 0x31BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAC0u;
        // 0x31bac4: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAC8u;
        goto label_31bac8;
    }
    ctx->pc = 0x31BAC0u;
    {
        const bool branch_taken_0x31bac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x31bac0) {
            ctx->pc = 0x31BAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BAC0u;
            // 0x31bac4: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BB4Cu;
            goto label_31bb4c;
        }
    }
    ctx->pc = 0x31BAC8u;
label_31bac8:
    // 0x31bac8: 0x9222003d  lbu         $v0, 0x3D($s1)
    ctx->pc = 0x31bac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_31bacc:
    // 0x31bacc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_31bad0:
    if (ctx->pc == 0x31BAD0u) {
        ctx->pc = 0x31BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BACCu;
        // 0x31bad0: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAD4u;
        goto label_31bad4;
    }
    ctx->pc = 0x31BACCu;
    {
        const bool branch_taken_0x31bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bacc) {
            ctx->pc = 0x31BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BACCu;
            // 0x31bad0: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BB4Cu;
            goto label_31bb4c;
        }
    }
    ctx->pc = 0x31BAD4u;
label_31bad4:
    // 0x31bad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bad8:
    // 0x31bad8: 0x9223003c  lbu         $v1, 0x3C($s1)
    ctx->pc = 0x31bad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_31badc:
    // 0x31badc: 0x1475000a  bne         $v1, $s5, . + 4 + (0xA << 2)
label_31bae0:
    if (ctx->pc == 0x31BAE0u) {
        ctx->pc = 0x31BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BADCu;
        // 0x31bae0: 0xa222003d  sb          $v0, 0x3D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAE4u;
        goto label_31bae4;
    }
    ctx->pc = 0x31BADCu;
    {
        const bool branch_taken_0x31badc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x31BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BADCu;
        // 0x31bae0: 0xa222003d  sb          $v0, 0x3D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31badc) {
            ctx->pc = 0x31BB08u;
            goto label_31bb08;
        }
    }
    ctx->pc = 0x31BAE4u;
label_31bae4:
    // 0x31bae4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bae8:
    // 0x31bae8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31bae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31baec:
    // 0x31baec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31baf0:
    // 0x31baf0: 0x40f809  jalr        $v0
label_31baf4:
    if (ctx->pc == 0x31BAF4u) {
        ctx->pc = 0x31BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF0u;
        // 0x31baf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BAF8u;
        goto label_31baf8;
    }
    ctx->pc = 0x31BAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BAF8u);
        ctx->pc = 0x31BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF0u;
        // 0x31baf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAF0u, 0x31BAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BAF8u;
label_31baf8:
    // 0x31baf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31baf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31bafc:
    // 0x31bafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bb00:
    // 0x31bb00: 0xc04773c  jal         func_11DCF0
label_31bb04:
    if (ctx->pc == 0x31BB04u) {
        ctx->pc = 0x31BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB00u;
        // 0x31bb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB08u;
        goto label_31bb08;
    }
    ctx->pc = 0x31BB00u;
    SET_GPR_U32(ctx, 31, 0x31BB08u);
    ctx->pc = 0x31BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB00u;
    // 0x31bb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCF0u, 0x31BB00u, 0x31BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB08u;
label_31bb08:
    // 0x31bb08: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x31bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_31bb0c:
    // 0x31bb0c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_31bb10:
    if (ctx->pc == 0x31BB10u) {
        ctx->pc = 0x31BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB0Cu;
        // 0x31bb10: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB14u;
        goto label_31bb14;
    }
    ctx->pc = 0x31BB0Cu;
    {
        const bool branch_taken_0x31bb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bb0c) {
            ctx->pc = 0x31BB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BB0Cu;
            // 0x31bb10: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BB4Cu;
            goto label_31bb4c;
        }
    }
    ctx->pc = 0x31BB14u;
label_31bb14:
    // 0x31bb14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bb18:
    // 0x31bb18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31bb18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31bb1c:
    // 0x31bb1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31bb20:
    // 0x31bb20: 0x40f809  jalr        $v0
label_31bb24:
    if (ctx->pc == 0x31BB24u) {
        ctx->pc = 0x31BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB20u;
        // 0x31bb24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB28u;
        goto label_31bb28;
    }
    ctx->pc = 0x31BB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BB28u);
        ctx->pc = 0x31BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB20u;
        // 0x31bb24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BB20u, 0x31BB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BB28u;
label_31bb28:
    // 0x31bb28: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x31bb28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_31bb2c:
    // 0x31bb2c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x31bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_31bb30:
    // 0x31bb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bb34:
    // 0x31bb34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31bb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bb38:
    // 0x31bb38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bb3c:
    // 0x31bb3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31bb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bb40:
    // 0x31bb40: 0xc08e568  jal         func_2395A0
label_31bb44:
    if (ctx->pc == 0x31BB44u) {
        ctx->pc = 0x31BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB40u;
        // 0x31bb44: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB48u;
        goto label_31bb48;
    }
    ctx->pc = 0x31BB40u;
    SET_GPR_U32(ctx, 31, 0x31BB48u);
    ctx->pc = 0x31BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB40u;
    // 0x31bb44: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x31BB40u, 0x31BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB48u;
label_31bb48:
    // 0x31bb48: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x31bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_31bb4c:
    // 0x31bb4c: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x31bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_31bb50:
    // 0x31bb50: 0xc043d5e  jal         func_10F578
label_31bb54:
    if (ctx->pc == 0x31BB54u) {
        ctx->pc = 0x31BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB50u;
        // 0x31bb54: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB58u;
        goto label_31bb58;
    }
    ctx->pc = 0x31BB50u;
    SET_GPR_U32(ctx, 31, 0x31BB58u);
    ctx->pc = 0x31BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB50u;
    // 0x31bb54: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31BB50u, 0x31BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB58u;
label_31bb58:
    // 0x31bb58: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_31bb5c:
    if (ctx->pc == 0x31BB5Cu) {
        ctx->pc = 0x31BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB58u;
        // 0x31bb5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB60u;
        goto label_31bb60;
    }
    ctx->pc = 0x31BB58u;
    {
        const bool branch_taken_0x31bb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB58u;
        // 0x31bb5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb58) {
            ctx->pc = 0x31BBA0u;
            goto label_31bba0;
        }
    }
    ctx->pc = 0x31BB60u;
label_31bb60:
    // 0x31bb60: 0xc0a47b4  jal         func_291ED0
label_31bb64:
    if (ctx->pc == 0x31BB64u) {
        ctx->pc = 0x31BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB60u;
        // 0x31bb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB68u;
        goto label_31bb68;
    }
    ctx->pc = 0x31BB60u;
    SET_GPR_U32(ctx, 31, 0x31BB68u);
    ctx->pc = 0x31BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB60u;
    // 0x31bb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x31BB60u, 0x31BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB68u;
label_31bb68:
    // 0x31bb68: 0x1455000d  bne         $v0, $s5, . + 4 + (0xD << 2)
label_31bb6c:
    if (ctx->pc == 0x31BB6Cu) {
        ctx->pc = 0x31BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB68u;
        // 0x31bb6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB70u;
        goto label_31bb70;
    }
    ctx->pc = 0x31BB68u;
    {
        const bool branch_taken_0x31bb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x31BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB68u;
        // 0x31bb6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb68) {
            ctx->pc = 0x31BBA0u;
            goto label_31bba0;
        }
    }
    ctx->pc = 0x31BB70u;
label_31bb70:
    // 0x31bb70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31bb74:
    // 0x31bb74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31bb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31bb78:
    // 0x31bb78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31bb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31bb7c:
    // 0x31bb7c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x31bb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_31bb80:
    // 0x31bb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bb84:
    // 0x31bb84: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x31bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_31bb88:
    // 0x31bb88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31bb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bb8c:
    // 0x31bb8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bb90:
    // 0x31bb90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31bb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bb94:
    // 0x31bb94: 0xc088178  jal         func_2205E0
label_31bb98:
    if (ctx->pc == 0x31BB98u) {
        ctx->pc = 0x31BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB94u;
        // 0x31bb98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BB9Cu;
        goto label_31bb9c;
    }
    ctx->pc = 0x31BB94u;
    SET_GPR_U32(ctx, 31, 0x31BB9Cu);
    ctx->pc = 0x31BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB94u;
    // 0x31bb98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x31BB94u, 0x31BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB9Cu;
label_31bb9c:
    // 0x31bb9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31bb9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31bba0:
    // 0x31bba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31bba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bba4:
    // 0x31bba4: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_31bba8:
    // 0x31bba8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31bbac:
    // 0x31bbac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bbb0:
    // 0x31bbb0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31bbb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_31bbb4:
    // 0x31bbb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31bbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bbb8:
    // 0x31bbb8: 0xc0968f8  jal         func_25A3E0
label_31bbbc:
    if (ctx->pc == 0x31BBBCu) {
        ctx->pc = 0x31BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBB8u;
        // 0x31bbbc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBC0u;
        goto label_31bbc0;
    }
    ctx->pc = 0x31BBB8u;
    SET_GPR_U32(ctx, 31, 0x31BBC0u);
    ctx->pc = 0x31BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBB8u;
    // 0x31bbbc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x31BBB8u, 0x31BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBC0u;
label_31bbc0:
    // 0x31bbc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_31bbc4:
    if (ctx->pc == 0x31BBC4u) {
        ctx->pc = 0x31BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBC0u;
        // 0x31bbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBC8u;
        goto label_31bbc8;
    }
    ctx->pc = 0x31BBC0u;
    {
        const bool branch_taken_0x31bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBC0u;
        // 0x31bbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbc0) {
            ctx->pc = 0x31BBDCu;
            goto label_31bbdc;
        }
    }
    ctx->pc = 0x31BBC8u;
label_31bbc8:
    // 0x31bbc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31bbcc:
    // 0x31bbcc: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31bbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31bbd0:
    // 0x31bbd0: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
label_31bbd4:
    if (ctx->pc == 0x31BBD4u) {
        ctx->pc = 0x31BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBD0u;
        // 0x31bbd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBD8u;
        goto label_31bbd8;
    }
    ctx->pc = 0x31BBD0u;
    {
        const bool branch_taken_0x31bbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBD0u;
        // 0x31bbd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbd0) {
            ctx->pc = 0x31BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ba10;
        }
    }
    ctx->pc = 0x31BBD8u;
label_31bbd8:
    // 0x31bbd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31bbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bbdc:
    // 0x31bbdc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31bbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31bbe0:
    // 0x31bbe0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31bbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31bbe4:
    // 0x31bbe4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31bbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31bbe8:
    // 0x31bbe8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31bbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31bbec:
    // 0x31bbec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31bbecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31bbf0:
    // 0x31bbf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31bbf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31bbf4:
    // 0x31bbf4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31bbf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31bbf8:
    // 0x31bbf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31bbfc:
    // 0x31bbfc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x31bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31bc00:
    // 0x31bc00: 0x3e00008  jr          $ra
label_31bc04:
    if (ctx->pc == 0x31BC04u) {
        ctx->pc = 0x31BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC00u;
        // 0x31bc04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC08u;
        goto label_fallthrough_0x31bc00;
    }
    ctx->pc = 0x31BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC00u;
        // 0x31bc04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31bc00:
    ctx->pc = 0x31BC08u;
}
