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

// Function: sub_0032A688
// Address: 0x32a688 - 0x32ab28
void sub_0032A688_0x32a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A688_0x32a688");
#endif

    switch (ctx->pc) {
        case 0x32a688u: goto label_32a688;
        case 0x32a68cu: goto label_32a68c;
        case 0x32a690u: goto label_32a690;
        case 0x32a694u: goto label_32a694;
        case 0x32a698u: goto label_32a698;
        case 0x32a69cu: goto label_32a69c;
        case 0x32a6a0u: goto label_32a6a0;
        case 0x32a6a4u: goto label_32a6a4;
        case 0x32a6a8u: goto label_32a6a8;
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6b0u: goto label_32a6b0;
        case 0x32a6b4u: goto label_32a6b4;
        case 0x32a6b8u: goto label_32a6b8;
        case 0x32a6bcu: goto label_32a6bc;
        case 0x32a6c0u: goto label_32a6c0;
        case 0x32a6c4u: goto label_32a6c4;
        case 0x32a6c8u: goto label_32a6c8;
        case 0x32a6ccu: goto label_32a6cc;
        case 0x32a6d0u: goto label_32a6d0;
        case 0x32a6d4u: goto label_32a6d4;
        case 0x32a6d8u: goto label_32a6d8;
        case 0x32a6dcu: goto label_32a6dc;
        case 0x32a6e0u: goto label_32a6e0;
        case 0x32a6e4u: goto label_32a6e4;
        case 0x32a6e8u: goto label_32a6e8;
        case 0x32a6ecu: goto label_32a6ec;
        case 0x32a6f0u: goto label_32a6f0;
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a6f8u: goto label_32a6f8;
        case 0x32a6fcu: goto label_32a6fc;
        case 0x32a700u: goto label_32a700;
        case 0x32a704u: goto label_32a704;
        case 0x32a708u: goto label_32a708;
        case 0x32a70cu: goto label_32a70c;
        case 0x32a710u: goto label_32a710;
        case 0x32a714u: goto label_32a714;
        case 0x32a718u: goto label_32a718;
        case 0x32a71cu: goto label_32a71c;
        case 0x32a720u: goto label_32a720;
        case 0x32a724u: goto label_32a724;
        case 0x32a728u: goto label_32a728;
        case 0x32a72cu: goto label_32a72c;
        case 0x32a730u: goto label_32a730;
        case 0x32a734u: goto label_32a734;
        case 0x32a738u: goto label_32a738;
        case 0x32a73cu: goto label_32a73c;
        case 0x32a740u: goto label_32a740;
        case 0x32a744u: goto label_32a744;
        case 0x32a748u: goto label_32a748;
        case 0x32a74cu: goto label_32a74c;
        case 0x32a750u: goto label_32a750;
        case 0x32a754u: goto label_32a754;
        case 0x32a758u: goto label_32a758;
        case 0x32a75cu: goto label_32a75c;
        case 0x32a760u: goto label_32a760;
        case 0x32a764u: goto label_32a764;
        case 0x32a768u: goto label_32a768;
        case 0x32a76cu: goto label_32a76c;
        case 0x32a770u: goto label_32a770;
        case 0x32a774u: goto label_32a774;
        case 0x32a778u: goto label_32a778;
        case 0x32a77cu: goto label_32a77c;
        case 0x32a780u: goto label_32a780;
        case 0x32a784u: goto label_32a784;
        case 0x32a788u: goto label_32a788;
        case 0x32a78cu: goto label_32a78c;
        case 0x32a790u: goto label_32a790;
        case 0x32a794u: goto label_32a794;
        case 0x32a798u: goto label_32a798;
        case 0x32a79cu: goto label_32a79c;
        case 0x32a7a0u: goto label_32a7a0;
        case 0x32a7a4u: goto label_32a7a4;
        case 0x32a7a8u: goto label_32a7a8;
        case 0x32a7acu: goto label_32a7ac;
        case 0x32a7b0u: goto label_32a7b0;
        case 0x32a7b4u: goto label_32a7b4;
        case 0x32a7b8u: goto label_32a7b8;
        case 0x32a7bcu: goto label_32a7bc;
        case 0x32a7c0u: goto label_32a7c0;
        case 0x32a7c4u: goto label_32a7c4;
        case 0x32a7c8u: goto label_32a7c8;
        case 0x32a7ccu: goto label_32a7cc;
        case 0x32a7d0u: goto label_32a7d0;
        case 0x32a7d4u: goto label_32a7d4;
        case 0x32a7d8u: goto label_32a7d8;
        case 0x32a7dcu: goto label_32a7dc;
        case 0x32a7e0u: goto label_32a7e0;
        case 0x32a7e4u: goto label_32a7e4;
        case 0x32a7e8u: goto label_32a7e8;
        case 0x32a7ecu: goto label_32a7ec;
        case 0x32a7f0u: goto label_32a7f0;
        case 0x32a7f4u: goto label_32a7f4;
        case 0x32a7f8u: goto label_32a7f8;
        case 0x32a7fcu: goto label_32a7fc;
        case 0x32a800u: goto label_32a800;
        case 0x32a804u: goto label_32a804;
        case 0x32a808u: goto label_32a808;
        case 0x32a80cu: goto label_32a80c;
        case 0x32a810u: goto label_32a810;
        case 0x32a814u: goto label_32a814;
        case 0x32a818u: goto label_32a818;
        case 0x32a81cu: goto label_32a81c;
        case 0x32a820u: goto label_32a820;
        case 0x32a824u: goto label_32a824;
        case 0x32a828u: goto label_32a828;
        case 0x32a82cu: goto label_32a82c;
        case 0x32a830u: goto label_32a830;
        case 0x32a834u: goto label_32a834;
        case 0x32a838u: goto label_32a838;
        case 0x32a83cu: goto label_32a83c;
        case 0x32a840u: goto label_32a840;
        case 0x32a844u: goto label_32a844;
        case 0x32a848u: goto label_32a848;
        case 0x32a84cu: goto label_32a84c;
        case 0x32a850u: goto label_32a850;
        case 0x32a854u: goto label_32a854;
        case 0x32a858u: goto label_32a858;
        case 0x32a85cu: goto label_32a85c;
        case 0x32a860u: goto label_32a860;
        case 0x32a864u: goto label_32a864;
        case 0x32a868u: goto label_32a868;
        case 0x32a86cu: goto label_32a86c;
        case 0x32a870u: goto label_32a870;
        case 0x32a874u: goto label_32a874;
        case 0x32a878u: goto label_32a878;
        case 0x32a87cu: goto label_32a87c;
        case 0x32a880u: goto label_32a880;
        case 0x32a884u: goto label_32a884;
        case 0x32a888u: goto label_32a888;
        case 0x32a88cu: goto label_32a88c;
        case 0x32a890u: goto label_32a890;
        case 0x32a894u: goto label_32a894;
        case 0x32a898u: goto label_32a898;
        case 0x32a89cu: goto label_32a89c;
        case 0x32a8a0u: goto label_32a8a0;
        case 0x32a8a4u: goto label_32a8a4;
        case 0x32a8a8u: goto label_32a8a8;
        case 0x32a8acu: goto label_32a8ac;
        case 0x32a8b0u: goto label_32a8b0;
        case 0x32a8b4u: goto label_32a8b4;
        case 0x32a8b8u: goto label_32a8b8;
        case 0x32a8bcu: goto label_32a8bc;
        case 0x32a8c0u: goto label_32a8c0;
        case 0x32a8c4u: goto label_32a8c4;
        case 0x32a8c8u: goto label_32a8c8;
        case 0x32a8ccu: goto label_32a8cc;
        case 0x32a8d0u: goto label_32a8d0;
        case 0x32a8d4u: goto label_32a8d4;
        case 0x32a8d8u: goto label_32a8d8;
        case 0x32a8dcu: goto label_32a8dc;
        case 0x32a8e0u: goto label_32a8e0;
        case 0x32a8e4u: goto label_32a8e4;
        case 0x32a8e8u: goto label_32a8e8;
        case 0x32a8ecu: goto label_32a8ec;
        case 0x32a8f0u: goto label_32a8f0;
        case 0x32a8f4u: goto label_32a8f4;
        case 0x32a8f8u: goto label_32a8f8;
        case 0x32a8fcu: goto label_32a8fc;
        case 0x32a900u: goto label_32a900;
        case 0x32a904u: goto label_32a904;
        case 0x32a908u: goto label_32a908;
        case 0x32a90cu: goto label_32a90c;
        case 0x32a910u: goto label_32a910;
        case 0x32a914u: goto label_32a914;
        case 0x32a918u: goto label_32a918;
        case 0x32a91cu: goto label_32a91c;
        case 0x32a920u: goto label_32a920;
        case 0x32a924u: goto label_32a924;
        case 0x32a928u: goto label_32a928;
        case 0x32a92cu: goto label_32a92c;
        case 0x32a930u: goto label_32a930;
        case 0x32a934u: goto label_32a934;
        case 0x32a938u: goto label_32a938;
        case 0x32a93cu: goto label_32a93c;
        case 0x32a940u: goto label_32a940;
        case 0x32a944u: goto label_32a944;
        case 0x32a948u: goto label_32a948;
        case 0x32a94cu: goto label_32a94c;
        case 0x32a950u: goto label_32a950;
        case 0x32a954u: goto label_32a954;
        case 0x32a958u: goto label_32a958;
        case 0x32a95cu: goto label_32a95c;
        case 0x32a960u: goto label_32a960;
        case 0x32a964u: goto label_32a964;
        case 0x32a968u: goto label_32a968;
        case 0x32a96cu: goto label_32a96c;
        case 0x32a970u: goto label_32a970;
        case 0x32a974u: goto label_32a974;
        case 0x32a978u: goto label_32a978;
        case 0x32a97cu: goto label_32a97c;
        case 0x32a980u: goto label_32a980;
        case 0x32a984u: goto label_32a984;
        case 0x32a988u: goto label_32a988;
        case 0x32a98cu: goto label_32a98c;
        case 0x32a990u: goto label_32a990;
        case 0x32a994u: goto label_32a994;
        case 0x32a998u: goto label_32a998;
        case 0x32a99cu: goto label_32a99c;
        case 0x32a9a0u: goto label_32a9a0;
        case 0x32a9a4u: goto label_32a9a4;
        case 0x32a9a8u: goto label_32a9a8;
        case 0x32a9acu: goto label_32a9ac;
        case 0x32a9b0u: goto label_32a9b0;
        case 0x32a9b4u: goto label_32a9b4;
        case 0x32a9b8u: goto label_32a9b8;
        case 0x32a9bcu: goto label_32a9bc;
        case 0x32a9c0u: goto label_32a9c0;
        case 0x32a9c4u: goto label_32a9c4;
        case 0x32a9c8u: goto label_32a9c8;
        case 0x32a9ccu: goto label_32a9cc;
        case 0x32a9d0u: goto label_32a9d0;
        case 0x32a9d4u: goto label_32a9d4;
        case 0x32a9d8u: goto label_32a9d8;
        case 0x32a9dcu: goto label_32a9dc;
        case 0x32a9e0u: goto label_32a9e0;
        case 0x32a9e4u: goto label_32a9e4;
        case 0x32a9e8u: goto label_32a9e8;
        case 0x32a9ecu: goto label_32a9ec;
        case 0x32a9f0u: goto label_32a9f0;
        case 0x32a9f4u: goto label_32a9f4;
        case 0x32a9f8u: goto label_32a9f8;
        case 0x32a9fcu: goto label_32a9fc;
        case 0x32aa00u: goto label_32aa00;
        case 0x32aa04u: goto label_32aa04;
        case 0x32aa08u: goto label_32aa08;
        case 0x32aa0cu: goto label_32aa0c;
        case 0x32aa10u: goto label_32aa10;
        case 0x32aa14u: goto label_32aa14;
        case 0x32aa18u: goto label_32aa18;
        case 0x32aa1cu: goto label_32aa1c;
        case 0x32aa20u: goto label_32aa20;
        case 0x32aa24u: goto label_32aa24;
        case 0x32aa28u: goto label_32aa28;
        case 0x32aa2cu: goto label_32aa2c;
        case 0x32aa30u: goto label_32aa30;
        case 0x32aa34u: goto label_32aa34;
        case 0x32aa38u: goto label_32aa38;
        case 0x32aa3cu: goto label_32aa3c;
        case 0x32aa40u: goto label_32aa40;
        case 0x32aa44u: goto label_32aa44;
        case 0x32aa48u: goto label_32aa48;
        case 0x32aa4cu: goto label_32aa4c;
        case 0x32aa50u: goto label_32aa50;
        case 0x32aa54u: goto label_32aa54;
        case 0x32aa58u: goto label_32aa58;
        case 0x32aa5cu: goto label_32aa5c;
        case 0x32aa60u: goto label_32aa60;
        case 0x32aa64u: goto label_32aa64;
        case 0x32aa68u: goto label_32aa68;
        case 0x32aa6cu: goto label_32aa6c;
        case 0x32aa70u: goto label_32aa70;
        case 0x32aa74u: goto label_32aa74;
        case 0x32aa78u: goto label_32aa78;
        case 0x32aa7cu: goto label_32aa7c;
        case 0x32aa80u: goto label_32aa80;
        case 0x32aa84u: goto label_32aa84;
        case 0x32aa88u: goto label_32aa88;
        case 0x32aa8cu: goto label_32aa8c;
        case 0x32aa90u: goto label_32aa90;
        case 0x32aa94u: goto label_32aa94;
        case 0x32aa98u: goto label_32aa98;
        case 0x32aa9cu: goto label_32aa9c;
        case 0x32aaa0u: goto label_32aaa0;
        case 0x32aaa4u: goto label_32aaa4;
        case 0x32aaa8u: goto label_32aaa8;
        case 0x32aaacu: goto label_32aaac;
        case 0x32aab0u: goto label_32aab0;
        case 0x32aab4u: goto label_32aab4;
        case 0x32aab8u: goto label_32aab8;
        case 0x32aabcu: goto label_32aabc;
        case 0x32aac0u: goto label_32aac0;
        case 0x32aac4u: goto label_32aac4;
        case 0x32aac8u: goto label_32aac8;
        case 0x32aaccu: goto label_32aacc;
        case 0x32aad0u: goto label_32aad0;
        case 0x32aad4u: goto label_32aad4;
        case 0x32aad8u: goto label_32aad8;
        case 0x32aadcu: goto label_32aadc;
        case 0x32aae0u: goto label_32aae0;
        case 0x32aae4u: goto label_32aae4;
        case 0x32aae8u: goto label_32aae8;
        case 0x32aaecu: goto label_32aaec;
        case 0x32aaf0u: goto label_32aaf0;
        case 0x32aaf4u: goto label_32aaf4;
        case 0x32aaf8u: goto label_32aaf8;
        case 0x32aafcu: goto label_32aafc;
        case 0x32ab00u: goto label_32ab00;
        case 0x32ab04u: goto label_32ab04;
        case 0x32ab08u: goto label_32ab08;
        case 0x32ab0cu: goto label_32ab0c;
        case 0x32ab10u: goto label_32ab10;
        case 0x32ab14u: goto label_32ab14;
        case 0x32ab18u: goto label_32ab18;
        case 0x32ab1cu: goto label_32ab1c;
        case 0x32ab20u: goto label_32ab20;
        case 0x32ab24u: goto label_32ab24;
        default: break;
    }

    ctx->pc = 0x32a688u;

