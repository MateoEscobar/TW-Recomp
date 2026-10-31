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

// Function: sub_0031A818
// Address: 0x31a818 - 0x31acb8
void sub_0031A818_0x31a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A818_0x31a818");
#endif

    switch (ctx->pc) {
        case 0x31a818u: goto label_31a818;
        case 0x31a81cu: goto label_31a81c;
        case 0x31a820u: goto label_31a820;
        case 0x31a824u: goto label_31a824;
        case 0x31a828u: goto label_31a828;
        case 0x31a82cu: goto label_31a82c;
        case 0x31a830u: goto label_31a830;
        case 0x31a834u: goto label_31a834;
        case 0x31a838u: goto label_31a838;
        case 0x31a83cu: goto label_31a83c;
        case 0x31a840u: goto label_31a840;
        case 0x31a844u: goto label_31a844;
        case 0x31a848u: goto label_31a848;
        case 0x31a84cu: goto label_31a84c;
        case 0x31a850u: goto label_31a850;
        case 0x31a854u: goto label_31a854;
        case 0x31a858u: goto label_31a858;
        case 0x31a85cu: goto label_31a85c;
        case 0x31a860u: goto label_31a860;
        case 0x31a864u: goto label_31a864;
        case 0x31a868u: goto label_31a868;
        case 0x31a86cu: goto label_31a86c;
        case 0x31a870u: goto label_31a870;
        case 0x31a874u: goto label_31a874;
        case 0x31a878u: goto label_31a878;
        case 0x31a87cu: goto label_31a87c;
        case 0x31a880u: goto label_31a880;
        case 0x31a884u: goto label_31a884;
        case 0x31a888u: goto label_31a888;
        case 0x31a88cu: goto label_31a88c;
        case 0x31a890u: goto label_31a890;
        case 0x31a894u: goto label_31a894;
        case 0x31a898u: goto label_31a898;
        case 0x31a89cu: goto label_31a89c;
        case 0x31a8a0u: goto label_31a8a0;
        case 0x31a8a4u: goto label_31a8a4;
        case 0x31a8a8u: goto label_31a8a8;
        case 0x31a8acu: goto label_31a8ac;
        case 0x31a8b0u: goto label_31a8b0;
        case 0x31a8b4u: goto label_31a8b4;
        case 0x31a8b8u: goto label_31a8b8;
        case 0x31a8bcu: goto label_31a8bc;
        case 0x31a8c0u: goto label_31a8c0;
        case 0x31a8c4u: goto label_31a8c4;
        case 0x31a8c8u: goto label_31a8c8;
        case 0x31a8ccu: goto label_31a8cc;
        case 0x31a8d0u: goto label_31a8d0;
        case 0x31a8d4u: goto label_31a8d4;
        case 0x31a8d8u: goto label_31a8d8;
        case 0x31a8dcu: goto label_31a8dc;
        case 0x31a8e0u: goto label_31a8e0;
        case 0x31a8e4u: goto label_31a8e4;
        case 0x31a8e8u: goto label_31a8e8;
        case 0x31a8ecu: goto label_31a8ec;
        case 0x31a8f0u: goto label_31a8f0;
        case 0x31a8f4u: goto label_31a8f4;
        case 0x31a8f8u: goto label_31a8f8;
        case 0x31a8fcu: goto label_31a8fc;
        case 0x31a900u: goto label_31a900;
        case 0x31a904u: goto label_31a904;
        case 0x31a908u: goto label_31a908;
        case 0x31a90cu: goto label_31a90c;
        case 0x31a910u: goto label_31a910;
        case 0x31a914u: goto label_31a914;
        case 0x31a918u: goto label_31a918;
        case 0x31a91cu: goto label_31a91c;
        case 0x31a920u: goto label_31a920;
        case 0x31a924u: goto label_31a924;
        case 0x31a928u: goto label_31a928;
        case 0x31a92cu: goto label_31a92c;
        case 0x31a930u: goto label_31a930;
        case 0x31a934u: goto label_31a934;
        case 0x31a938u: goto label_31a938;
        case 0x31a93cu: goto label_31a93c;
        case 0x31a940u: goto label_31a940;
        case 0x31a944u: goto label_31a944;
        case 0x31a948u: goto label_31a948;
        case 0x31a94cu: goto label_31a94c;
        case 0x31a950u: goto label_31a950;
        case 0x31a954u: goto label_31a954;
        case 0x31a958u: goto label_31a958;
        case 0x31a95cu: goto label_31a95c;
        case 0x31a960u: goto label_31a960;
        case 0x31a964u: goto label_31a964;
        case 0x31a968u: goto label_31a968;
        case 0x31a96cu: goto label_31a96c;
        case 0x31a970u: goto label_31a970;
        case 0x31a974u: goto label_31a974;
        case 0x31a978u: goto label_31a978;
        case 0x31a97cu: goto label_31a97c;
        case 0x31a980u: goto label_31a980;
        case 0x31a984u: goto label_31a984;
        case 0x31a988u: goto label_31a988;
        case 0x31a98cu: goto label_31a98c;
        case 0x31a990u: goto label_31a990;
        case 0x31a994u: goto label_31a994;
        case 0x31a998u: goto label_31a998;
        case 0x31a99cu: goto label_31a99c;
        case 0x31a9a0u: goto label_31a9a0;
        case 0x31a9a4u: goto label_31a9a4;
        case 0x31a9a8u: goto label_31a9a8;
        case 0x31a9acu: goto label_31a9ac;
        case 0x31a9b0u: goto label_31a9b0;
        case 0x31a9b4u: goto label_31a9b4;
        case 0x31a9b8u: goto label_31a9b8;
        case 0x31a9bcu: goto label_31a9bc;
        case 0x31a9c0u: goto label_31a9c0;
        case 0x31a9c4u: goto label_31a9c4;
        case 0x31a9c8u: goto label_31a9c8;
        case 0x31a9ccu: goto label_31a9cc;
        case 0x31a9d0u: goto label_31a9d0;
        case 0x31a9d4u: goto label_31a9d4;
        case 0x31a9d8u: goto label_31a9d8;
        case 0x31a9dcu: goto label_31a9dc;
        case 0x31a9e0u: goto label_31a9e0;
        case 0x31a9e4u: goto label_31a9e4;
        case 0x31a9e8u: goto label_31a9e8;
        case 0x31a9ecu: goto label_31a9ec;
        case 0x31a9f0u: goto label_31a9f0;
        case 0x31a9f4u: goto label_31a9f4;
        case 0x31a9f8u: goto label_31a9f8;
        case 0x31a9fcu: goto label_31a9fc;
        case 0x31aa00u: goto label_31aa00;
        case 0x31aa04u: goto label_31aa04;
        case 0x31aa08u: goto label_31aa08;
        case 0x31aa0cu: goto label_31aa0c;
        case 0x31aa10u: goto label_31aa10;
        case 0x31aa14u: goto label_31aa14;
        case 0x31aa18u: goto label_31aa18;
        case 0x31aa1cu: goto label_31aa1c;
        case 0x31aa20u: goto label_31aa20;
        case 0x31aa24u: goto label_31aa24;
        case 0x31aa28u: goto label_31aa28;
        case 0x31aa2cu: goto label_31aa2c;
        case 0x31aa30u: goto label_31aa30;
        case 0x31aa34u: goto label_31aa34;
        case 0x31aa38u: goto label_31aa38;
        case 0x31aa3cu: goto label_31aa3c;
        case 0x31aa40u: goto label_31aa40;
        case 0x31aa44u: goto label_31aa44;
        case 0x31aa48u: goto label_31aa48;
        case 0x31aa4cu: goto label_31aa4c;
        case 0x31aa50u: goto label_31aa50;
        case 0x31aa54u: goto label_31aa54;
        case 0x31aa58u: goto label_31aa58;
        case 0x31aa5cu: goto label_31aa5c;
        case 0x31aa60u: goto label_31aa60;
        case 0x31aa64u: goto label_31aa64;
        case 0x31aa68u: goto label_31aa68;
        case 0x31aa6cu: goto label_31aa6c;
        case 0x31aa70u: goto label_31aa70;
        case 0x31aa74u: goto label_31aa74;
        case 0x31aa78u: goto label_31aa78;
        case 0x31aa7cu: goto label_31aa7c;
        case 0x31aa80u: goto label_31aa80;
        case 0x31aa84u: goto label_31aa84;
        case 0x31aa88u: goto label_31aa88;
        case 0x31aa8cu: goto label_31aa8c;
        case 0x31aa90u: goto label_31aa90;
        case 0x31aa94u: goto label_31aa94;
        case 0x31aa98u: goto label_31aa98;
        case 0x31aa9cu: goto label_31aa9c;
        case 0x31aaa0u: goto label_31aaa0;
        case 0x31aaa4u: goto label_31aaa4;
        case 0x31aaa8u: goto label_31aaa8;
        case 0x31aaacu: goto label_31aaac;
        case 0x31aab0u: goto label_31aab0;
        case 0x31aab4u: goto label_31aab4;
        case 0x31aab8u: goto label_31aab8;
        case 0x31aabcu: goto label_31aabc;
        case 0x31aac0u: goto label_31aac0;
        case 0x31aac4u: goto label_31aac4;
        case 0x31aac8u: goto label_31aac8;
        case 0x31aaccu: goto label_31aacc;
        case 0x31aad0u: goto label_31aad0;
        case 0x31aad4u: goto label_31aad4;
        case 0x31aad8u: goto label_31aad8;
        case 0x31aadcu: goto label_31aadc;
        case 0x31aae0u: goto label_31aae0;
        case 0x31aae4u: goto label_31aae4;
        case 0x31aae8u: goto label_31aae8;
        case 0x31aaecu: goto label_31aaec;
        case 0x31aaf0u: goto label_31aaf0;
        case 0x31aaf4u: goto label_31aaf4;
        case 0x31aaf8u: goto label_31aaf8;
        case 0x31aafcu: goto label_31aafc;
        case 0x31ab00u: goto label_31ab00;
        case 0x31ab04u: goto label_31ab04;
        case 0x31ab08u: goto label_31ab08;
        case 0x31ab0cu: goto label_31ab0c;
        case 0x31ab10u: goto label_31ab10;
        case 0x31ab14u: goto label_31ab14;
        case 0x31ab18u: goto label_31ab18;
        case 0x31ab1cu: goto label_31ab1c;
        case 0x31ab20u: goto label_31ab20;
        case 0x31ab24u: goto label_31ab24;
        case 0x31ab28u: goto label_31ab28;
        case 0x31ab2cu: goto label_31ab2c;
        case 0x31ab30u: goto label_31ab30;
        case 0x31ab34u: goto label_31ab34;
        case 0x31ab38u: goto label_31ab38;
        case 0x31ab3cu: goto label_31ab3c;
        case 0x31ab40u: goto label_31ab40;
        case 0x31ab44u: goto label_31ab44;
        case 0x31ab48u: goto label_31ab48;
        case 0x31ab4cu: goto label_31ab4c;
        case 0x31ab50u: goto label_31ab50;
        case 0x31ab54u: goto label_31ab54;
        case 0x31ab58u: goto label_31ab58;
        case 0x31ab5cu: goto label_31ab5c;
        case 0x31ab60u: goto label_31ab60;
        case 0x31ab64u: goto label_31ab64;
        case 0x31ab68u: goto label_31ab68;
        case 0x31ab6cu: goto label_31ab6c;
        case 0x31ab70u: goto label_31ab70;
        case 0x31ab74u: goto label_31ab74;
        case 0x31ab78u: goto label_31ab78;
        case 0x31ab7cu: goto label_31ab7c;
        case 0x31ab80u: goto label_31ab80;
        case 0x31ab84u: goto label_31ab84;
        case 0x31ab88u: goto label_31ab88;
        case 0x31ab8cu: goto label_31ab8c;
        case 0x31ab90u: goto label_31ab90;
        case 0x31ab94u: goto label_31ab94;
        case 0x31ab98u: goto label_31ab98;
        case 0x31ab9cu: goto label_31ab9c;
        case 0x31aba0u: goto label_31aba0;
        case 0x31aba4u: goto label_31aba4;
        case 0x31aba8u: goto label_31aba8;
        case 0x31abacu: goto label_31abac;
        case 0x31abb0u: goto label_31abb0;
        case 0x31abb4u: goto label_31abb4;
        case 0x31abb8u: goto label_31abb8;
        case 0x31abbcu: goto label_31abbc;
        case 0x31abc0u: goto label_31abc0;
        case 0x31abc4u: goto label_31abc4;
        case 0x31abc8u: goto label_31abc8;
        case 0x31abccu: goto label_31abcc;
        case 0x31abd0u: goto label_31abd0;
        case 0x31abd4u: goto label_31abd4;
        case 0x31abd8u: goto label_31abd8;
        case 0x31abdcu: goto label_31abdc;
        case 0x31abe0u: goto label_31abe0;
        case 0x31abe4u: goto label_31abe4;
        case 0x31abe8u: goto label_31abe8;
        case 0x31abecu: goto label_31abec;
        case 0x31abf0u: goto label_31abf0;
        case 0x31abf4u: goto label_31abf4;
        case 0x31abf8u: goto label_31abf8;
        case 0x31abfcu: goto label_31abfc;
        case 0x31ac00u: goto label_31ac00;
        case 0x31ac04u: goto label_31ac04;
        case 0x31ac08u: goto label_31ac08;
        case 0x31ac0cu: goto label_31ac0c;
        case 0x31ac10u: goto label_31ac10;
        case 0x31ac14u: goto label_31ac14;
        case 0x31ac18u: goto label_31ac18;
        case 0x31ac1cu: goto label_31ac1c;
        case 0x31ac20u: goto label_31ac20;
        case 0x31ac24u: goto label_31ac24;
        case 0x31ac28u: goto label_31ac28;
        case 0x31ac2cu: goto label_31ac2c;
        case 0x31ac30u: goto label_31ac30;
        case 0x31ac34u: goto label_31ac34;
        case 0x31ac38u: goto label_31ac38;
        case 0x31ac3cu: goto label_31ac3c;
        case 0x31ac40u: goto label_31ac40;
        case 0x31ac44u: goto label_31ac44;
        case 0x31ac48u: goto label_31ac48;
        case 0x31ac4cu: goto label_31ac4c;
        case 0x31ac50u: goto label_31ac50;
        case 0x31ac54u: goto label_31ac54;
        case 0x31ac58u: goto label_31ac58;
        case 0x31ac5cu: goto label_31ac5c;
        case 0x31ac60u: goto label_31ac60;
        case 0x31ac64u: goto label_31ac64;
        case 0x31ac68u: goto label_31ac68;
        case 0x31ac6cu: goto label_31ac6c;
        case 0x31ac70u: goto label_31ac70;
        case 0x31ac74u: goto label_31ac74;
        case 0x31ac78u: goto label_31ac78;
        case 0x31ac7cu: goto label_31ac7c;
        case 0x31ac80u: goto label_31ac80;
        case 0x31ac84u: goto label_31ac84;
        case 0x31ac88u: goto label_31ac88;
        case 0x31ac8cu: goto label_31ac8c;
        case 0x31ac90u: goto label_31ac90;
        case 0x31ac94u: goto label_31ac94;
        case 0x31ac98u: goto label_31ac98;
        case 0x31ac9cu: goto label_31ac9c;
        case 0x31aca0u: goto label_31aca0;
        case 0x31aca4u: goto label_31aca4;
        case 0x31aca8u: goto label_31aca8;
        case 0x31acacu: goto label_31acac;
        case 0x31acb0u: goto label_31acb0;
        case 0x31acb4u: goto label_31acb4;
        default: break;
    }

    ctx->pc = 0x31a818u;

