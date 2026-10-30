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

// Function: sub_0020A7A8
// Address: 0x20a7a8 - 0x20ac48
void sub_0020A7A8_0x20a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A7A8_0x20a7a8");
#endif

    switch (ctx->pc) {
        case 0x20a7a8u: goto label_20a7a8;
        case 0x20a7acu: goto label_20a7ac;
        case 0x20a7b0u: goto label_20a7b0;
        case 0x20a7b4u: goto label_20a7b4;
        case 0x20a7b8u: goto label_20a7b8;
        case 0x20a7bcu: goto label_20a7bc;
        case 0x20a7c0u: goto label_20a7c0;
        case 0x20a7c4u: goto label_20a7c4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7ccu: goto label_20a7cc;
        case 0x20a7d0u: goto label_20a7d0;
        case 0x20a7d4u: goto label_20a7d4;
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7dcu: goto label_20a7dc;
        case 0x20a7e0u: goto label_20a7e0;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7e8u: goto label_20a7e8;
        case 0x20a7ecu: goto label_20a7ec;
        case 0x20a7f0u: goto label_20a7f0;
        case 0x20a7f4u: goto label_20a7f4;
        case 0x20a7f8u: goto label_20a7f8;
        case 0x20a7fcu: goto label_20a7fc;
        case 0x20a800u: goto label_20a800;
        case 0x20a804u: goto label_20a804;
        case 0x20a808u: goto label_20a808;
        case 0x20a80cu: goto label_20a80c;
        case 0x20a810u: goto label_20a810;
        case 0x20a814u: goto label_20a814;
        case 0x20a818u: goto label_20a818;
        case 0x20a81cu: goto label_20a81c;
        case 0x20a820u: goto label_20a820;
        case 0x20a824u: goto label_20a824;
        case 0x20a828u: goto label_20a828;
        case 0x20a82cu: goto label_20a82c;
        case 0x20a830u: goto label_20a830;
        case 0x20a834u: goto label_20a834;
        case 0x20a838u: goto label_20a838;
        case 0x20a83cu: goto label_20a83c;
        case 0x20a840u: goto label_20a840;
        case 0x20a844u: goto label_20a844;
        case 0x20a848u: goto label_20a848;
        case 0x20a84cu: goto label_20a84c;
        case 0x20a850u: goto label_20a850;
        case 0x20a854u: goto label_20a854;
        case 0x20a858u: goto label_20a858;
        case 0x20a85cu: goto label_20a85c;
        case 0x20a860u: goto label_20a860;
        case 0x20a864u: goto label_20a864;
        case 0x20a868u: goto label_20a868;
        case 0x20a86cu: goto label_20a86c;
        case 0x20a870u: goto label_20a870;
        case 0x20a874u: goto label_20a874;
        case 0x20a878u: goto label_20a878;
        case 0x20a87cu: goto label_20a87c;
        case 0x20a880u: goto label_20a880;
        case 0x20a884u: goto label_20a884;
        case 0x20a888u: goto label_20a888;
        case 0x20a88cu: goto label_20a88c;
        case 0x20a890u: goto label_20a890;
        case 0x20a894u: goto label_20a894;
        case 0x20a898u: goto label_20a898;
        case 0x20a89cu: goto label_20a89c;
        case 0x20a8a0u: goto label_20a8a0;
        case 0x20a8a4u: goto label_20a8a4;
        case 0x20a8a8u: goto label_20a8a8;
        case 0x20a8acu: goto label_20a8ac;
        case 0x20a8b0u: goto label_20a8b0;
        case 0x20a8b4u: goto label_20a8b4;
        case 0x20a8b8u: goto label_20a8b8;
        case 0x20a8bcu: goto label_20a8bc;
        case 0x20a8c0u: goto label_20a8c0;
        case 0x20a8c4u: goto label_20a8c4;
        case 0x20a8c8u: goto label_20a8c8;
        case 0x20a8ccu: goto label_20a8cc;
        case 0x20a8d0u: goto label_20a8d0;
        case 0x20a8d4u: goto label_20a8d4;
        case 0x20a8d8u: goto label_20a8d8;
        case 0x20a8dcu: goto label_20a8dc;
        case 0x20a8e0u: goto label_20a8e0;
        case 0x20a8e4u: goto label_20a8e4;
        case 0x20a8e8u: goto label_20a8e8;
        case 0x20a8ecu: goto label_20a8ec;
        case 0x20a8f0u: goto label_20a8f0;
        case 0x20a8f4u: goto label_20a8f4;
        case 0x20a8f8u: goto label_20a8f8;
        case 0x20a8fcu: goto label_20a8fc;
        case 0x20a900u: goto label_20a900;
        case 0x20a904u: goto label_20a904;
        case 0x20a908u: goto label_20a908;
        case 0x20a90cu: goto label_20a90c;
        case 0x20a910u: goto label_20a910;
        case 0x20a914u: goto label_20a914;
        case 0x20a918u: goto label_20a918;
        case 0x20a91cu: goto label_20a91c;
        case 0x20a920u: goto label_20a920;
        case 0x20a924u: goto label_20a924;
        case 0x20a928u: goto label_20a928;
        case 0x20a92cu: goto label_20a92c;
        case 0x20a930u: goto label_20a930;
        case 0x20a934u: goto label_20a934;
        case 0x20a938u: goto label_20a938;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a940u: goto label_20a940;
        case 0x20a944u: goto label_20a944;
        case 0x20a948u: goto label_20a948;
        case 0x20a94cu: goto label_20a94c;
        case 0x20a950u: goto label_20a950;
        case 0x20a954u: goto label_20a954;
        case 0x20a958u: goto label_20a958;
        case 0x20a95cu: goto label_20a95c;
        case 0x20a960u: goto label_20a960;
        case 0x20a964u: goto label_20a964;
        case 0x20a968u: goto label_20a968;
        case 0x20a96cu: goto label_20a96c;
        case 0x20a970u: goto label_20a970;
        case 0x20a974u: goto label_20a974;
        case 0x20a978u: goto label_20a978;
        case 0x20a97cu: goto label_20a97c;
        case 0x20a980u: goto label_20a980;
        case 0x20a984u: goto label_20a984;
        case 0x20a988u: goto label_20a988;
        case 0x20a98cu: goto label_20a98c;
        case 0x20a990u: goto label_20a990;
        case 0x20a994u: goto label_20a994;
        case 0x20a998u: goto label_20a998;
        case 0x20a99cu: goto label_20a99c;
        case 0x20a9a0u: goto label_20a9a0;
        case 0x20a9a4u: goto label_20a9a4;
        case 0x20a9a8u: goto label_20a9a8;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20a9b0u: goto label_20a9b0;
        case 0x20a9b4u: goto label_20a9b4;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9bcu: goto label_20a9bc;
        case 0x20a9c0u: goto label_20a9c0;
        case 0x20a9c4u: goto label_20a9c4;
        case 0x20a9c8u: goto label_20a9c8;
        case 0x20a9ccu: goto label_20a9cc;
        case 0x20a9d0u: goto label_20a9d0;
        case 0x20a9d4u: goto label_20a9d4;
        case 0x20a9d8u: goto label_20a9d8;
        case 0x20a9dcu: goto label_20a9dc;
        case 0x20a9e0u: goto label_20a9e0;
        case 0x20a9e4u: goto label_20a9e4;
        case 0x20a9e8u: goto label_20a9e8;
        case 0x20a9ecu: goto label_20a9ec;
        case 0x20a9f0u: goto label_20a9f0;
        case 0x20a9f4u: goto label_20a9f4;
        case 0x20a9f8u: goto label_20a9f8;
        case 0x20a9fcu: goto label_20a9fc;
        case 0x20aa00u: goto label_20aa00;
        case 0x20aa04u: goto label_20aa04;
        case 0x20aa08u: goto label_20aa08;
        case 0x20aa0cu: goto label_20aa0c;
        case 0x20aa10u: goto label_20aa10;
        case 0x20aa14u: goto label_20aa14;
        case 0x20aa18u: goto label_20aa18;
        case 0x20aa1cu: goto label_20aa1c;
        case 0x20aa20u: goto label_20aa20;
        case 0x20aa24u: goto label_20aa24;
        case 0x20aa28u: goto label_20aa28;
        case 0x20aa2cu: goto label_20aa2c;
        case 0x20aa30u: goto label_20aa30;
        case 0x20aa34u: goto label_20aa34;
        case 0x20aa38u: goto label_20aa38;
        case 0x20aa3cu: goto label_20aa3c;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa48u: goto label_20aa48;
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa50u: goto label_20aa50;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa58u: goto label_20aa58;
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa60u: goto label_20aa60;
        case 0x20aa64u: goto label_20aa64;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa6cu: goto label_20aa6c;
        case 0x20aa70u: goto label_20aa70;
        case 0x20aa74u: goto label_20aa74;
        case 0x20aa78u: goto label_20aa78;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa84u: goto label_20aa84;
        case 0x20aa88u: goto label_20aa88;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aa90u: goto label_20aa90;
        case 0x20aa94u: goto label_20aa94;
        case 0x20aa98u: goto label_20aa98;
        case 0x20aa9cu: goto label_20aa9c;
        case 0x20aaa0u: goto label_20aaa0;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aaacu: goto label_20aaac;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aab4u: goto label_20aab4;
        case 0x20aab8u: goto label_20aab8;
        case 0x20aabcu: goto label_20aabc;
        case 0x20aac0u: goto label_20aac0;
        case 0x20aac4u: goto label_20aac4;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aaccu: goto label_20aacc;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aad8u: goto label_20aad8;
        case 0x20aadcu: goto label_20aadc;
        case 0x20aae0u: goto label_20aae0;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaecu: goto label_20aaec;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20aaf4u: goto label_20aaf4;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20aafcu: goto label_20aafc;
        case 0x20ab00u: goto label_20ab00;
        case 0x20ab04u: goto label_20ab04;
        case 0x20ab08u: goto label_20ab08;
        case 0x20ab0cu: goto label_20ab0c;
        case 0x20ab10u: goto label_20ab10;
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab18u: goto label_20ab18;
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab20u: goto label_20ab20;
        case 0x20ab24u: goto label_20ab24;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab30u: goto label_20ab30;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab38u: goto label_20ab38;
        case 0x20ab3cu: goto label_20ab3c;
        case 0x20ab40u: goto label_20ab40;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab48u: goto label_20ab48;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab50u: goto label_20ab50;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        default: break;
    }

    ctx->pc = 0x20a7a8u;