label_32a688:
    // 0x32a688: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32a68c:
    // 0x32a68c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_32a690:
    // 0x32a690: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32a690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_32a694:
    // 0x32a694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a698:
    // 0x32a698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a69c:
    // 0x32a69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a6a0:
    // 0x32a6a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x32a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_32a6a4:
    // 0x32a6a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32a6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a6a8:
    // 0x32a6a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_32a6ac:
    // 0x32a6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32a6b0:
    // 0x32a6b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_32a6b4:
    // 0x32a6b4: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x32a6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_32a6b8:
    // 0x32a6b8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32a6bc:
    // 0x32a6bc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x32a6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_32a6c0:
    // 0x32a6c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32a6c4:
    if (ctx->pc == 0x32A6C4u) {
        ctx->pc = 0x32A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C0u;
        // 0x32a6c4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6C8u;
        goto label_32a6c8;
    }
    ctx->pc = 0x32A6C0u;
    {
        const bool branch_taken_0x32a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C0u;
        // 0x32a6c4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6c0) {
            ctx->pc = 0x32A6D4u;
            goto label_32a6d4;
        }
    }
    ctx->pc = 0x32A6C8u;
label_32a6c8:
    // 0x32a6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a6cc:
    // 0x32a6cc: 0xc0cb244  jal         func_32C910