label_31a818:
    // 0x31a818: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_31a81c:
    // 0x31a81c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_31a820:
    // 0x31a820: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_31a824:
    // 0x31a824: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_31a828:
    // 0x31a828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31a828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a82c:
    // 0x31a82c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_31a830:
    // 0x31a830: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31a830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31a834:
    // 0x31a834: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_31a838:
    // 0x31a838: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31a838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31a83c:
    // 0x31a83c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_31a840:
    // 0x31a840: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_31a844:
    // 0x31a844: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31a844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_31a848:
    // 0x31a848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31a84c:
    // 0x31a84c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x31a84cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_31a850:
    // 0x31a850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_31a854:
    // 0x31a854: 0x8e950024  lw          $s5, 0x24($s4)
    ctx->pc = 0x31a854u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_31a858:
    // 0x31a858: 0x8e920020  lw          $s2, 0x20($s4)
    ctx->pc = 0x31a858u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_31a85c:
    // 0x31a85c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x31a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31a860:
    // 0x31a860: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31a860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31a864:
    // 0x31a864: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31a868:
    // 0x31a868: 0x40f809  jalr        $v0
label_31a86c:
    if (ctx->pc == 0x31A86Cu) {
        ctx->pc = 0x31A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A868u;
        // 0x31a86c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A870u;
        goto label_31a870;
    }
    ctx->pc = 0x31A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31A870u);
        ctx->pc = 0x31A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A868u;
        // 0x31a86c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A868u, 0x31A870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A870u;