label_20a7a8:
    // 0x20a7a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20a7ac:
    // 0x20a7ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20a7b0:
    // 0x20a7b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20a7b4:
    // 0x20a7b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a7b8:
    // 0x20a7b8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20a7bc:
    // 0x20a7bc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20a7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20a7c0:
    // 0x20a7c0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20a7c4:
    // 0x20a7c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20a7c8:
    // 0x20a7c8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20a7cc:
    // 0x20a7cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20a7d0:
    // 0x20a7d0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x20a7d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_20a7d4:
    // 0x20a7d4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20a7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20a7d8:
    // 0x20a7d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20a7dc:
    // 0x20a7dc: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
label_20a7e0:
    if (ctx->pc == 0x20A7E0u) {
        ctx->pc = 0x20A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7DCu;
        // 0x20a7e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7E4u;
        goto label_20a7e4;
    }
    ctx->pc = 0x20A7DCu;
    {
        const bool branch_taken_0x20a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7DCu;
        // 0x20a7e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7dc) {
            ctx->pc = 0x20AC1Cu;
            goto label_20ac1c;
        }
    }
    ctx->pc = 0x20A7E4u;
label_20a7e4:
    // 0x20a7e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20a7e8:
    // 0x20a7e8: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x20a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_20a7ec:
    // 0x20a7ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20a7f0:
    // 0x20a7f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20a7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_20a7f4:
    // 0x20a7f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20a7f8:
    if (ctx->pc == 0x20A7F8u) {
        ctx->pc = 0x20A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F4u;
        // 0x20a7f8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7FCu;
        goto label_20a7fc;
    }
    ctx->pc = 0x20A7F4u;
    {
        const bool branch_taken_0x20a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F4u;
        // 0x20a7f8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7f4) {
            ctx->pc = 0x20A824u;
            goto label_20a824;
        }
    }
    ctx->pc = 0x20A7FCu;