label_32a6d0:
    if (ctx->pc == 0x32A6D0u) {
        ctx->pc = 0x32A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6CCu;
        // 0x32a6d0: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6D4u;
        goto label_32a6d4;
    }
    ctx->pc = 0x32A6CCu;
    SET_GPR_U32(ctx, 31, 0x32A6D4u);
    ctx->pc = 0x32A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6CCu;
    // 0x32a6d0: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32A6CCu, 0x32A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6D4u;
label_32a6d4:
    // 0x32a6d4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_32a6d8:
    if (ctx->pc == 0x32A6D8u) {
        ctx->pc = 0x32A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6D4u;
        // 0x32a6d8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6DCu;
        goto label_32a6dc;
    }
    ctx->pc = 0x32A6D4u;
    {
        const bool branch_taken_0x32a6d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6D4u;
        // 0x32a6d8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6d4) {
            ctx->pc = 0x32A6E8u;
            goto label_32a6e8;
        }
    }
    ctx->pc = 0x32A6DCu;
label_32a6dc:
    // 0x32a6dc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x32a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a6e0:
    // 0x32a6e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32a6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a6e4:
    // 0x32a6e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x32a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_32a6e8:
    // 0x32a6e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x32a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_32a6ec:
    // 0x32a6ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a6f0:
    // 0x32a6f0: 0x2444c531  addiu       $a0, $v0, -0x3ACF
    ctx->pc = 0x32a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32a6f4:
    // 0x32a6f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x32a6f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6f8:
    // 0x32a6f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32a6fc:
    // 0x32a6fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32a6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32a700:
    // 0x32a700: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32a704:
    // 0x32a704: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_32a708:
    if (ctx->pc == 0x32A708u) {
        ctx->pc = 0x32A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A704u;
        // 0x32a708: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A70Cu;
        goto label_32a70c;
    }
    ctx->pc = 0x32A704u;
    {
        const bool branch_taken_0x32a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a704) {
            ctx->pc = 0x32A708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A704u;
            // 0x32a708: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A7A4u;
            goto label_32a7a4;
        }
    }
    ctx->pc = 0x32A70Cu;