label_31a870:
    // 0x31a870: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x31a870u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a874:
    // 0x31a874: 0xc087502  jal         func_21D408
label_31a878:
    if (ctx->pc == 0x31A878u) {
        ctx->pc = 0x31A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A874u;
        // 0x31a878: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A87Cu;
        goto label_31a87c;
    }
    ctx->pc = 0x31A874u;
    SET_GPR_U32(ctx, 31, 0x31A87Cu);
    ctx->pc = 0x31A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A874u;
    // 0x31a878: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31A874u, 0x31A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A87Cu;
label_31a87c:
    // 0x31a87c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a880:
    // 0x31a880: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31a880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31a884:
    // 0x31a884: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31a888:
    if (ctx->pc == 0x31A888u) {
        ctx->pc = 0x31A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A884u;
        // 0x31a888: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A88Cu;
        goto label_31a88c;
    }
    ctx->pc = 0x31A884u;
    {
        const bool branch_taken_0x31a884 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A884u;
        // 0x31a888: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a884) {
            ctx->pc = 0x31A898u;
            goto label_31a898;
        }
    }
    ctx->pc = 0x31A88Cu;
label_31a88c:
    // 0x31a88c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31a890:
    // 0x31a890: 0x10000002  b           . + 4 + (0x2 << 2)
label_31a894:
    if (ctx->pc == 0x31A894u) {
        ctx->pc = 0x31A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A890u;
        // 0x31a894: 0x8c560040  lw          $s6, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A898u;
        goto label_31a898;
    }
    ctx->pc = 0x31A890u;
    {
        const bool branch_taken_0x31a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A890u;
        // 0x31a894: 0x8c560040  lw          $s6, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a890) {
            ctx->pc = 0x31A89Cu;
            goto label_31a89c;
        }
    }
    ctx->pc = 0x31A898u;
label_31a898:
    // 0x31a898: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31a898u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a89c:
    // 0x31a89c: 0xc088edc  jal         func_223B70
label_31a8a0:
    if (ctx->pc == 0x31A8A0u) {
        ctx->pc = 0x31A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A89Cu;
        // 0x31a8a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8A4u;
        goto label_31a8a4;
    }
    ctx->pc = 0x31A89Cu;
    SET_GPR_U32(ctx, 31, 0x31A8A4u);
    ctx->pc = 0x31A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A89Cu;
    // 0x31a8a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31A89Cu, 0x31A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8A4u;
label_31a8a4:
    // 0x31a8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a8a8:
    // 0x31a8a8: 0x104300f6  beq         $v0, $v1, . + 4 + (0xF6 << 2)
label_31a8ac:
    if (ctx->pc == 0x31A8ACu) {
        ctx->pc = 0x31A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A8u;
        // 0x31a8ac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8B0u;
        goto label_31a8b0;
    }
    ctx->pc = 0x31A8A8u;
    {
        const bool branch_taken_0x31a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A8u;
        // 0x31a8ac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8a8) {
            ctx->pc = 0x31AC84u;
            goto label_31ac84;
        }
    }
    ctx->pc = 0x31A8B0u;
label_31a8b0:
    // 0x31a8b0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_31a8b4:
    if (ctx->pc == 0x31A8B4u) {
        ctx->pc = 0x31A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8B0u;
        // 0x31a8b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8B8u;
        goto label_31a8b8;
    }
    ctx->pc = 0x31A8B0u;
    {
        const bool branch_taken_0x31a8b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8B0u;
        // 0x31a8b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8b0) {
            ctx->pc = 0x31A8C0u;
            goto label_31a8c0;
        }
    }
    ctx->pc = 0x31A8B8u;
label_31a8b8:
    // 0x31a8b8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_31a8bc:
    if (ctx->pc == 0x31A8BCu) {
        ctx->pc = 0x31A8C0u;
        goto label_31a8c0;
    }
    ctx->pc = 0x31A8B8u;
    {
        const bool branch_taken_0x31a8b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x31a8b8) {
            ctx->pc = 0x31A8C8u;
            goto label_31a8c8;
        }
    }
    ctx->pc = 0x31A8C0u;
label_31a8c0:
    // 0x31a8c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_31a8c4:
    if (ctx->pc == 0x31A8C4u) {
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8C0u;
        // 0x31a8c4: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8C8u;
        goto label_31a8c8;
    }
    ctx->pc = 0x31A8C0u;
    {
        const bool branch_taken_0x31a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8C0u;
        // 0x31a8c4: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8c0) {
            ctx->pc = 0x31A910u;
            goto label_31a910;
        }
    }
    ctx->pc = 0x31A8C8u;
label_31a8c8:
    // 0x31a8c8: 0x16430011  bne         $s2, $v1, . + 4 + (0x11 << 2)
label_31a8cc:
    if (ctx->pc == 0x31A8CCu) {
        ctx->pc = 0x31A8D0u;
        goto label_31a8d0;
    }
    ctx->pc = 0x31A8C8u;
    {
        const bool branch_taken_0x31a8c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x31a8c8) {
            ctx->pc = 0x31A910u;
            goto label_31a910;
        }
    }
    ctx->pc = 0x31A8D0u;
label_31a8d0:
    // 0x31a8d0: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x31a8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
label_31a8d4:
    // 0x31a8d4: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
label_31a8d8:
    if (ctx->pc == 0x31A8D8u) {
        ctx->pc = 0x31A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8D4u;
        // 0x31a8d8: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8DCu;
        goto label_31a8dc;
    }
    ctx->pc = 0x31A8D4u;
    {
        const bool branch_taken_0x31a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31a8d4) {
            ctx->pc = 0x31A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A8D4u;
            // 0x31a8d8: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A910u;
            goto label_31a910;
        }
    }
    ctx->pc = 0x31A8DCu;
label_31a8dc:
    // 0x31a8dc: 0xc087502  jal         func_21D408
label_31a8e0:
    if (ctx->pc == 0x31A8E0u) {
        ctx->pc = 0x31A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8DCu;
        // 0x31a8e0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8E4u;
        goto label_31a8e4;
    }
    ctx->pc = 0x31A8DCu;
    SET_GPR_U32(ctx, 31, 0x31A8E4u);
    ctx->pc = 0x31A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8DCu;
    // 0x31a8e0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31A8DCu, 0x31A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8E4u;
label_31a8e4:
    // 0x31a8e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31a8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a8e8:
    // 0x31a8e8: 0xc0a404e  jal         func_290138
label_31a8ec:
    if (ctx->pc == 0x31A8ECu) {
        ctx->pc = 0x31A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8E8u;
        // 0x31a8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8F0u;
        goto label_31a8f0;
    }
    ctx->pc = 0x31A8E8u;
    SET_GPR_U32(ctx, 31, 0x31A8F0u);
    ctx->pc = 0x31A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8E8u;
    // 0x31a8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x31A8E8u, 0x31A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8F0u;
label_31a8f0:
    // 0x31a8f0: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
label_31a8f4:
    if (ctx->pc == 0x31A8F4u) {
        ctx->pc = 0x31A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F0u;
        // 0x31a8f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A8F8u;
        goto label_31a8f8;
    }
    ctx->pc = 0x31A8F0u;
    {
        const bool branch_taken_0x31a8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x31A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F0u;
        // 0x31a8f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8f0) {
            ctx->pc = 0x31A910u;
            goto label_31a910;
        }
    }
    ctx->pc = 0x31A8F8u;
label_31a8f8:
    // 0x31a8f8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x31a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31a8fc:
    // 0x31a8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a900:
    // 0x31a900: 0xc0888a2  jal         func_222288