label_20a7fc:
    // 0x20a7fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20a7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_20a800:
    // 0x20a800: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20a804:
    if (ctx->pc == 0x20A804u) {
        ctx->pc = 0x20A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A800u;
        // 0x20a804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A808u;
        goto label_20a808;
    }
    ctx->pc = 0x20A800u;
    {
        const bool branch_taken_0x20a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A800u;
        // 0x20a804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a800) {
            ctx->pc = 0x20A81Cu;
            goto label_20a81c;
        }
    }
    ctx->pc = 0x20A808u;
label_20a808:
    // 0x20a808: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x20a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_20a80c:
    // 0x20a80c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20a80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20a810:
    // 0x20a810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20a814:
    // 0x20a814: 0x10000008  b           . + 4 + (0x8 << 2)
label_20a818:
    if (ctx->pc == 0x20A818u) {
        ctx->pc = 0x20A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A814u;
        // 0x20a818: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A81Cu;
        goto label_20a81c;
    }
    ctx->pc = 0x20A814u;
    {
        const bool branch_taken_0x20a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A814u;
        // 0x20a818: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a814) {
            ctx->pc = 0x20A838u;
            goto label_20a838;
        }
    }
    ctx->pc = 0x20A81Cu;
label_20a81c:
    // 0x20a81c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_20a820:
    // 0x20a820: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20a820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_20a824:
    // 0x20a824: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_20a828:
    // 0x20a828: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x20a828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_20a82c:
    // 0x20a82c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20a830:
    // 0x20a830: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20a834:
    // 0x20a834: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20a834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a838:
    // 0x20a838: 0xe440f664  swc1        $f0, -0x99C($v0)
    ctx->pc = 0x20a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964836), bits); }
label_20a83c:
    // 0x20a83c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20a840:
    // 0x20a840: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20a840u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20a844:
    // 0x20a844: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_20a848:
    // 0x20a848: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20a848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a84c:
    // 0x20a84c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x20a84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20a850:
    // 0x20a850: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20a854:
    // 0x20a854: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x20a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_20a858:
    // 0x20a858: 0x24a59068  addiu       $a1, $a1, -0x6F98
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938728));
label_20a85c:
    // 0x20a85c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x20a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_20a860:
    // 0x20a860: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20a860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20a864:
    // 0x20a864: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20a864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20a868:
    // 0x20a868: 0x25089070  addiu       $t0, $t0, -0x6F90
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938736));
label_20a86c:
    // 0x20a86c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20a870:
    // 0x20a870: 0x2409003d  addiu       $t1, $zero, 0x3D
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_20a874:
    // 0x20a874: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_20a878:
    // 0x20a878: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20a878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a87c:
    // 0x20a87c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a87cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a880:
    // 0x20a880: 0x40f809  jalr        $v0
label_20a884:
    if (ctx->pc == 0x20A884u) {
        ctx->pc = 0x20A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A880u;
        // 0x20a884: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A888u;
        goto label_20a888;
    }
    ctx->pc = 0x20A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A888u);
        ctx->pc = 0x20A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A880u;
        // 0x20a884: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A880u, 0x20A888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A888u;
label_20a888:
    // 0x20a888: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x20a888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_20a88c:
    // 0x20a88c: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x20a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_20a890:
    // 0x20a890: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_20a894:
    // 0x20a894: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x20a894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_20a898:
    // 0x20a898: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_20a89c:
    // 0x20a89c: 0x40f809  jalr        $v0
label_20a8a0:
    if (ctx->pc == 0x20A8A0u) {
        ctx->pc = 0x20A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A89Cu;
        // 0x20a8a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8A4u;
        goto label_20a8a4;
    }
    ctx->pc = 0x20A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A8A4u);
        ctx->pc = 0x20A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A89Cu;
        // 0x20a8a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A89Cu, 0x20A8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A8A4u;