label_32a70c:
    // 0x32a70c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32a70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a710:
    // 0x32a710: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32a714:
    // 0x32a714: 0x0  nop
    ctx->pc = 0x32a714u;
    // NOP
label_32a718:
    // 0x32a718: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x32a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_32a71c:
    // 0x32a71c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32a71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32a720:
    // 0x32a720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32a724:
    if (ctx->pc == 0x32A724u) {
        ctx->pc = 0x32A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A720u;
        // 0x32a724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A728u;
        goto label_32a728;
    }
    ctx->pc = 0x32A720u;
    {
        const bool branch_taken_0x32a720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A720u;
        // 0x32a724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a720) {
            ctx->pc = 0x32A730u;
            goto label_32a730;
        }
    }
    ctx->pc = 0x32A728u;
label_32a728:
    // 0x32a728: 0xc0cb244  jal         func_32C910
label_32a72c:
    if (ctx->pc == 0x32A72Cu) {
        ctx->pc = 0x32A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A728u;
        // 0x32a72c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A730u;
        goto label_32a730;
    }
    ctx->pc = 0x32A728u;
    SET_GPR_U32(ctx, 31, 0x32A730u);
    ctx->pc = 0x32A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A728u;
    // 0x32a72c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32A728u, 0x32A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A730u;
label_32a730:
    // 0x32a730: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a734:
    // 0x32a734: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a738:
    // 0x32a738: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a73c:
    // 0x32a73c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a73cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a740:
    // 0x32a740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a744:
    // 0x32a744: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a748:
    // 0x32a748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a74c:
    // 0x32a74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a750:
    // 0x32a750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a754:
    // 0x32a754: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a758:
    if (ctx->pc == 0x32A758u) {
        ctx->pc = 0x32A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A754u;
        // 0x32a758: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A75Cu;
        goto label_32a75c;
    }
    ctx->pc = 0x32A754u;
    {
        const bool branch_taken_0x32a754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A754u;
        // 0x32a758: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a754) {
            ctx->pc = 0x32A774u;
            goto label_32a774;
        }
    }
    ctx->pc = 0x32A75Cu;
label_32a75c:
    // 0x32a75c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a760:
    // 0x32a760: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a764:
    // 0x32a764: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a768:
    // 0x32a768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a76c:
    // 0x32a76c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a770:
    if (ctx->pc == 0x32A770u) {
        ctx->pc = 0x32A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A76Cu;
        // 0x32a770: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A774u;
        goto label_32a774;
    }
    ctx->pc = 0x32A76Cu;
    {
        const bool branch_taken_0x32a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A76Cu;
        // 0x32a770: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a76c) {
            ctx->pc = 0x32A788u;
            goto label_32a788;
        }
    }
    ctx->pc = 0x32A774u;
label_32a774:
    // 0x32a774: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a778:
    // 0x32a778: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a77c:
    // 0x32a77c: 0x40f809  jalr        $v0
label_32a780:
    if (ctx->pc == 0x32A780u) {
        ctx->pc = 0x32A784u;
        goto label_32a784;
    }
    ctx->pc = 0x32A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A77Cu, 0x32A784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A784u;
label_32a784:
    // 0x32a784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a788:
    // 0x32a788: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32a788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32a78c:
    // 0x32a78c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x32a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_32a790:
    // 0x32a790: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32a790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32a794:
    // 0x32a794: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32a794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32a798:
    // 0x32a798: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_32a79c:
    if (ctx->pc == 0x32A79Cu) {
        ctx->pc = 0x32A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A798u;
        // 0x32a79c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7A0u;
        goto label_32a7a0;
    }
    ctx->pc = 0x32A798u;
    {
        const bool branch_taken_0x32a798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a798) {
            ctx->pc = 0x32A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A798u;
            // 0x32a79c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a718;
        }
    }
    ctx->pc = 0x32A7A0u;
label_32a7a0:
    // 0x32a7a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a7a4:
    // 0x32a7a4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x32a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_32a7a8:
    // 0x32a7a8: 0x5462003b  bnel        $v1, $v0, . + 4 + (0x3B << 2)
label_32a7ac:
    if (ctx->pc == 0x32A7ACu) {
        ctx->pc = 0x32A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7A8u;
        // 0x32a7ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7B0u;
        goto label_32a7b0;
    }
    ctx->pc = 0x32A7A8u;
    {
        const bool branch_taken_0x32a7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a7a8) {
            ctx->pc = 0x32A7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A7A8u;
            // 0x32a7ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A898u;
            goto label_32a898;
        }
    }
    ctx->pc = 0x32A7B0u;
label_32a7b0:
    // 0x32a7b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a7b4:
    // 0x32a7b4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a7b8:
    // 0x32a7b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a7bc:
    // 0x32a7bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a7c0:
    // 0x32a7c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a7c4:
    // 0x32a7c4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a7c8:
    // 0x32a7c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a7cc:
    // 0x32a7cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a7d0:
    // 0x32a7d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a7d4:
    // 0x32a7d4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a7d8:
    if (ctx->pc == 0x32A7D8u) {
        ctx->pc = 0x32A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7D4u;
        // 0x32a7d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7DCu;
        goto label_32a7dc;
    }
    ctx->pc = 0x32A7D4u;
    {
        const bool branch_taken_0x32a7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7D4u;
        // 0x32a7d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7d4) {
            ctx->pc = 0x32A7F4u;
            goto label_32a7f4;
        }
    }
    ctx->pc = 0x32A7DCu;