label_31a904:
    if (ctx->pc == 0x31A904u) {
        ctx->pc = 0x31A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A900u;
        // 0x31a904: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A908u;
        goto label_31a908;
    }
    ctx->pc = 0x31A900u;
    SET_GPR_U32(ctx, 31, 0x31A908u);
    ctx->pc = 0x31A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A900u;
    // 0x31a904: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x31A900u, 0x31A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A908u;
label_31a908:
    // 0x31a908: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_31a90c:
    if (ctx->pc == 0x31A90Cu) {
        ctx->pc = 0x31A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A908u;
        // 0x31a90c: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A910u;
        goto label_31a910;
    }
    ctx->pc = 0x31A908u;
    {
        const bool branch_taken_0x31a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31a908) {
            ctx->pc = 0x31A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A908u;
            // 0x31a90c: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A910u;
            goto label_31a910;
        }
    }
    ctx->pc = 0x31A910u;
label_31a910:
    // 0x31a910: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_31a914:
    if (ctx->pc == 0x31A914u) {
        ctx->pc = 0x31A918u;
        goto label_31a918;
    }
    ctx->pc = 0x31A910u;
    {
        const bool branch_taken_0x31a910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a910) {
            ctx->pc = 0x31A94Cu;
            goto label_31a94c;
        }
    }
    ctx->pc = 0x31A918u;
label_31a918:
    // 0x31a918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a91c:
    // 0x31a91c: 0xc0a4162  jal         func_290588
label_31a920:
    if (ctx->pc == 0x31A920u) {
        ctx->pc = 0x31A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A91Cu;
        // 0x31a920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A924u;
        goto label_31a924;
    }
    ctx->pc = 0x31A91Cu;
    SET_GPR_U32(ctx, 31, 0x31A924u);
    ctx->pc = 0x31A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A91Cu;
    // 0x31a920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x31A91Cu, 0x31A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A924u;
label_31a924:
    // 0x31a924: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
label_31a928:
    if (ctx->pc == 0x31A928u) {
        ctx->pc = 0x31A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A924u;
        // 0x31a928: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A92Cu;
        goto label_31a92c;
    }
    ctx->pc = 0x31A924u;
    {
        const bool branch_taken_0x31a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A924u;
        // 0x31a928: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a924) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31A92Cu;
label_31a92c:
    // 0x31a92c: 0xc087502  jal         func_21D408
label_31a930:
    if (ctx->pc == 0x31A930u) {
        ctx->pc = 0x31A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A92Cu;
        // 0x31a930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A934u;
        goto label_31a934;
    }
    ctx->pc = 0x31A92Cu;
    SET_GPR_U32(ctx, 31, 0x31A934u);
    ctx->pc = 0x31A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A92Cu;
    // 0x31a930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31A92Cu, 0x31A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A934u;
label_31a934:
    // 0x31a934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31a934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a938:
    // 0x31a938: 0xc0a408c  jal         func_290230
label_31a93c:
    if (ctx->pc == 0x31A93Cu) {
        ctx->pc = 0x31A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A938u;
        // 0x31a93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A940u;
        goto label_31a940;
    }
    ctx->pc = 0x31A938u;
    SET_GPR_U32(ctx, 31, 0x31A940u);
    ctx->pc = 0x31A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A938u;
    // 0x31a93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x31A938u, 0x31A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A940u;
label_31a940:
    // 0x31a940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a944:
    // 0x31a944: 0x104300d0  beq         $v0, $v1, . + 4 + (0xD0 << 2)
label_31a948:
    if (ctx->pc == 0x31A948u) {
        ctx->pc = 0x31A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A944u;
        // 0x31a948: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A94Cu;
        goto label_31a94c;
    }
    ctx->pc = 0x31A944u;
    {
        const bool branch_taken_0x31a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A944u;
        // 0x31a948: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a944) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31A94Cu;
label_31a94c:
    // 0x31a94c: 0x12c0005c  beqz        $s6, . + 4 + (0x5C << 2)
label_31a950:
    if (ctx->pc == 0x31A950u) {
        ctx->pc = 0x31A954u;
        goto label_31a954;
    }
    ctx->pc = 0x31A94Cu;
    {
        const bool branch_taken_0x31a94c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a94c) {
            ctx->pc = 0x31AAC0u;
            goto label_31aac0;
        }
    }
    ctx->pc = 0x31A954u;
label_31a954:
    // 0x31a954: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_31a958:
    if (ctx->pc == 0x31A958u) {
        ctx->pc = 0x31A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A954u;
        // 0x31a958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A95Cu;
        goto label_31a95c;
    }
    ctx->pc = 0x31A954u;
    {
        const bool branch_taken_0x31a954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A954u;
        // 0x31a958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a954) {
            ctx->pc = 0x31A9BCu;
            goto label_31a9bc;
        }
    }
    ctx->pc = 0x31A95Cu;
label_31a95c:
    // 0x31a95c: 0xc08a076  jal         func_2281D8
label_31a960:
    if (ctx->pc == 0x31A960u) {
        ctx->pc = 0x31A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A95Cu;
        // 0x31a960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A964u;
        goto label_31a964;
    }
    ctx->pc = 0x31A95Cu;
    SET_GPR_U32(ctx, 31, 0x31A964u);
    ctx->pc = 0x31A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A95Cu;
    // 0x31a960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x31A95Cu, 0x31A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A964u;
label_31a964:
    // 0x31a964: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31a964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a968:
    // 0x31a968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a96c:
    // 0x31a96c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_31a970:
    if (ctx->pc == 0x31A970u) {
        ctx->pc = 0x31A974u;
        goto label_31a974;
    }
    ctx->pc = 0x31A96Cu;
    {
        const bool branch_taken_0x31a96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31a96c) {
            ctx->pc = 0x31A98Cu;
            goto label_31a98c;
        }
    }
    ctx->pc = 0x31A974u;
label_31a974:
    // 0x31a974: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
label_31a978:
    if (ctx->pc == 0x31A978u) {
        ctx->pc = 0x31A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A974u;
        // 0x31a978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A97Cu;
        goto label_31a97c;
    }
    ctx->pc = 0x31A974u;
    {
        const bool branch_taken_0x31a974 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A974u;
        // 0x31a978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a974) {
            ctx->pc = 0x31A98Cu;
            goto label_31a98c;
        }
    }
    ctx->pc = 0x31A97Cu;
label_31a97c:
    // 0x31a97c: 0xc0a4742  jal         func_291D08
label_31a980:
    if (ctx->pc == 0x31A980u) {
        ctx->pc = 0x31A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A97Cu;
        // 0x31a980: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A984u;
        goto label_31a984;
    }
    ctx->pc = 0x31A97Cu;
    SET_GPR_U32(ctx, 31, 0x31A984u);
    ctx->pc = 0x31A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A97Cu;
    // 0x31a980: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x31A97Cu, 0x31A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A984u;
label_31a984:
    // 0x31a984: 0x105200c0  beq         $v0, $s2, . + 4 + (0xC0 << 2)
label_31a988:
    if (ctx->pc == 0x31A988u) {
        ctx->pc = 0x31A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A984u;
        // 0x31a988: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A98Cu;
        goto label_31a98c;
    }
    ctx->pc = 0x31A984u;
    {
        const bool branch_taken_0x31a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x31A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A984u;
        // 0x31a988: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a984) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31A98Cu;
label_31a98c:
    // 0x31a98c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_31a990:
    if (ctx->pc == 0x31A990u) {
        ctx->pc = 0x31A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A98Cu;
        // 0x31a990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A994u;
        goto label_31a994;
    }
    ctx->pc = 0x31A98Cu;
    {
        const bool branch_taken_0x31a98c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A98Cu;
        // 0x31a990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a98c) {
            ctx->pc = 0x31A9B8u;
            goto label_31a9b8;
        }
    }
    ctx->pc = 0x31A994u;
label_31a994:
    // 0x31a994: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_31a998:
    if (ctx->pc == 0x31A998u) {
        ctx->pc = 0x31A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A994u;
        // 0x31a998: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A99Cu;
        goto label_31a99c;
    }
    ctx->pc = 0x31A994u;
    {
        const bool branch_taken_0x31a994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A994u;
        // 0x31a998: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a994) {
            ctx->pc = 0x31A9B8u;
            goto label_31a9b8;
        }
    }
    ctx->pc = 0x31A99Cu;