label_20a8a4:
    // 0x20a8a4: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_20a8a8:
    // 0x20a8a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20a8a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a8ac:
    // 0x20a8ac: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_20a8b0:
    // 0x20a8b0: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x20a8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_20a8b4:
    // 0x20a8b4: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_20a8b8:
    // 0x20a8b8: 0x40f809  jalr        $v0
label_20a8bc:
    if (ctx->pc == 0x20A8BCu) {
        ctx->pc = 0x20A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B8u;
        // 0x20a8bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8C0u;
        goto label_20a8c0;
    }
    ctx->pc = 0x20A8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A8C0u);
        ctx->pc = 0x20A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B8u;
        // 0x20a8bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8B8u, 0x20A8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A8C0u;
label_20a8c0:
    // 0x20a8c0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_20a8c4:
    if (ctx->pc == 0x20A8C4u) {
        ctx->pc = 0x20A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8C0u;
        // 0x20a8c4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8C8u;
        goto label_20a8c8;
    }
    ctx->pc = 0x20A8C0u;
    {
        const bool branch_taken_0x20a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8C0u;
        // 0x20a8c4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8c0) {
            ctx->pc = 0x20A914u;
            goto label_20a914;
        }
    }
    ctx->pc = 0x20A8C8u;
label_20a8c8:
    // 0x20a8c8: 0xc057d58  jal         func_15F560
label_20a8cc:
    if (ctx->pc == 0x20A8CCu) {
        ctx->pc = 0x20A8D0u;
        goto label_20a8d0;
    }
    ctx->pc = 0x20A8C8u;
    SET_GPR_U32(ctx, 31, 0x20A8D0u);
    ctx->pc = 0x15F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F560u, 0x20A8C8u, 0x20A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8D0u;
label_20a8d0:
    // 0x20a8d0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x20a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_20a8d4:
    // 0x20a8d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20a8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20a8d8:
    // 0x20a8d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20a8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20a8dc:
    // 0x20a8dc: 0x240400c3  addiu       $a0, $zero, 0xC3
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_20a8e0:
    // 0x20a8e0: 0xc067b9c  jal         func_19EE70
label_20a8e4:
    if (ctx->pc == 0x20A8E4u) {
        ctx->pc = 0x20A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E0u;
        // 0x20a8e4: 0x261090b0  addiu       $s0, $s0, -0x6F50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8E8u;
        goto label_20a8e8;
    }
    ctx->pc = 0x20A8E0u;
    SET_GPR_U32(ctx, 31, 0x20A8E8u);
    ctx->pc = 0x20A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8E0u;
    // 0x20a8e4: 0x261090b0  addiu       $s0, $s0, -0x6F50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A8E0u, 0x20A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8E8u;
label_20a8e8:
    // 0x20a8e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a8ec:
    // 0x20a8ec: 0xc067b9c  jal         func_19EE70
label_20a8f0:
    if (ctx->pc == 0x20A8F0u) {
        ctx->pc = 0x20A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8ECu;
        // 0x20a8f0: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8F4u;
        goto label_20a8f4;
    }
    ctx->pc = 0x20A8ECu;
    SET_GPR_U32(ctx, 31, 0x20A8F4u);
    ctx->pc = 0x20A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8ECu;
    // 0x20a8f0: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A8ECu, 0x20A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8F4u;
label_20a8f4:
    // 0x20a8f4: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a8f8:
    // 0x20a8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a8fc:
    // 0x20a8fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a900:
    // 0x20a900: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20a900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20a904:
    // 0x20a904: 0xc10ca28  jal         func_4328A0
label_20a908:
    if (ctx->pc == 0x20A908u) {
        ctx->pc = 0x20A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A904u;
        // 0x20a908: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A90Cu;
        goto label_20a90c;
    }
    ctx->pc = 0x20A904u;
    SET_GPR_U32(ctx, 31, 0x20A90Cu);
    ctx->pc = 0x20A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A904u;
    // 0x20a908: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x20A904u, 0x20A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A90Cu;
label_20a90c:
    // 0x20a90c: 0x10000010  b           . + 4 + (0x10 << 2)
label_20a910:
    if (ctx->pc == 0x20A910u) {
        ctx->pc = 0x20A914u;
        goto label_20a914;
    }
    ctx->pc = 0x20A90Cu;
    {
        const bool branch_taken_0x20a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a90c) {
            ctx->pc = 0x20A950u;
            goto label_20a950;
        }
    }
    ctx->pc = 0x20A914u;
label_20a914:
    // 0x20a914: 0x240400c5  addiu       $a0, $zero, 0xC5
    ctx->pc = 0x20a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
label_20a918:
    // 0x20a918: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
label_20a91c:
    // 0x20a91c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x20a91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_20a920:
    // 0x20a920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20a920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20a924:
    // 0x20a924: 0xc067b9c  jal         func_19EE70
label_20a928:
    if (ctx->pc == 0x20A928u) {
        ctx->pc = 0x20A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A924u;
        // 0x20a928: 0x261090b0  addiu       $s0, $s0, -0x6F50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A92Cu;
        goto label_20a92c;
    }
    ctx->pc = 0x20A924u;
    SET_GPR_U32(ctx, 31, 0x20A92Cu);
    ctx->pc = 0x20A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A924u;
    // 0x20a928: 0x261090b0  addiu       $s0, $s0, -0x6F50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A924u, 0x20A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A92Cu;