label_32a7dc:
    // 0x32a7dc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a7e0:
    // 0x32a7e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a7e4:
    // 0x32a7e4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a7e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a7e8:
    // 0x32a7e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a7ec:
    // 0x32a7ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a7f0:
    if (ctx->pc == 0x32A7F0u) {
        ctx->pc = 0x32A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7ECu;
        // 0x32a7f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7F4u;
        goto label_32a7f4;
    }
    ctx->pc = 0x32A7ECu;
    {
        const bool branch_taken_0x32a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7ECu;
        // 0x32a7f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7ec) {
            ctx->pc = 0x32A808u;
            goto label_32a808;
        }
    }
    ctx->pc = 0x32A7F4u;
label_32a7f4:
    // 0x32a7f4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a7f8:
    // 0x32a7f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a7fc:
    // 0x32a7fc: 0x40f809  jalr        $v0
label_32a800:
    if (ctx->pc == 0x32A800u) {
        ctx->pc = 0x32A804u;
        goto label_32a804;
    }
    ctx->pc = 0x32A7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A7FCu, 0x32A804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A804u;
label_32a804:
    // 0x32a804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a808:
    // 0x32a808: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x32a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_32a80c:
    // 0x32a80c: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
label_32a810:
    if (ctx->pc == 0x32A810u) {
        ctx->pc = 0x32A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A80Cu;
        // 0x32a810: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A814u;
        goto label_32a814;
    }
    ctx->pc = 0x32A80Cu;
    {
        const bool branch_taken_0x32a80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A80Cu;
        // 0x32a810: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a80c) {
            ctx->pc = 0x32A894u;
            goto label_32a894;
        }
    }
    ctx->pc = 0x32A814u;
label_32a814:
    // 0x32a814: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a818:
    // 0x32a818: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a81c:
    // 0x32a81c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a820:
    // 0x32a820: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a824:
    // 0x32a824: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a828:
    // 0x32a828: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a82c:
    // 0x32a82c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a830:
    // 0x32a830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a834:
    // 0x32a834: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a838:
    // 0x32a838: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a83c:
    if (ctx->pc == 0x32A83Cu) {
        ctx->pc = 0x32A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A838u;
        // 0x32a83c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A840u;
        goto label_32a840;
    }
    ctx->pc = 0x32A838u;
    {
        const bool branch_taken_0x32a838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A838u;
        // 0x32a83c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a838) {
            ctx->pc = 0x32A858u;
            goto label_32a858;
        }
    }
    ctx->pc = 0x32A840u;
label_32a840:
    // 0x32a840: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a844:
    // 0x32a844: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a848:
    // 0x32a848: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a84c:
    // 0x32a84c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a850:
    // 0x32a850: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a854:
    if (ctx->pc == 0x32A854u) {
        ctx->pc = 0x32A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A850u;
        // 0x32a854: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A858u;
        goto label_32a858;
    }
    ctx->pc = 0x32A850u;
    {
        const bool branch_taken_0x32a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A850u;
        // 0x32a854: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a850) {
            ctx->pc = 0x32A86Cu;
            goto label_32a86c;
        }
    }
    ctx->pc = 0x32A858u;
label_32a858:
    // 0x32a858: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a85c:
    // 0x32a85c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a860:
    // 0x32a860: 0x40f809  jalr        $v0
label_32a864:
    if (ctx->pc == 0x32A864u) {
        ctx->pc = 0x32A868u;
        goto label_32a868;
    }
    ctx->pc = 0x32A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A868u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A860u, 0x32A868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A868u;
label_32a868:
    // 0x32a868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a86c:
    // 0x32a86c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32a870:
    // 0x32a870: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32a870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_32a874:
    // 0x32a874: 0x24a554a0  addiu       $a1, $a1, 0x54A0
    ctx->pc = 0x32a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21664));
label_32a878:
    // 0x32a878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a87c:
    // 0x32a87c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a880:
    // 0x32a880: 0x2406011a  addiu       $a2, $zero, 0x11A
    ctx->pc = 0x32a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_32a884:
    // 0x32a884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a888:
    // 0x32a888: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32a888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32a88c:
    // 0x32a88c: 0xc0ca8bc  jal         func_32A2F0
label_32a890:
    if (ctx->pc == 0x32A890u) {
        ctx->pc = 0x32A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A88Cu;
        // 0x32a890: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A894u;
        goto label_32a894;
    }
    ctx->pc = 0x32A88Cu;
    SET_GPR_U32(ctx, 31, 0x32A894u);
    ctx->pc = 0x32A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A88Cu;
    // 0x32a890: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32A88Cu, 0x32A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A894u;
label_32a894:
    // 0x32a894: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a898:
    // 0x32a898: 0x26a4c531  addiu       $a0, $s5, -0x3ACF
    ctx->pc = 0x32a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952241));
label_32a89c:
    // 0x32a89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32a8a0:
    // 0x32a8a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32a8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32a8a4:
    // 0x32a8a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32a8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32a8a8:
    // 0x32a8a8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_32a8ac:
    if (ctx->pc == 0x32A8ACu) {
        ctx->pc = 0x32A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8A8u;
        // 0x32a8ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8B0u;
        goto label_32a8b0;
    }
    ctx->pc = 0x32A8A8u;
    {
        const bool branch_taken_0x32a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a8a8) {
            ctx->pc = 0x32A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A8A8u;
            // 0x32a8ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A944u;
            goto label_32a944;
        }
    }
    ctx->pc = 0x32A8B0u;