label_31a99c:
    // 0x31a99c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x31a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_31a9a0:
    // 0x31a9a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31a9a4:
    // 0x31a9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31a9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31a9a8:
    // 0x31a9a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a9ac:
    // 0x31a9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31a9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a9b0:
    // 0x31a9b0: 0xc0a4d90  jal         func_293640
label_31a9b4:
    if (ctx->pc == 0x31A9B4u) {
        ctx->pc = 0x31A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9B0u;
        // 0x31a9b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9B8u;
        goto label_31a9b8;
    }
    ctx->pc = 0x31A9B0u;
    SET_GPR_U32(ctx, 31, 0x31A9B8u);
    ctx->pc = 0x31A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9B0u;
    // 0x31a9b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x31A9B0u, 0x31A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9B8u;
label_31a9b8:
    // 0x31a9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a9bc:
    // 0x31a9bc: 0xc0a40d2  jal         func_290348
label_31a9c0:
    if (ctx->pc == 0x31A9C0u) {
        ctx->pc = 0x31A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9BCu;
        // 0x31a9c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9C4u;
        goto label_31a9c4;
    }
    ctx->pc = 0x31A9BCu;
    SET_GPR_U32(ctx, 31, 0x31A9C4u);
    ctx->pc = 0x31A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9BCu;
    // 0x31a9c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31A9BCu, 0x31A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9C4u;
label_31a9c4:
    // 0x31a9c4: 0x14500010  bne         $v0, $s0, . + 4 + (0x10 << 2)
label_31a9c8:
    if (ctx->pc == 0x31A9C8u) {
        ctx->pc = 0x31A9CCu;
        goto label_31a9cc;
    }
    ctx->pc = 0x31A9C4u;
    {
        const bool branch_taken_0x31a9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x31a9c4) {
            ctx->pc = 0x31AA08u;
            goto label_31aa08;
        }
    }
    ctx->pc = 0x31A9CCu;
label_31a9cc:
    // 0x31a9cc: 0x526000ae  beql        $s3, $zero, . + 4 + (0xAE << 2)
label_31a9d0:
    if (ctx->pc == 0x31A9D0u) {
        ctx->pc = 0x31A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9CCu;
        // 0x31a9d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9D4u;
        goto label_31a9d4;
    }
    ctx->pc = 0x31A9CCu;
    {
        const bool branch_taken_0x31a9cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a9cc) {
            ctx->pc = 0x31A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A9CCu;
            // 0x31a9d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31A9D4u;
label_31a9d4:
    // 0x31a9d4: 0x12500003  beq         $s2, $s0, . + 4 + (0x3 << 2)
label_31a9d8:
    if (ctx->pc == 0x31A9D8u) {
        ctx->pc = 0x31A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9D4u;
        // 0x31a9d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9DCu;
        goto label_31a9dc;
    }
    ctx->pc = 0x31A9D4u;
    {
        const bool branch_taken_0x31a9d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x31A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9D4u;
        // 0x31a9d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9d4) {
            ctx->pc = 0x31A9E4u;
            goto label_31a9e4;
        }
    }
    ctx->pc = 0x31A9DCu;
label_31a9dc:
    // 0x31a9dc: 0x164200aa  bne         $s2, $v0, . + 4 + (0xAA << 2)
label_31a9e0:
    if (ctx->pc == 0x31A9E0u) {
        ctx->pc = 0x31A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9DCu;
        // 0x31a9e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9E4u;
        goto label_31a9e4;
    }
    ctx->pc = 0x31A9DCu;
    {
        const bool branch_taken_0x31a9dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9DCu;
        // 0x31a9e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9dc) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31A9E4u;
label_31a9e4:
    // 0x31a9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a9e8:
    // 0x31a9e8: 0xc0a354e  jal         func_28D538
label_31a9ec:
    if (ctx->pc == 0x31A9ECu) {
        ctx->pc = 0x31A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9E8u;
        // 0x31a9ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A9F0u;
        goto label_31a9f0;
    }
    ctx->pc = 0x31A9E8u;
    SET_GPR_U32(ctx, 31, 0x31A9F0u);
    ctx->pc = 0x31A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9E8u;
    // 0x31a9ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x31A9E8u, 0x31A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9F0u;
label_31a9f0:
    // 0x31a9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a9f4:
    // 0x31a9f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31a9f8:
    // 0x31a9f8: 0xc0a33f8  jal         func_28CFE0
label_31a9fc:
    if (ctx->pc == 0x31A9FCu) {
        ctx->pc = 0x31A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9F8u;
        // 0x31a9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA00u;
        goto label_31aa00;
    }
    ctx->pc = 0x31A9F8u;
    SET_GPR_U32(ctx, 31, 0x31AA00u);
    ctx->pc = 0x31A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9F8u;
    // 0x31a9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x31A9F8u, 0x31AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA00u;
label_31aa00:
    // 0x31aa00: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_31aa04:
    if (ctx->pc == 0x31AA04u) {
        ctx->pc = 0x31AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA00u;
        // 0x31aa04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA08u;
        goto label_31aa08;
    }
    ctx->pc = 0x31AA00u;
    {
        const bool branch_taken_0x31aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA00u;
        // 0x31aa04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa00) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AA08u;
label_31aa08:
    // 0x31aa08: 0xc0a40ec  jal         func_2903B0
label_31aa0c:
    if (ctx->pc == 0x31AA0Cu) {
        ctx->pc = 0x31AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA08u;
        // 0x31aa0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA10u;
        goto label_31aa10;
    }
    ctx->pc = 0x31AA08u;
    SET_GPR_U32(ctx, 31, 0x31AA10u);
    ctx->pc = 0x31AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA08u;
    // 0x31aa0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x31AA08u, 0x31AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA10u;
label_31aa10:
    // 0x31aa10: 0x54500017  bnel        $v0, $s0, . + 4 + (0x17 << 2)
label_31aa14:
    if (ctx->pc == 0x31AA14u) {
        ctx->pc = 0x31AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA10u;
        // 0x31aa14: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA18u;
        goto label_31aa18;
    }
    ctx->pc = 0x31AA10u;
    {
        const bool branch_taken_0x31aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x31aa10) {
            ctx->pc = 0x31AA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA10u;
            // 0x31aa14: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AA70u;
            goto label_31aa70;
        }
    }
    ctx->pc = 0x31AA18u;
label_31aa18:
    // 0x31aa18: 0x92e20052  lbu         $v0, 0x52($s7)
    ctx->pc = 0x31aa18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 82)));
label_31aa1c:
    // 0x31aa1c: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x31aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_31aa20:
    // 0x31aa20: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x31aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_31aa24:
    // 0x31aa24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31aa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31aa28:
    // 0x31aa28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_31aa2c:
    // 0x31aa2c: 0xc0a3658  jal         func_28D960
label_31aa30:
    if (ctx->pc == 0x31AA30u) {
        ctx->pc = 0x31AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA2Cu;
        // 0x31aa30: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA34u;
        goto label_31aa34;
    }
    ctx->pc = 0x31AA2Cu;
    SET_GPR_U32(ctx, 31, 0x31AA34u);
    ctx->pc = 0x31AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA2Cu;
    // 0x31aa30: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31AA2Cu, 0x31AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA34u;
label_31aa34:
    // 0x31aa34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31aa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31aa38:
    // 0x31aa38: 0x6020093  bltzl       $s0, . + 4 + (0x93 << 2)