label_20a92c:
    // 0x20a92c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a930:
    // 0x20a930: 0xc067b9c  jal         func_19EE70
label_20a934:
    if (ctx->pc == 0x20A934u) {
        ctx->pc = 0x20A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A930u;
        // 0x20a934: 0x240400c6  addiu       $a0, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A938u;
        goto label_20a938;
    }
    ctx->pc = 0x20A930u;
    SET_GPR_U32(ctx, 31, 0x20A938u);
    ctx->pc = 0x20A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A930u;
    // 0x20a934: 0x240400c6  addiu       $a0, $zero, 0xC6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A930u, 0x20A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A938u;
label_20a938:
    // 0x20a938: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a93c:
    // 0x20a93c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a940:
    // 0x20a940: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20a940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a944:
    // 0x20a944: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20a944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20a948:
    // 0x20a948: 0xc10ca28  jal         func_4328A0
label_20a94c:
    if (ctx->pc == 0x20A94Cu) {
        ctx->pc = 0x20A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A948u;
        // 0x20a94c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A950u;
        goto label_20a950;
    }
    ctx->pc = 0x20A948u;
    SET_GPR_U32(ctx, 31, 0x20A950u);
    ctx->pc = 0x20A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A948u;
    // 0x20a94c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x20A948u, 0x20A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A950u;
label_20a950:
    // 0x20a950: 0xc080ebe  jal         func_203AF8
label_20a954:
    if (ctx->pc == 0x20A954u) {
        ctx->pc = 0x20A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A950u;
        // 0x20a954: 0x26949070  addiu       $s4, $s4, -0x6F90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A958u;
        goto label_20a958;
    }
    ctx->pc = 0x20A950u;
    SET_GPR_U32(ctx, 31, 0x20A958u);
    ctx->pc = 0x20A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A950u;
    // 0x20a954: 0x26949070  addiu       $s4, $s4, -0x6F90 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20A950u, 0x20A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A958u;
label_20a958:
    // 0x20a958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20a95c:
    // 0x20a95c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20a95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20a960:
    // 0x20a960: 0xc6c1f664  lwc1        $f1, -0x99C($s6)
    ctx->pc = 0x20a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a964:
    // 0x20a964: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20a968:
    // 0x20a968: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20a96c:
    // 0x20a96c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x20a96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20a970:
    // 0x20a970: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20a970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20a974:
    // 0x20a974: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20a974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20a978:
    // 0x20a978: 0x2409004b  addiu       $t1, $zero, 0x4B
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_20a97c:
    // 0x20a97c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20a97cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20a980:
    // 0x20a980: 0x24a590b8  addiu       $a1, $a1, -0x6F48
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938808));
label_20a984:
    // 0x20a984: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20a988:
    // 0x20a988: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20a98c:
    // 0x20a98c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20a98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20a990:
    // 0x20a990: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20a990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a994:
    // 0x20a994: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20a998:
    // 0x20a998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a99c:
    // 0x20a99c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20a99cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a9a0:
    // 0x20a9a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20a9a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20a9a4:
    // 0x20a9a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20a9a8:
    // 0x20a9a8: 0x40f809  jalr        $v0
label_20a9ac:
    if (ctx->pc == 0x20A9ACu) {
        ctx->pc = 0x20A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9A8u;
        // 0x20a9ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9B0u;
        goto label_20a9b0;
    }
    ctx->pc = 0x20A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A9B0u);
        ctx->pc = 0x20A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9A8u;
        // 0x20a9ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A9A8u, 0x20A9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A9B0u;
label_20a9b0:
    // 0x20a9b0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20a9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a9b4:
    // 0x20a9b4: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_20a9b8:
    if (ctx->pc == 0x20A9B8u) {
        ctx->pc = 0x20A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B4u;
        // 0x20a9b8: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9BCu;
        goto label_20a9bc;
    }
    ctx->pc = 0x20A9B4u;
    {
        const bool branch_taken_0x20a9b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9b4) {
            ctx->pc = 0x20A9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9B4u;
            // 0x20a9b8: 0xae490090  sw          $t1, 0x90($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A9BCu;
label_20a9bc:
    // 0x20a9bc: 0xc0705aa  jal         func_1C16A8
label_20a9c0:
    if (ctx->pc == 0x20A9C0u) {
        ctx->pc = 0x20A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9BCu;
        // 0x20a9c0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9C4u;
        goto label_20a9c4;
    }
    ctx->pc = 0x20A9BCu;
    SET_GPR_U32(ctx, 31, 0x20A9C4u);
    ctx->pc = 0x20A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9BCu;
    // 0x20a9c0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x20A9BCu, 0x20A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9C4u;
label_20a9c4:
    // 0x20a9c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20a9c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a9c8:
    // 0x20a9c8: 0xae490090  sw          $t1, 0x90($s2)
    ctx->pc = 0x20a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 9));
label_20a9cc:
    // 0x20a9cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20a9d0:
    // 0x20a9d0: 0x8c51d328  lw          $s1, -0x2CD8($v0)
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_20a9d4:
    // 0x20a9d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20a9d8:
    // 0x20a9d8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x20a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_20a9dc:
    // 0x20a9dc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x20a9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20a9e0:
    // 0x20a9e0: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x20a9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_20a9e4:
    // 0x20a9e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20a9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20a9e8:
    // 0x20a9e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20a9ec:
    // 0x20a9ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20a9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a9f0:
    // 0x20a9f0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x20a9f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_20a9f4:
    // 0x20a9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a9f8:
    // 0x20a9f8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_20a9fc:
    // 0x20a9fc: 0x40f809  jalr        $v0