label_32a8b0:
    // 0x32a8b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32a8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a8b4:
    // 0x32a8b4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32a8b8:
    // 0x32a8b8: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x32a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_32a8bc:
    // 0x32a8bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32a8bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32a8c0:
    // 0x32a8c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32a8c4:
    if (ctx->pc == 0x32A8C4u) {
        ctx->pc = 0x32A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8C0u;
        // 0x32a8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8C8u;
        goto label_32a8c8;
    }
    ctx->pc = 0x32A8C0u;
    {
        const bool branch_taken_0x32a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8C0u;
        // 0x32a8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8c0) {
            ctx->pc = 0x32A8D0u;
            goto label_32a8d0;
        }
    }
    ctx->pc = 0x32A8C8u;
label_32a8c8:
    // 0x32a8c8: 0xc0cb244  jal         func_32C910
label_32a8cc:
    if (ctx->pc == 0x32A8CCu) {
        ctx->pc = 0x32A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8C8u;
        // 0x32a8cc: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8D0u;
        goto label_32a8d0;
    }
    ctx->pc = 0x32A8C8u;
    SET_GPR_U32(ctx, 31, 0x32A8D0u);
    ctx->pc = 0x32A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8C8u;
    // 0x32a8cc: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32A8C8u, 0x32A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8D0u;
label_32a8d0:
    // 0x32a8d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a8d4:
    // 0x32a8d4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a8d8:
    // 0x32a8d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a8dc:
    // 0x32a8dc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a8e0:
    // 0x32a8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a8e4:
    // 0x32a8e4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a8e8:
    // 0x32a8e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a8ec:
    // 0x32a8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a8f0:
    // 0x32a8f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a8f4:
    // 0x32a8f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a8f8:
    if (ctx->pc == 0x32A8F8u) {
        ctx->pc = 0x32A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8F4u;
        // 0x32a8f8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8FCu;
        goto label_32a8fc;
    }
    ctx->pc = 0x32A8F4u;
    {
        const bool branch_taken_0x32a8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8F4u;
        // 0x32a8f8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8f4) {
            ctx->pc = 0x32A914u;
            goto label_32a914;
        }
    }
    ctx->pc = 0x32A8FCu;
label_32a8fc:
    // 0x32a8fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a900:
    // 0x32a900: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a904:
    // 0x32a904: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a908:
    // 0x32a908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a90c:
    // 0x32a90c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a910:
    if (ctx->pc == 0x32A910u) {
        ctx->pc = 0x32A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A90Cu;
        // 0x32a910: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A914u;
        goto label_32a914;
    }
    ctx->pc = 0x32A90Cu;
    {
        const bool branch_taken_0x32a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A90Cu;
        // 0x32a910: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a90c) {
            ctx->pc = 0x32A928u;
            goto label_32a928;
        }
    }
    ctx->pc = 0x32A914u;
label_32a914:
    // 0x32a914: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a918:
    // 0x32a918: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a91c:
    // 0x32a91c: 0x40f809  jalr        $v0
label_32a920:
    if (ctx->pc == 0x32A920u) {
        ctx->pc = 0x32A924u;
        goto label_32a924;
    }
    ctx->pc = 0x32A91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A91Cu, 0x32A924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A924u;
label_32a924:
    // 0x32a924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a928:
    // 0x32a928: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32a928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32a92c:
    // 0x32a92c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x32a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_32a930:
    // 0x32a930: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32a930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32a934:
    // 0x32a934: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32a934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32a938:
    // 0x32a938: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_32a93c:
    if (ctx->pc == 0x32A93Cu) {
        ctx->pc = 0x32A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A938u;
        // 0x32a93c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A940u;
        goto label_32a940;
    }
    ctx->pc = 0x32A938u;
    {
        const bool branch_taken_0x32a938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a938) {
            ctx->pc = 0x32A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A938u;
            // 0x32a93c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a8b8;
        }
    }
    ctx->pc = 0x32A940u;
label_32a940:
    // 0x32a940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a944:
    // 0x32a944: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x32a944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_32a948:
    // 0x32a948: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_32a94c:
    if (ctx->pc == 0x32A94Cu) {
        ctx->pc = 0x32A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A948u;
        // 0x32a94c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A950u;
        goto label_32a950;
    }
    ctx->pc = 0x32A948u;
    {
        const bool branch_taken_0x32a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A948u;
        // 0x32a94c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a948) {
            ctx->pc = 0x32A958u;
            goto label_32a958;
        }
    }
    ctx->pc = 0x32A950u;
label_32a950:
    // 0x32a950: 0x54620060  bnel        $v1, $v0, . + 4 + (0x60 << 2)
label_32a954:
    if (ctx->pc == 0x32A954u) {
        ctx->pc = 0x32A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A950u;
        // 0x32a954: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A958u;
        goto label_32a958;
    }
    ctx->pc = 0x32A950u;
    {
        const bool branch_taken_0x32a950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a950) {
            ctx->pc = 0x32A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A950u;
            // 0x32a954: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AAD4u;
            goto label_32aad4;
        }
    }
    ctx->pc = 0x32A958u;
label_32a958:
    // 0x32a958: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a95c:
    // 0x32a95c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a960:
    // 0x32a960: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a964:
    // 0x32a964: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a968:
    // 0x32a968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a96c:
    // 0x32a96c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a970:
    // 0x32a970: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a974:
    // 0x32a974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a978:
    // 0x32a978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a97c:
    // 0x32a97c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a980:
    if (ctx->pc == 0x32A980u) {
        ctx->pc = 0x32A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A97Cu;
        // 0x32a980: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A984u;
        goto label_32a984;
    }
    ctx->pc = 0x32A97Cu;
    {
        const bool branch_taken_0x32a97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A97Cu;
        // 0x32a980: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a97c) {
            ctx->pc = 0x32A99Cu;
            goto label_32a99c;
        }
    }
    ctx->pc = 0x32A984u;
label_32a984:
    // 0x32a984: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a988:
    // 0x32a988: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a98c:
    // 0x32a98c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a990:
    // 0x32a990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a994:
    // 0x32a994: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a998:
    if (ctx->pc == 0x32A998u) {
        ctx->pc = 0x32A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A994u;
        // 0x32a998: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A99Cu;
        goto label_32a99c;
    }
    ctx->pc = 0x32A994u;
    {
        const bool branch_taken_0x32a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A994u;
        // 0x32a998: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a994) {
            ctx->pc = 0x32A9B0u;
            goto label_32a9b0;
        }
    }
    ctx->pc = 0x32A99Cu;