label_31aa3c:
    if (ctx->pc == 0x31AA3Cu) {
        ctx->pc = 0x31AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA38u;
        // 0x31aa3c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA40u;
        goto label_31aa40;
    }
    ctx->pc = 0x31AA38u;
    {
        const bool branch_taken_0x31aa38 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31aa38) {
            ctx->pc = 0x31AA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA38u;
            // 0x31aa3c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AA40u;
label_31aa40:
    // 0x31aa40: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31aa40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31aa44:
    // 0x31aa44: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31aa44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31aa48:
    // 0x31aa48: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
label_31aa4c:
    if (ctx->pc == 0x31AA4Cu) {
        ctx->pc = 0x31AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA48u;
        // 0x31aa4c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA50u;
        goto label_31aa50;
    }
    ctx->pc = 0x31AA48u;
    {
        const bool branch_taken_0x31aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa48) {
            ctx->pc = 0x31AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA48u;
            // 0x31aa4c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AA50u;
label_31aa50:
    // 0x31aa50: 0xc0a35f6  jal         func_28D7D8
label_31aa54:
    if (ctx->pc == 0x31AA54u) {
        ctx->pc = 0x31AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA50u;
        // 0x31aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA58u;
        goto label_31aa58;
    }
    ctx->pc = 0x31AA50u;
    SET_GPR_U32(ctx, 31, 0x31AA58u);
    ctx->pc = 0x31AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA50u;
    // 0x31aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31AA50u, 0x31AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA58u;
label_31aa58:
    // 0x31aa58: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x31aa58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31aa5c:
    // 0x31aa5c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31aa5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31aa60:
    // 0x31aa60: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_31aa64:
    if (ctx->pc == 0x31AA64u) {
        ctx->pc = 0x31AA68u;
        goto label_31aa68;
    }
    ctx->pc = 0x31AA60u;
    {
        const bool branch_taken_0x31aa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31aa60) {
            ctx->pc = 0x31AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aa50;
        }
    }
    ctx->pc = 0x31AA68u;
label_31aa68:
    // 0x31aa68: 0x10000087  b           . + 4 + (0x87 << 2)
label_31aa6c:
    if (ctx->pc == 0x31AA6Cu) {
        ctx->pc = 0x31AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA68u;
        // 0x31aa6c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA70u;
        goto label_31aa70;
    }
    ctx->pc = 0x31AA68u;
    {
        const bool branch_taken_0x31aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA68u;
        // 0x31aa6c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa68) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AA70u;
label_31aa70:
    // 0x31aa70: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31aa70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31aa74:
    // 0x31aa74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31aa78:
    // 0x31aa78: 0x40f809  jalr        $v0
label_31aa7c:
    if (ctx->pc == 0x31AA7Cu) {
        ctx->pc = 0x31AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA78u;
        // 0x31aa7c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA80u;
        goto label_31aa80;
    }
    ctx->pc = 0x31AA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AA80u);
        ctx->pc = 0x31AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA78u;
        // 0x31aa7c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AA78u, 0x31AA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AA80u;
label_31aa80:
    // 0x31aa80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31aa80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31aa84:
    // 0x31aa84: 0x2462ff91  addiu       $v0, $v1, -0x6F
    ctx->pc = 0x31aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967185));
label_31aa88:
    // 0x31aa88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x31aa88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_31aa8c:
    // 0x31aa8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_31aa90:
    if (ctx->pc == 0x31AA90u) {
        ctx->pc = 0x31AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA8Cu;
        // 0x31aa90: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA94u;
        goto label_31aa94;
    }
    ctx->pc = 0x31AA8Cu;
    {
        const bool branch_taken_0x31aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA8Cu;
        // 0x31aa90: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa8c) {
            ctx->pc = 0x31AAA8u;
            goto label_31aaa8;
        }
    }
    ctx->pc = 0x31AA94u;
label_31aa94:
    // 0x31aa94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_31aa98:
    if (ctx->pc == 0x31AA98u) {
        ctx->pc = 0x31AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA94u;
        // 0x31aa98: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AA9Cu;
        goto label_31aa9c;
    }
    ctx->pc = 0x31AA94u;
    {
        const bool branch_taken_0x31aa94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA94u;
        // 0x31aa98: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa94) {
            ctx->pc = 0x31AAB8u;
            goto label_31aab8;
        }
    }
    ctx->pc = 0x31AA9Cu;
label_31aa9c:
    // 0x31aa9c: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
label_31aaa0:
    if (ctx->pc == 0x31AAA0u) {
        ctx->pc = 0x31AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA9Cu;
        // 0x31aaa0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAA4u;
        goto label_31aaa4;
    }
    ctx->pc = 0x31AA9Cu;
    {
        const bool branch_taken_0x31aa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA9Cu;
        // 0x31aaa0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa9c) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AAA4u;
label_31aaa4:
    // 0x31aaa4: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x31aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_31aaa8:
    // 0x31aaa8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_31aaac:
    if (ctx->pc == 0x31AAACu) {
        ctx->pc = 0x31AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAA8u;
        // 0x31aaac: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAB0u;
        goto label_31aab0;
    }
    ctx->pc = 0x31AAA8u;
    {
        const bool branch_taken_0x31aaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAA8u;
        // 0x31aaac: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aaa8) {
            ctx->pc = 0x31AAB8u;
            goto label_31aab8;
        }
    }
    ctx->pc = 0x31AAB0u;
label_31aab0:
    // 0x31aab0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_31aab4:
    if (ctx->pc == 0x31AAB4u) {
        ctx->pc = 0x31AAB8u;
        goto label_31aab8;
    }
    ctx->pc = 0x31AAB0u;
    {
        const bool branch_taken_0x31aab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31aab0) {
            ctx->pc = 0x31AAC0u;
            goto label_31aac0;
        }
    }
    ctx->pc = 0x31AAB8u;
label_31aab8:
    // 0x31aab8: 0xc0a35f6  jal         func_28D7D8
label_31aabc:
    if (ctx->pc == 0x31AABCu) {
        ctx->pc = 0x31AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAB8u;
        // 0x31aabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAC0u;
        goto label_31aac0;
    }
    ctx->pc = 0x31AAB8u;
    SET_GPR_U32(ctx, 31, 0x31AAC0u);
    ctx->pc = 0x31AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAB8u;
    // 0x31aabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31AAB8u, 0x31AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAC0u;
label_31aac0:
    // 0x31aac0: 0x1260003b  beqz        $s3, . + 4 + (0x3B << 2)
label_31aac4:
    if (ctx->pc == 0x31AAC4u) {
        ctx->pc = 0x31AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAC0u;
        // 0x31aac4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAC8u;
        goto label_31aac8;
    }
    ctx->pc = 0x31AAC0u;
    {
        const bool branch_taken_0x31aac0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAC0u;
        // 0x31aac4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aac0) {
            ctx->pc = 0x31ABB0u;
            goto label_31abb0;
        }
    }
    ctx->pc = 0x31AAC8u;
label_31aac8:
    // 0x31aac8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_31aacc:
    // 0x31aacc: 0xc0ab742  jal         func_2ADD08
label_31aad0:
    if (ctx->pc == 0x31AAD0u) {
        ctx->pc = 0x31AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AACCu;
        // 0x31aad0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAD4u;
        goto label_31aad4;
    }
    ctx->pc = 0x31AACCu;
    SET_GPR_U32(ctx, 31, 0x31AAD4u);
    ctx->pc = 0x31AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AACCu;
    // 0x31aad0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x31AACCu, 0x31AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAD4u;
label_31aad4:
    // 0x31aad4: 0xc087502  jal         func_21D408
label_31aad8:
    if (ctx->pc == 0x31AAD8u) {
        ctx->pc = 0x31AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAD4u;
        // 0x31aad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AADCu;
        goto label_31aadc;
    }
    ctx->pc = 0x31AAD4u;
    SET_GPR_U32(ctx, 31, 0x31AADCu);
    ctx->pc = 0x31AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAD4u;
    // 0x31aad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31AAD4u, 0x31AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AADCu;
label_31aadc:
    // 0x31aadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31aadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31aae0:
    // 0x31aae0: 0xc05b2de  jal         func_16CB78
label_31aae4:
    if (ctx->pc == 0x31AAE4u) {
        ctx->pc = 0x31AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAE0u;
        // 0x31aae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAE8u;
        goto label_31aae8;
    }
    ctx->pc = 0x31AAE0u;
    SET_GPR_U32(ctx, 31, 0x31AAE8u);
    ctx->pc = 0x31AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAE0u;
    // 0x31aae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x31AAE0u, 0x31AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAE8u;
label_31aae8:
    // 0x31aae8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31aae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31aaec:
    // 0x31aaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31aaf0:
    // 0x31aaf0: 0x1642002b  bne         $s2, $v0, . + 4 + (0x2B << 2)
label_31aaf4:
    if (ctx->pc == 0x31AAF4u) {
        ctx->pc = 0x31AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAF0u;
        // 0x31aaf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AAF8u;
        goto label_31aaf8;
    }
    ctx->pc = 0x31AAF0u;
    {
        const bool branch_taken_0x31aaf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAF0u;
        // 0x31aaf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aaf0) {
            ctx->pc = 0x31ABA0u;
            goto label_31aba0;
        }
    }
    ctx->pc = 0x31AAF8u;