label_20aa00:
    if (ctx->pc == 0x20AA00u) {
        ctx->pc = 0x20AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9FCu;
        // 0x20aa00: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA04u;
        goto label_20aa04;
    }
    ctx->pc = 0x20A9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AA04u);
        ctx->pc = 0x20AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9FCu;
        // 0x20aa00: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A9FCu, 0x20AA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AA04u;
label_20aa04:
    // 0x20aa04: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20aa08:
    // 0x20aa08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aa0c:
    // 0x20aa0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20aa10:
    // 0x20aa10: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_20aa14:
    // 0x20aa14: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_20aa18:
    // 0x20aa18: 0x60f809  jalr        $v1
label_20aa1c:
    if (ctx->pc == 0x20AA1Cu) {
        ctx->pc = 0x20AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA18u;
        // 0x20aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA20u;
        goto label_20aa20;
    }
    ctx->pc = 0x20AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AA20u);
        ctx->pc = 0x20AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA18u;
        // 0x20aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA18u, 0x20AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AA20u;
label_20aa20:
    // 0x20aa20: 0x8e470090  lw          $a3, 0x90($s2)
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20aa24:
    // 0x20aa24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20aa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa28:
    // 0x20aa28: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20aa2c:
    // 0x20aa2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20aa2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20aa30:
    // 0x20aa30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20aa34:
    // 0x20aa34: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20aa34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_20aa38:
    // 0x20aa38: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_20aa3c:
    // 0x20aa3c: 0x60f809  jalr        $v1
label_20aa40:
    if (ctx->pc == 0x20AA40u) {
        ctx->pc = 0x20AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA3Cu;
        // 0x20aa40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA44u;
        goto label_20aa44;
    }
    ctx->pc = 0x20AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AA44u);
        ctx->pc = 0x20AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA3Cu;
        // 0x20aa40: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA3Cu, 0x20AA44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AA44u;
label_20aa44:
    // 0x20aa44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20aa48:
    // 0x20aa48: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20aa48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20aa4c:
    // 0x20aa4c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_20aa50:
    // 0x20aa50: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20aa54:
    // 0x20aa54: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x20aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
label_20aa58:
    // 0x20aa58: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20aa58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20aa5c:
    // 0x20aa5c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20aa60:
    // 0x20aa60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20aa64:
    // 0x20aa64: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20aa68:
    // 0x20aa68: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x20aa68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_20aa6c:
    // 0x20aa6c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20aa70:
    // 0x20aa70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20aa70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa74:
    // 0x20aa74: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20aa78:
    // 0x20aa78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20aa78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa7c:
    // 0x20aa7c: 0x40f809  jalr        $v0
label_20aa80:
    if (ctx->pc == 0x20AA80u) {
        ctx->pc = 0x20AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA7Cu;
        // 0x20aa80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA84u;
        goto label_20aa84;
    }
    ctx->pc = 0x20AA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AA84u);
        ctx->pc = 0x20AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA7Cu;
        // 0x20aa80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA7Cu, 0x20AA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AA84u;
label_20aa84:
    // 0x20aa84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20aa88:
    if (ctx->pc == 0x20AA88u) {
        ctx->pc = 0x20AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA84u;
        // 0x20aa88: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA8Cu;
        goto label_20aa8c;
    }
    ctx->pc = 0x20AA84u;
    {
        const bool branch_taken_0x20aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa84) {
            ctx->pc = 0x20AA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AA84u;
            // 0x20aa88: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AA98u;
            goto label_20aa98;
        }
    }
    ctx->pc = 0x20AA8Cu;
label_20aa8c:
    // 0x20aa8c: 0xc074fbc  jal         func_1D3EF0
label_20aa90:
    if (ctx->pc == 0x20AA90u) {
        ctx->pc = 0x20AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA8Cu;
        // 0x20aa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA94u;
        goto label_20aa94;
    }
    ctx->pc = 0x20AA8Cu;
    SET_GPR_U32(ctx, 31, 0x20AA94u);
    ctx->pc = 0x20AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA8Cu;
    // 0x20aa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x20AA8Cu, 0x20AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA94u;
label_20aa94:
    // 0x20aa94: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x20aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
label_20aa98:
    // 0x20aa98: 0xc080ec6  jal         func_203B18
label_20aa9c:
    if (ctx->pc == 0x20AA9Cu) {
        ctx->pc = 0x20AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA98u;
        // 0x20aa9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAA0u;
        goto label_20aaa0;
    }
    ctx->pc = 0x20AA98u;
    SET_GPR_U32(ctx, 31, 0x20AAA0u);
    ctx->pc = 0x20AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA98u;
    // 0x20aa9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x20AA98u, 0x20AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAA0u;
label_20aaa0:
    // 0x20aaa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20aaa4:
    // 0x20aaa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20aaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20aaa8:
    // 0x20aaa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20aaac:
    // 0x20aaac: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20aab0:
    // 0x20aab0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aab4:
    // 0x20aab4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20aab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20aab8:
    // 0x20aab8: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20aabc:
    // 0x20aabc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20aabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20aac0:
    // 0x20aac0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20aac4:
    // 0x20aac4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20aac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20aac8:
    // 0x20aac8: 0xc075044  jal         func_1D4110