label_32a99c:
    // 0x32a99c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a9a0:
    // 0x32a9a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a9a4:
    // 0x32a9a4: 0x40f809  jalr        $v0
label_32a9a8:
    if (ctx->pc == 0x32A9A8u) {
        ctx->pc = 0x32A9ACu;
        goto label_32a9ac;
    }
    ctx->pc = 0x32A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A9ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9A4u, 0x32A9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A9ACu;
label_32a9ac:
    // 0x32a9ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a9b0:
    // 0x32a9b0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x32a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_32a9b4:
    // 0x32a9b4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_32a9b8:
    if (ctx->pc == 0x32A9B8u) {
        ctx->pc = 0x32A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B4u;
        // 0x32a9b8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9BCu;
        goto label_32a9bc;
    }
    ctx->pc = 0x32A9B4u;
    {
        const bool branch_taken_0x32a9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B4u;
        // 0x32a9b8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9b4) {
            ctx->pc = 0x32A9C8u;
            goto label_32a9c8;
        }
    }
    ctx->pc = 0x32A9BCu;
label_32a9bc:
    // 0x32a9bc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x32a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_32a9c0:
    // 0x32a9c0: 0x54820019  bnel        $a0, $v0, . + 4 + (0x19 << 2)
label_32a9c4:
    if (ctx->pc == 0x32A9C4u) {
        ctx->pc = 0x32A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9C0u;
        // 0x32a9c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9C8u;
        goto label_32a9c8;
    }
    ctx->pc = 0x32A9C0u;
    {
        const bool branch_taken_0x32a9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a9c0) {
            ctx->pc = 0x32A9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A9C0u;
            // 0x32a9c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AA28u;
            goto label_32aa28;
        }
    }
    ctx->pc = 0x32A9C8u;
label_32a9c8:
    // 0x32a9c8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32a9cc:
    // 0x32a9cc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a9d0:
    // 0x32a9d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32a9d4:
    // 0x32a9d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a9d8:
    // 0x32a9d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a9dc:
    // 0x32a9dc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a9e0:
    // 0x32a9e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a9e4:
    // 0x32a9e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a9e8:
    // 0x32a9e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a9ec:
    // 0x32a9ec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a9f0:
    if (ctx->pc == 0x32A9F0u) {
        ctx->pc = 0x32A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9ECu;
        // 0x32a9f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9F4u;
        goto label_32a9f4;
    }
    ctx->pc = 0x32A9ECu;
    {
        const bool branch_taken_0x32a9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9ECu;
        // 0x32a9f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9ec) {
            ctx->pc = 0x32AA0Cu;
            goto label_32aa0c;
        }
    }
    ctx->pc = 0x32A9F4u;
label_32a9f4:
    // 0x32a9f4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a9f8:
    // 0x32a9f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a9fc:
    // 0x32a9fc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a9fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32aa00:
    // 0x32aa00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32aa04:
    // 0x32aa04: 0x10000006  b           . + 4 + (0x6 << 2)
label_32aa08:
    if (ctx->pc == 0x32AA08u) {
        ctx->pc = 0x32AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA04u;
        // 0x32aa08: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA0Cu;
        goto label_32aa0c;
    }
    ctx->pc = 0x32AA04u;
    {
        const bool branch_taken_0x32aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA04u;
        // 0x32aa08: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa04) {
            ctx->pc = 0x32AA20u;
            goto label_32aa20;
        }
    }
    ctx->pc = 0x32AA0Cu;
label_32aa0c:
    // 0x32aa0c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aa10:
    // 0x32aa10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32aa14:
    // 0x32aa14: 0x40f809  jalr        $v0
label_32aa18:
    if (ctx->pc == 0x32AA18u) {
        ctx->pc = 0x32AA1Cu;
        goto label_32aa1c;
    }
    ctx->pc = 0x32AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AA1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AA14u, 0x32AA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AA1Cu;
label_32aa1c:
    // 0x32aa1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aa20:
    // 0x32aa20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32aa24:
    // 0x32aa24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32aa28:
    // 0x32aa28: 0x26a4c531  addiu       $a0, $s5, -0x3ACF
    ctx->pc = 0x32aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952241));
label_32aa2c:
    // 0x32aa2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32aa30:
    // 0x32aa30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32aa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32aa34:
    // 0x32aa34: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32aa38:
    // 0x32aa38: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_32aa3c:
    if (ctx->pc == 0x32AA3Cu) {
        ctx->pc = 0x32AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA38u;
        // 0x32aa3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA40u;
        goto label_32aa40;
    }
    ctx->pc = 0x32AA38u;
    {
        const bool branch_taken_0x32aa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA38u;
        // 0x32aa3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa38) {
            ctx->pc = 0x32AAD0u;
            goto label_32aad0;
        }
    }
    ctx->pc = 0x32AA40u;
label_32aa40:
    // 0x32aa40: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32aa44:
    // 0x32aa44: 0x0  nop
    ctx->pc = 0x32aa44u;
    // NOP
label_32aa48:
    // 0x32aa48: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x32aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_32aa4c:
    // 0x32aa4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32aa4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32aa50:
    // 0x32aa50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32aa54:
    if (ctx->pc == 0x32AA54u) {
        ctx->pc = 0x32AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA50u;
        // 0x32aa54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA58u;
        goto label_32aa58;
    }
    ctx->pc = 0x32AA50u;
    {
        const bool branch_taken_0x32aa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA50u;
        // 0x32aa54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa50) {
            ctx->pc = 0x32AA60u;
            goto label_32aa60;
        }
    }
    ctx->pc = 0x32AA58u;
label_32aa58:
    // 0x32aa58: 0xc0cb244  jal         func_32C910