label_31aaf8:
    // 0x31aaf8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x31aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_31aafc:
    // 0x31aafc: 0x8c4305f0  lw          $v1, 0x5F0($v0)
    ctx->pc = 0x31aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
label_31ab00:
    // 0x31ab00: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_31ab04:
    if (ctx->pc == 0x31AB04u) {
        ctx->pc = 0x31AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB00u;
        // 0x31ab04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB08u;
        goto label_31ab08;
    }
    ctx->pc = 0x31AB00u;
    {
        const bool branch_taken_0x31ab00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB00u;
        // 0x31ab04: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab00) {
            ctx->pc = 0x31ABA0u;
            goto label_31aba0;
        }
    }
    ctx->pc = 0x31AB08u;
label_31ab08:
    // 0x31ab08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31ab08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ab0c:
    // 0x31ab0c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x31ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_31ab10:
    // 0x31ab10: 0xc107422  jal         func_41D088
label_31ab14:
    if (ctx->pc == 0x31AB14u) {
        ctx->pc = 0x31AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB10u;
        // 0x31ab14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB18u;
        goto label_31ab18;
    }
    ctx->pc = 0x31AB10u;
    SET_GPR_U32(ctx, 31, 0x31AB18u);
    ctx->pc = 0x31AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB10u;
    // 0x31ab14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D088u, 0x31AB10u, 0x31AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB18u;
label_31ab18:
    // 0x31ab18: 0x14520021  bne         $v0, $s2, . + 4 + (0x21 << 2)
label_31ab1c:
    if (ctx->pc == 0x31AB1Cu) {
        ctx->pc = 0x31AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB18u;
        // 0x31ab1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB20u;
        goto label_31ab20;
    }
    ctx->pc = 0x31AB18u;
    {
        const bool branch_taken_0x31ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x31AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB18u;
        // 0x31ab1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab18) {
            ctx->pc = 0x31ABA0u;
            goto label_31aba0;
        }
    }
    ctx->pc = 0x31AB20u;
label_31ab20:
    // 0x31ab20: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x31ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_31ab24:
    // 0x31ab24: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x31ab24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31ab28:
    // 0x31ab28: 0xc107420  jal         func_41D080
label_31ab2c:
    if (ctx->pc == 0x31AB2Cu) {
        ctx->pc = 0x31AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB28u;
        // 0x31ab2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB30u;
        goto label_31ab30;
    }
    ctx->pc = 0x31AB28u;
    SET_GPR_U32(ctx, 31, 0x31AB30u);
    ctx->pc = 0x31AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB28u;
    // 0x31ab2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D080u, 0x31AB28u, 0x31AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB30u;
label_31ab30:
    // 0x31ab30: 0x92e20054  lbu         $v0, 0x54($s7)
    ctx->pc = 0x31ab30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 84)));
label_31ab34:
    // 0x31ab34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_31ab38:
    if (ctx->pc == 0x31AB38u) {
        ctx->pc = 0x31AB3Cu;
        goto label_31ab3c;
    }
    ctx->pc = 0x31AB34u;
    {
        const bool branch_taken_0x31ab34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ab34) {
            ctx->pc = 0x31AB58u;
            goto label_31ab58;
        }
    }
    ctx->pc = 0x31AB3Cu;
label_31ab3c:
    // 0x31ab3c: 0xc6e10020  lwc1        $f1, 0x20($s7)
    ctx->pc = 0x31ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ab40:
    // 0x31ab40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ab40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ab44:
    // 0x31ab44: 0x0  nop
    ctx->pc = 0x31ab44u;
    // NOP
label_31ab48:
    // 0x31ab48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31ab48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ab4c:
    // 0x31ab4c: 0x0  nop
    ctx->pc = 0x31ab4cu;
    // NOP
label_31ab50:
    // 0x31ab50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31ab54:
    if (ctx->pc == 0x31AB54u) {
        ctx->pc = 0x31AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB50u;
        // 0x31ab54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB58u;
        goto label_31ab58;
    }
    ctx->pc = 0x31AB50u;
    {
        const bool branch_taken_0x31ab50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ab50) {
            ctx->pc = 0x31AB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB50u;
            // 0x31ab54: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB58u;
            goto label_31ab58;
        }
    }
    ctx->pc = 0x31AB58u;
label_31ab58:
    // 0x31ab58: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_31ab5c:
    if (ctx->pc == 0x31AB5Cu) {
        ctx->pc = 0x31AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB58u;
        // 0x31ab5c: 0xc6200140  lwc1        $f0, 0x140($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB60u;
        goto label_31ab60;
    }
    ctx->pc = 0x31AB58u;
    {
        const bool branch_taken_0x31ab58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ab58) {
            ctx->pc = 0x31AB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB58u;
            // 0x31ab5c: 0xc6200140  lwc1        $f0, 0x140($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB68u;
            goto label_31ab68;
        }
    }
    ctx->pc = 0x31AB60u;
label_31ab60:
    // 0x31ab60: 0x10000002  b           . + 4 + (0x2 << 2)
label_31ab64:
    if (ctx->pc == 0x31AB64u) {
        ctx->pc = 0x31AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB60u;
        // 0x31ab64: 0xc6f40020  lwc1        $f20, 0x20($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB68u;
        goto label_31ab68;
    }
    ctx->pc = 0x31AB60u;
    {
        const bool branch_taken_0x31ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB60u;
        // 0x31ab64: 0xc6f40020  lwc1        $f20, 0x20($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab60) {
            ctx->pc = 0x31AB6Cu;
            goto label_31ab6c;
        }
    }
    ctx->pc = 0x31AB68u;
label_31ab68:
    // 0x31ab68: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x31ab68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31ab6c:
    // 0x31ab6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31ab70:
    // 0x31ab70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31ab70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31ab74:
    // 0x31ab74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31ab78:
    // 0x31ab78: 0x40f809  jalr        $v0
label_31ab7c:
    if (ctx->pc == 0x31AB7Cu) {
        ctx->pc = 0x31AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB78u;
        // 0x31ab7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB80u;
        goto label_31ab80;
    }
    ctx->pc = 0x31AB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AB80u);
        ctx->pc = 0x31AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB78u;
        // 0x31ab7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB78u, 0x31AB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AB80u;
label_31ab80:
    // 0x31ab80: 0x82e70051  lb          $a3, 0x51($s7)
    ctx->pc = 0x31ab80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 81)));
label_31ab84:
    // 0x31ab84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31ab88:
    // 0x31ab88: 0x82e60050  lb          $a2, 0x50($s7)
    ctx->pc = 0x31ab88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 80)));
label_31ab8c:
    // 0x31ab8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31ab8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ab90:
    // 0x31ab90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31ab90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31ab94:
    // 0x31ab94: 0xc0b570a  jal         func_2D5C28
label_31ab98:
    if (ctx->pc == 0x31AB98u) {
        ctx->pc = 0x31AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB94u;
        // 0x31ab98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AB9Cu;
        goto label_31ab9c;
    }
    ctx->pc = 0x31AB94u;
    SET_GPR_U32(ctx, 31, 0x31AB9Cu);
    ctx->pc = 0x31AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB94u;
    // 0x31ab98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C28u, 0x31AB94u, 0x31AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB9Cu;
label_31ab9c:
    // 0x31ab9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31aba0:
    // 0x31aba0: 0xc0a3032  jal         func_28C0C8
label_31aba4:
    if (ctx->pc == 0x31ABA4u) {
        ctx->pc = 0x31ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABA0u;
        // 0x31aba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABA8u;
        goto label_31aba8;
    }
    ctx->pc = 0x31ABA0u;
    SET_GPR_U32(ctx, 31, 0x31ABA8u);
    ctx->pc = 0x31ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ABA0u;
    // 0x31aba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31ABA0u, 0x31ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ABA8u;
label_31aba8:
    // 0x31aba8: 0x10000037  b           . + 4 + (0x37 << 2)