label_20aacc:
    if (ctx->pc == 0x20AACCu) {
        ctx->pc = 0x20AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC8u;
        // 0x20aacc: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAD0u;
        goto label_20aad0;
    }
    ctx->pc = 0x20AAC8u;
    SET_GPR_U32(ctx, 31, 0x20AAD0u);
    ctx->pc = 0x20AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAC8u;
    // 0x20aacc: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x20AAC8u, 0x20AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0xc080ebe  jal         func_203AF8
label_20aad4:
    if (ctx->pc == 0x20AAD4u) {
        ctx->pc = 0x20AAD8u;
        goto label_20aad8;
    }
    ctx->pc = 0x20AAD0u;
    SET_GPR_U32(ctx, 31, 0x20AAD8u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20AAD0u, 0x20AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAD8u;
label_20aad8:
    // 0x20aad8: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20aadc:
    // 0x20aadc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20aae0:
    // 0x20aae0: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x20aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_20aae4:
    // 0x20aae4: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x20aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_20aae8:
    // 0x20aae8: 0xac730088  sw          $s3, 0x88($v1)
    ctx->pc = 0x20aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 19));
label_20aaec:
    // 0x20aaec: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x20aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20aaf0:
    // 0x20aaf0: 0xc067b9c  jal         func_19EE70
label_20aaf4:
    if (ctx->pc == 0x20AAF4u) {
        ctx->pc = 0x20AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAF0u;
        // 0x20aaf4: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAF8u;
        goto label_20aaf8;
    }
    ctx->pc = 0x20AAF0u;
    SET_GPR_U32(ctx, 31, 0x20AAF8u);
    ctx->pc = 0x20AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAF0u;
    // 0x20aaf4: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20AAF0u, 0x20AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAF8u;
label_20aaf8:
    // 0x20aaf8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20aafc:
    // 0x20aafc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20aafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20ab00:
    // 0x20ab00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20ab00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ab04:
    // 0x20ab04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ab08:
    // 0x20ab08: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20ab0c:
    // 0x20ab0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ab10:
    // 0x20ab10: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x20ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_20ab14:
    // 0x20ab14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ab14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ab18:
    // 0x20ab18: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20ab18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ab1c:
    // 0x20ab1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ab1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ab20:
    // 0x20ab20: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x20ab20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ab24:
    // 0x20ab24: 0xc07508c  jal         func_1D4230
label_20ab28:
    if (ctx->pc == 0x20AB28u) {
        ctx->pc = 0x20AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB24u;
        // 0x20ab28: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB2Cu;
        goto label_20ab2c;
    }
    ctx->pc = 0x20AB24u;
    SET_GPR_U32(ctx, 31, 0x20AB2Cu);
    ctx->pc = 0x20AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB24u;
    // 0x20ab28: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20AB24u, 0x20AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB2Cu;
label_20ab2c:
    // 0x20ab2c: 0xc067b9c  jal         func_19EE70
label_20ab30:
    if (ctx->pc == 0x20AB30u) {
        ctx->pc = 0x20AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB2Cu;
        // 0x20ab30: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB34u;
        goto label_20ab34;
    }
    ctx->pc = 0x20AB2Cu;
    SET_GPR_U32(ctx, 31, 0x20AB34u);
    ctx->pc = 0x20AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB2Cu;
    // 0x20ab30: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20AB2Cu, 0x20AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB34u;
label_20ab34:
    // 0x20ab34: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20ab38:
    // 0x20ab38: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20ab3c:
    // 0x20ab3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20ab3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ab40:
    // 0x20ab40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ab44:
    // 0x20ab44: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20ab48:
    // 0x20ab48: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x20ab48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ab4c:
    // 0x20ab4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ab4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ab50:
    // 0x20ab50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ab50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ab54:
    // 0x20ab54: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ab58:
    // 0x20ab58: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ab5c:
    // 0x20ab5c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20ab60:
    // 0x20ab60: 0xc07508c  jal         func_1D4230
label_20ab64:
    if (ctx->pc == 0x20AB64u) {
        ctx->pc = 0x20AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB60u;
        // 0x20ab64: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB68u;
        goto label_20ab68;
    }
    ctx->pc = 0x20AB60u;
    SET_GPR_U32(ctx, 31, 0x20AB68u);
    ctx->pc = 0x20AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB60u;
    // 0x20ab64: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20AB60u, 0x20AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20ab6c:
    // 0x20ab6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ab70:
    // 0x20ab70: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20ab74:
    // 0x20ab74: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20ab78:
    // 0x20ab78: 0x60f809  jalr        $v1
label_20ab7c:
    if (ctx->pc == 0x20AB7Cu) {
        ctx->pc = 0x20AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB78u;
        // 0x20ab7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB80u;
        goto label_20ab80;
    }
    ctx->pc = 0x20AB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AB80u);
        ctx->pc = 0x20AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB78u;
        // 0x20ab7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB78u, 0x20AB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AB80u;
label_20ab80:
    // 0x20ab80: 0xc080ebe  jal         func_203AF8