label_32aa5c:
    if (ctx->pc == 0x32AA5Cu) {
        ctx->pc = 0x32AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA58u;
        // 0x32aa5c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA60u;
        goto label_32aa60;
    }
    ctx->pc = 0x32AA58u;
    SET_GPR_U32(ctx, 31, 0x32AA60u);
    ctx->pc = 0x32AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA58u;
    // 0x32aa5c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32AA58u, 0x32AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA60u;
label_32aa60:
    // 0x32aa60: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32aa64:
    // 0x32aa64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32aa64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32aa68:
    // 0x32aa68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32aa6c:
    // 0x32aa6c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32aa70:
    // 0x32aa70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32aa70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32aa74:
    // 0x32aa74: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aa78:
    // 0x32aa78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32aa7c:
    // 0x32aa7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32aa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aa80:
    // 0x32aa80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32aa84:
    // 0x32aa84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32aa88:
    if (ctx->pc == 0x32AA88u) {
        ctx->pc = 0x32AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA84u;
        // 0x32aa88: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA8Cu;
        goto label_32aa8c;
    }
    ctx->pc = 0x32AA84u;
    {
        const bool branch_taken_0x32aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA84u;
        // 0x32aa88: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa84) {
            ctx->pc = 0x32AAA4u;
            goto label_32aaa4;
        }
    }
    ctx->pc = 0x32AA8Cu;
label_32aa8c:
    // 0x32aa8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aa90:
    // 0x32aa90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32aa94:
    // 0x32aa94: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32aa94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32aa98:
    // 0x32aa98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32aa9c:
    // 0x32aa9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32aaa0:
    if (ctx->pc == 0x32AAA0u) {
        ctx->pc = 0x32AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA9Cu;
        // 0x32aaa0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAA4u;
        goto label_32aaa4;
    }
    ctx->pc = 0x32AA9Cu;
    {
        const bool branch_taken_0x32aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA9Cu;
        // 0x32aaa0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa9c) {
            ctx->pc = 0x32AAB8u;
            goto label_32aab8;
        }
    }
    ctx->pc = 0x32AAA4u;
label_32aaa4:
    // 0x32aaa4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aaa8:
    // 0x32aaa8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32aaac:
    // 0x32aaac: 0x40f809  jalr        $v0
label_32aab0:
    if (ctx->pc == 0x32AAB0u) {
        ctx->pc = 0x32AAB4u;
        goto label_32aab4;
    }
    ctx->pc = 0x32AAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AAB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AAACu, 0x32AAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AAB4u;
label_32aab4:
    // 0x32aab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32aab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aab8:
    // 0x32aab8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32aabc:
    // 0x32aabc: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x32aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_32aac0:
    // 0x32aac0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32aac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32aac4:
    // 0x32aac4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32aac8:
    // 0x32aac8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_32aacc:
    if (ctx->pc == 0x32AACCu) {
        ctx->pc = 0x32AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAC8u;
        // 0x32aacc: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAD0u;
        goto label_32aad0;
    }
    ctx->pc = 0x32AAC8u;
    {
        const bool branch_taken_0x32aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aac8) {
            ctx->pc = 0x32AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AAC8u;
            // 0x32aacc: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32aa48;
        }
    }
    ctx->pc = 0x32AAD0u;
label_32aad0:
    // 0x32aad0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32aad4:
    // 0x32aad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x32aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32aad8:
    // 0x32aad8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32aadc:
    // 0x32aadc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32aadcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32aae0:
    // 0x32aae0: 0xc0cb25e  jal         func_32C978
label_32aae4:
    if (ctx->pc == 0x32AAE4u) {
        ctx->pc = 0x32AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAE0u;
        // 0x32aae4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAE8u;
        goto label_32aae8;
    }
    ctx->pc = 0x32AAE0u;
    SET_GPR_U32(ctx, 31, 0x32AAE8u);
    ctx->pc = 0x32AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAE0u;
    // 0x32aae4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C978u, 0x32AAE0u, 0x32AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAE8u;
label_32aae8:
    // 0x32aae8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_32aaec:
    if (ctx->pc == 0x32AAECu) {
        ctx->pc = 0x32AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAE8u;
        // 0x32aaec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAF0u;
        goto label_32aaf0;
    }
    ctx->pc = 0x32AAE8u;
    {
        const bool branch_taken_0x32aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aae8) {
            ctx->pc = 0x32AAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AAE8u;
            // 0x32aaec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB08u;
            goto label_32ab08;
        }
    }
    ctx->pc = 0x32AAF0u;
label_32aaf0:
    // 0x32aaf0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_32aaf4:
    // 0x32aaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32aaf8:
    // 0x32aaf8: 0x24a554d8  addiu       $a1, $a1, 0x54D8
    ctx->pc = 0x32aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
label_32aafc:
    // 0x32aafc: 0xc0ca8bc  jal         func_32A2F0
label_32ab00:
    if (ctx->pc == 0x32AB00u) {
        ctx->pc = 0x32AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAFCu;
        // 0x32ab00: 0x2406011a  addiu       $a2, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB04u;
        goto label_32ab04;
    }
    ctx->pc = 0x32AAFCu;
    SET_GPR_U32(ctx, 31, 0x32AB04u);
    ctx->pc = 0x32AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAFCu;
    // 0x32ab00: 0x2406011a  addiu       $a2, $zero, 0x11A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32AAFCu, 0x32AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB04u;
label_32ab04:
    // 0x32ab04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32ab04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32ab08:
    // 0x32ab08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32ab08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32ab0c:
    // 0x32ab0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32ab0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ab10:
    // 0x32ab10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ab10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ab14:
    // 0x32ab14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32ab14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ab18:
    // 0x32ab18: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x32ab18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ab1c:
    // 0x32ab1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ab1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ab20:
    // 0x32ab20: 0x3e00008  jr          $ra
label_32ab24:
    if (ctx->pc == 0x32AB24u) {
        ctx->pc = 0x32AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB20u;
        // 0x32ab24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB28u;
        goto label_fallthrough_0x32ab20;
    }
    ctx->pc = 0x32AB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB20u;
        // 0x32ab24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ab20:
    ctx->pc = 0x32AB28u;
}