label_31abac:
    if (ctx->pc == 0x31ABACu) {
        ctx->pc = 0x31ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABA8u;
        // 0x31abac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABB0u;
        goto label_31abb0;
    }
    ctx->pc = 0x31ABA8u;
    {
        const bool branch_taken_0x31aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABA8u;
        // 0x31abac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aba8) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31ABB0u;
label_31abb0:
    // 0x31abb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31abb4:
    // 0x31abb4: 0x16420034  bne         $s2, $v0, . + 4 + (0x34 << 2)
label_31abb8:
    if (ctx->pc == 0x31ABB8u) {
        ctx->pc = 0x31ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABB4u;
        // 0x31abb8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABBCu;
        goto label_31abbc;
    }
    ctx->pc = 0x31ABB4u;
    {
        const bool branch_taken_0x31abb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x31ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABB4u;
        // 0x31abb8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abb4) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31ABBCu;
label_31abbc:
    // 0x31abbc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31abbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31abc0:
    // 0x31abc0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31abc4:
    if (ctx->pc == 0x31ABC4u) {
        ctx->pc = 0x31ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABC0u;
        // 0x31abc4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABC8u;
        goto label_31abc8;
    }
    ctx->pc = 0x31ABC0u;
    {
        const bool branch_taken_0x31abc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABC0u;
        // 0x31abc4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abc0) {
            ctx->pc = 0x31ABD4u;
            goto label_31abd4;
        }
    }
    ctx->pc = 0x31ABC8u;
label_31abc8:
    // 0x31abc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31abcc:
    // 0x31abcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_31abd0:
    if (ctx->pc == 0x31ABD0u) {
        ctx->pc = 0x31ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABCCu;
        // 0x31abd0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABD4u;
        goto label_31abd4;
    }
    ctx->pc = 0x31ABCCu;
    {
        const bool branch_taken_0x31abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABCCu;
        // 0x31abd0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abcc) {
            ctx->pc = 0x31ABD8u;
            goto label_31abd8;
        }
    }
    ctx->pc = 0x31ABD4u;
label_31abd4:
    // 0x31abd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31abd8:
    // 0x31abd8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_31abdc:
    if (ctx->pc == 0x31ABDCu) {
        ctx->pc = 0x31ABE0u;
        goto label_31abe0;
    }
    ctx->pc = 0x31ABD8u;
    {
        const bool branch_taken_0x31abd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abd8) {
            ctx->pc = 0x31AC08u;
            goto label_31ac08;
        }
    }
    ctx->pc = 0x31ABE0u;
label_31abe0:
    // 0x31abe0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x31abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31abe4:
    // 0x31abe4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31abe8:
    // 0x31abe8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31abec:
    // 0x31abec: 0x40f809  jalr        $v0
label_31abf0:
    if (ctx->pc == 0x31ABF0u) {
        ctx->pc = 0x31ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABECu;
        // 0x31abf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ABF4u;
        goto label_31abf4;
    }
    ctx->pc = 0x31ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31ABF4u);
        ctx->pc = 0x31ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABECu;
        // 0x31abf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ABECu, 0x31ABF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31ABF4u;
label_31abf4:
    // 0x31abf4: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x31abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_31abf8:
    // 0x31abf8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_31abfc:
    if (ctx->pc == 0x31ABFCu) {
        ctx->pc = 0x31AC00u;
        goto label_31ac00;
    }
    ctx->pc = 0x31ABF8u;
    {
        const bool branch_taken_0x31abf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31abf8) {
            ctx->pc = 0x31AC08u;
            goto label_31ac08;
        }
    }
    ctx->pc = 0x31AC00u;
label_31ac00:
    // 0x31ac00: 0xc0a35f6  jal         func_28D7D8
label_31ac04:
    if (ctx->pc == 0x31AC04u) {
        ctx->pc = 0x31AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC00u;
        // 0x31ac04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC08u;
        goto label_31ac08;
    }
    ctx->pc = 0x31AC00u;
    SET_GPR_U32(ctx, 31, 0x31AC08u);
    ctx->pc = 0x31AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC00u;
    // 0x31ac04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31AC00u, 0x31AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC08u;
label_31ac08:
    // 0x31ac08: 0xc0a4e54  jal         func_293950
label_31ac0c:
    if (ctx->pc == 0x31AC0Cu) {
        ctx->pc = 0x31AC10u;
        goto label_31ac10;
    }
    ctx->pc = 0x31AC08u;
    SET_GPR_U32(ctx, 31, 0x31AC10u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31AC08u, 0x31AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC10u;
label_31ac10:
    // 0x31ac10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31ac10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ac14:
    // 0x31ac14: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_31ac18:
    if (ctx->pc == 0x31AC18u) {
        ctx->pc = 0x31AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC14u;
        // 0x31ac18: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC1Cu;
        goto label_31ac1c;
    }
    ctx->pc = 0x31AC14u;
    {
        const bool branch_taken_0x31ac14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC14u;
        // 0x31ac18: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac14) {
            ctx->pc = 0x31AC78u;
            goto label_31ac78;
        }
    }
    ctx->pc = 0x31AC1Cu;
label_31ac1c:
    // 0x31ac1c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x31ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31ac20:
    // 0x31ac20: 0x86b00092  lh          $s0, 0x92($s5)
    ctx->pc = 0x31ac20u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_31ac24:
    // 0x31ac24: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31ac28:
    // 0x31ac28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31ac2c:
    // 0x31ac2c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x31ac2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_31ac30:
    // 0x31ac30: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31ac30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31ac34:
    // 0x31ac34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31ac34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31ac38:
    // 0x31ac38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31ac3c:
    // 0x31ac3c: 0x40f809  jalr        $v0
label_31ac40:
    if (ctx->pc == 0x31AC40u) {
        ctx->pc = 0x31AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC3Cu;
        // 0x31ac40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC44u;
        goto label_31ac44;
    }
    ctx->pc = 0x31AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AC44u);
        ctx->pc = 0x31AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC3Cu;
        // 0x31ac40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AC3Cu, 0x31AC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AC44u;
label_31ac44:
    // 0x31ac44: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x31ac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_31ac48:
    // 0x31ac48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31ac48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31ac4c:
    // 0x31ac4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31ac4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ac50:
    // 0x31ac50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31ac50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ac54:
    // 0x31ac54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_31ac58:
    // 0x31ac58: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x31ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_31ac5c:
    // 0x31ac5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ac60:
    // 0x31ac60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ac60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ac64:
    // 0x31ac64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x31ac64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ac68:
    // 0x31ac68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ac6c:
    // 0x31ac6c: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x31ac6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_31ac70:
    // 0x31ac70: 0xc0b3e3e  jal         func_2CF8F8
label_31ac74:
    if (ctx->pc == 0x31AC74u) {
        ctx->pc = 0x31AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC70u;
        // 0x31ac74: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC78u;
        goto label_31ac78;
    }
    ctx->pc = 0x31AC70u;
    SET_GPR_U32(ctx, 31, 0x31AC78u);
    ctx->pc = 0x31AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC70u;
    // 0x31ac74: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8F8u, 0x31AC70u, 0x31AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC78u;
label_31ac78:
    // 0x31ac78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ac7c:
    // 0x31ac7c: 0xc0a35d6  jal         func_28D758
label_31ac80:
    if (ctx->pc == 0x31AC80u) {
        ctx->pc = 0x31AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC7Cu;
        // 0x31ac80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AC84u;
        goto label_31ac84;
    }
    ctx->pc = 0x31AC7Cu;
    SET_GPR_U32(ctx, 31, 0x31AC84u);
    ctx->pc = 0x31AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC7Cu;
    // 0x31ac80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31AC7Cu, 0x31AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC84u;
label_31ac84:
    // 0x31ac84: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31ac84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31ac88:
    // 0x31ac88: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31ac88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31ac8c:
    // 0x31ac8c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31ac8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31ac90:
    // 0x31ac90: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31ac90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31ac94:
    // 0x31ac94: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31ac94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31ac98:
    // 0x31ac98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31ac98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31ac9c:
    // 0x31ac9c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31ac9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31aca0:
    // 0x31aca0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31aca0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31aca4:
    // 0x31aca4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31aca4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31aca8:
    // 0x31aca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31aca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31acac:
    // 0x31acac: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x31acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31acb0:
    // 0x31acb0: 0x3e00008  jr          $ra
label_31acb4:
    if (ctx->pc == 0x31ACB4u) {
        ctx->pc = 0x31ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACB0u;
        // 0x31acb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ACB8u;
        goto label_fallthrough_0x31acb0;
    }
    ctx->pc = 0x31ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACB0u;
        // 0x31acb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31acb0:
    ctx->pc = 0x31ACB8u;
}