label_20ab84:
    if (ctx->pc == 0x20AB84u) {
        ctx->pc = 0x20AB88u;
        goto label_20ab88;
    }
    ctx->pc = 0x20AB80u;
    SET_GPR_U32(ctx, 31, 0x20AB88u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20AB80u, 0x20AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB88u;
label_20ab88:
    // 0x20ab88: 0xc080ec2  jal         func_203B08
label_20ab8c:
    if (ctx->pc == 0x20AB8Cu) {
        ctx->pc = 0x20AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB88u;
        // 0x20ab8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB90u;
        goto label_20ab90;
    }
    ctx->pc = 0x20AB88u;
    SET_GPR_U32(ctx, 31, 0x20AB90u);
    ctx->pc = 0x20AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB88u;
    // 0x20ab8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20AB88u, 0x20AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB90u;
label_20ab90:
    // 0x20ab90: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20ab90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20ab94:
    // 0x20ab94: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20ab98:
    // 0x20ab98: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20ab9c:
    // 0x20ab9c: 0x24a590e0  addiu       $a1, $a1, -0x6F20
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938848));
label_20aba0:
    // 0x20aba0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20aba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20aba4:
    // 0x20aba4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20aba8:
    // 0x20aba8: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x20aba8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20abac:
    // 0x20abac: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20abb0:
    // 0x20abb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20abb4:
    // 0x20abb4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20abb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20abb8:
    // 0x20abb8: 0x2409005e  addiu       $t1, $zero, 0x5E
    ctx->pc = 0x20abb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_20abbc:
    // 0x20abbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20abbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20abc0:
    // 0x20abc0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20abc4:
    // 0x20abc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20abc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20abc8:
    // 0x20abc8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20abcc:
    // 0x20abcc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20abd0:
    // 0x20abd0: 0x40f809  jalr        $v0
label_20abd4:
    if (ctx->pc == 0x20ABD4u) {
        ctx->pc = 0x20ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABD0u;
        // 0x20abd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABD8u;
        goto label_20abd8;
    }
    ctx->pc = 0x20ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20ABD8u);
        ctx->pc = 0x20ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABD0u;
        // 0x20abd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ABD0u, 0x20ABD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ABD8u;
label_20abd8:
    // 0x20abd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20abdc:
    if (ctx->pc == 0x20ABDCu) {
        ctx->pc = 0x20ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABD8u;
        // 0x20abdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABE0u;
        goto label_20abe0;
    }
    ctx->pc = 0x20ABD8u;
    {
        const bool branch_taken_0x20abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abd8) {
            ctx->pc = 0x20ABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ABD8u;
            // 0x20abdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABECu;
            goto label_20abec;
        }
    }
    ctx->pc = 0x20ABE0u;
label_20abe0:
    // 0x20abe0: 0xc073a9c  jal         func_1CEA70
label_20abe4:
    if (ctx->pc == 0x20ABE4u) {
        ctx->pc = 0x20ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABE0u;
        // 0x20abe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABE8u;
        goto label_20abe8;
    }
    ctx->pc = 0x20ABE0u;
    SET_GPR_U32(ctx, 31, 0x20ABE8u);
    ctx->pc = 0x20ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABE0u;
    // 0x20abe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20ABE0u, 0x20ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20abe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20abec:
    // 0x20abec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20abf0:
    // 0x20abf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20abf4:
    // 0x20abf4: 0xc073ad0  jal         func_1CEB40
label_20abf8:
    if (ctx->pc == 0x20ABF8u) {
        ctx->pc = 0x20ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABF4u;
        // 0x20abf8: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABFCu;
        goto label_20abfc;
    }
    ctx->pc = 0x20ABF4u;
    SET_GPR_U32(ctx, 31, 0x20ABFCu);
    ctx->pc = 0x20ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABF4u;
    // 0x20abf8: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20ABF4u, 0x20ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABFCu;
label_20abfc:
    // 0x20abfc: 0xc067b9c  jal         func_19EE70
label_20ac00:
    if (ctx->pc == 0x20AC00u) {
        ctx->pc = 0x20AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABFCu;
        // 0x20ac00: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC04u;
        goto label_20ac04;
    }
    ctx->pc = 0x20ABFCu;
    SET_GPR_U32(ctx, 31, 0x20AC04u);
    ctx->pc = 0x20AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABFCu;
    // 0x20ac00: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20ABFCu, 0x20AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC04u;
label_20ac04:
    // 0x20ac04: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_20ac08:
    // 0x20ac08: 0xc073b0a  jal         func_1CEC28
label_20ac0c:
    if (ctx->pc == 0x20AC0Cu) {
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC10u;
        goto label_20ac10;
    }
    ctx->pc = 0x20AC08u;
    SET_GPR_U32(ctx, 31, 0x20AC10u);
    ctx->pc = 0x20AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC08u;
    // 0x20ac0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20AC08u, 0x20AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC10u;
label_20ac10:
    // 0x20ac10: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x20ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_20ac14:
    // 0x20ac14: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x20ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_20ac18:
    // 0x20ac18: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20ac18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20ac1c:
    // 0x20ac1c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20ac1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20ac20:
    // 0x20ac20: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20ac20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20ac24:
    // 0x20ac24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20ac24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20ac28:
    // 0x20ac28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20ac28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20ac2c:
    // 0x20ac2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20ac2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ac30:
    // 0x20ac30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20ac30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ac34:
    // 0x20ac34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20ac38:
    // 0x20ac38: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x20ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20ac3c:
    // 0x20ac3c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ac40:
    // 0x20ac40: 0x3e00008  jr          $ra
label_20ac44:
    if (ctx->pc == 0x20AC44u) {
        ctx->pc = 0x20AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC40u;
        // 0x20ac44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC48u;
        goto label_fallthrough_0x20ac40;
    }
    ctx->pc = 0x20AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC40u;
        // 0x20ac44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20ac40:
    ctx->pc = 0x20AC48u;
}
