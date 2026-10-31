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

// Function: sub_0012A7D8
// Address: 0x12a7d8 - 0x12aae0
void sub_0012A7D8_0x12a7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A7D8_0x12a7d8");
#endif

    switch (ctx->pc) {
        case 0x12a7d8u: goto label_12a7d8;
        case 0x12a7dcu: goto label_12a7dc;
        case 0x12a7e0u: goto label_12a7e0;
        case 0x12a7e4u: goto label_12a7e4;
        case 0x12a7e8u: goto label_12a7e8;
        case 0x12a7ecu: goto label_12a7ec;
        case 0x12a7f0u: goto label_12a7f0;
        case 0x12a7f4u: goto label_12a7f4;
        case 0x12a7f8u: goto label_12a7f8;
        case 0x12a7fcu: goto label_12a7fc;
        case 0x12a800u: goto label_12a800;
        case 0x12a804u: goto label_12a804;
        case 0x12a808u: goto label_12a808;
        case 0x12a80cu: goto label_12a80c;
        case 0x12a810u: goto label_12a810;
        case 0x12a814u: goto label_12a814;
        case 0x12a818u: goto label_12a818;
        case 0x12a81cu: goto label_12a81c;
        case 0x12a820u: goto label_12a820;
        case 0x12a824u: goto label_12a824;
        case 0x12a828u: goto label_12a828;
        case 0x12a82cu: goto label_12a82c;
        case 0x12a830u: goto label_12a830;
        case 0x12a834u: goto label_12a834;
        case 0x12a838u: goto label_12a838;
        case 0x12a83cu: goto label_12a83c;
        case 0x12a840u: goto label_12a840;
        case 0x12a844u: goto label_12a844;
        case 0x12a848u: goto label_12a848;
        case 0x12a84cu: goto label_12a84c;
        case 0x12a850u: goto label_12a850;
        case 0x12a854u: goto label_12a854;
        case 0x12a858u: goto label_12a858;
        case 0x12a85cu: goto label_12a85c;
        case 0x12a860u: goto label_12a860;
        case 0x12a864u: goto label_12a864;
        case 0x12a868u: goto label_12a868;
        case 0x12a86cu: goto label_12a86c;
        case 0x12a870u: goto label_12a870;
        case 0x12a874u: goto label_12a874;
        case 0x12a878u: goto label_12a878;
        case 0x12a87cu: goto label_12a87c;
        case 0x12a880u: goto label_12a880;
        case 0x12a884u: goto label_12a884;
        case 0x12a888u: goto label_12a888;
        case 0x12a88cu: goto label_12a88c;
        case 0x12a890u: goto label_12a890;
        case 0x12a894u: goto label_12a894;
        case 0x12a898u: goto label_12a898;
        case 0x12a89cu: goto label_12a89c;
        case 0x12a8a0u: goto label_12a8a0;
        case 0x12a8a4u: goto label_12a8a4;
        case 0x12a8a8u: goto label_12a8a8;
        case 0x12a8acu: goto label_12a8ac;
        case 0x12a8b0u: goto label_12a8b0;
        case 0x12a8b4u: goto label_12a8b4;
        case 0x12a8b8u: goto label_12a8b8;
        case 0x12a8bcu: goto label_12a8bc;
        case 0x12a8c0u: goto label_12a8c0;
        case 0x12a8c4u: goto label_12a8c4;
        case 0x12a8c8u: goto label_12a8c8;
        case 0x12a8ccu: goto label_12a8cc;
        case 0x12a8d0u: goto label_12a8d0;
        case 0x12a8d4u: goto label_12a8d4;
        case 0x12a8d8u: goto label_12a8d8;
        case 0x12a8dcu: goto label_12a8dc;
        case 0x12a8e0u: goto label_12a8e0;
        case 0x12a8e4u: goto label_12a8e4;
        case 0x12a8e8u: goto label_12a8e8;
        case 0x12a8ecu: goto label_12a8ec;
        case 0x12a8f0u: goto label_12a8f0;
        case 0x12a8f4u: goto label_12a8f4;
        case 0x12a8f8u: goto label_12a8f8;
        case 0x12a8fcu: goto label_12a8fc;
        case 0x12a900u: goto label_12a900;
        case 0x12a904u: goto label_12a904;
        case 0x12a908u: goto label_12a908;
        case 0x12a90cu: goto label_12a90c;
        case 0x12a910u: goto label_12a910;
        case 0x12a914u: goto label_12a914;
        case 0x12a918u: goto label_12a918;
        case 0x12a91cu: goto label_12a91c;
        case 0x12a920u: goto label_12a920;
        case 0x12a924u: goto label_12a924;
        case 0x12a928u: goto label_12a928;
        case 0x12a92cu: goto label_12a92c;
        case 0x12a930u: goto label_12a930;
        case 0x12a934u: goto label_12a934;
        case 0x12a938u: goto label_12a938;
        case 0x12a93cu: goto label_12a93c;
        case 0x12a940u: goto label_12a940;
        case 0x12a944u: goto label_12a944;
        case 0x12a948u: goto label_12a948;
        case 0x12a94cu: goto label_12a94c;
        case 0x12a950u: goto label_12a950;
        case 0x12a954u: goto label_12a954;
        case 0x12a958u: goto label_12a958;
        case 0x12a95cu: goto label_12a95c;
        case 0x12a960u: goto label_12a960;
        case 0x12a964u: goto label_12a964;
        case 0x12a968u: goto label_12a968;
        case 0x12a96cu: goto label_12a96c;
        case 0x12a970u: goto label_12a970;
        case 0x12a974u: goto label_12a974;
        case 0x12a978u: goto label_12a978;
        case 0x12a97cu: goto label_12a97c;
        case 0x12a980u: goto label_12a980;
        case 0x12a984u: goto label_12a984;
        case 0x12a988u: goto label_12a988;
        case 0x12a98cu: goto label_12a98c;
        case 0x12a990u: goto label_12a990;
        case 0x12a994u: goto label_12a994;
        case 0x12a998u: goto label_12a998;
        case 0x12a99cu: goto label_12a99c;
        case 0x12a9a0u: goto label_12a9a0;
        case 0x12a9a4u: goto label_12a9a4;
        case 0x12a9a8u: goto label_12a9a8;
        case 0x12a9acu: goto label_12a9ac;
        case 0x12a9b0u: goto label_12a9b0;
        case 0x12a9b4u: goto label_12a9b4;
        case 0x12a9b8u: goto label_12a9b8;
        case 0x12a9bcu: goto label_12a9bc;
        case 0x12a9c0u: goto label_12a9c0;
        case 0x12a9c4u: goto label_12a9c4;
        case 0x12a9c8u: goto label_12a9c8;
        case 0x12a9ccu: goto label_12a9cc;
        case 0x12a9d0u: goto label_12a9d0;
        case 0x12a9d4u: goto label_12a9d4;
        case 0x12a9d8u: goto label_12a9d8;
        case 0x12a9dcu: goto label_12a9dc;
        case 0x12a9e0u: goto label_12a9e0;
        case 0x12a9e4u: goto label_12a9e4;
        case 0x12a9e8u: goto label_12a9e8;
        case 0x12a9ecu: goto label_12a9ec;
        case 0x12a9f0u: goto label_12a9f0;
        case 0x12a9f4u: goto label_12a9f4;
        case 0x12a9f8u: goto label_12a9f8;
        case 0x12a9fcu: goto label_12a9fc;
        case 0x12aa00u: goto label_12aa00;
        case 0x12aa04u: goto label_12aa04;
        case 0x12aa08u: goto label_12aa08;
        case 0x12aa0cu: goto label_12aa0c;
        case 0x12aa10u: goto label_12aa10;
        case 0x12aa14u: goto label_12aa14;
        case 0x12aa18u: goto label_12aa18;
        case 0x12aa1cu: goto label_12aa1c;
        case 0x12aa20u: goto label_12aa20;
        case 0x12aa24u: goto label_12aa24;
        case 0x12aa28u: goto label_12aa28;
        case 0x12aa2cu: goto label_12aa2c;
        case 0x12aa30u: goto label_12aa30;
        case 0x12aa34u: goto label_12aa34;
        case 0x12aa38u: goto label_12aa38;
        case 0x12aa3cu: goto label_12aa3c;
        case 0x12aa40u: goto label_12aa40;
        case 0x12aa44u: goto label_12aa44;
        case 0x12aa48u: goto label_12aa48;
        case 0x12aa4cu: goto label_12aa4c;
        case 0x12aa50u: goto label_12aa50;
        case 0x12aa54u: goto label_12aa54;
        case 0x12aa58u: goto label_12aa58;
        case 0x12aa5cu: goto label_12aa5c;
        case 0x12aa60u: goto label_12aa60;
        case 0x12aa64u: goto label_12aa64;
        case 0x12aa68u: goto label_12aa68;
        case 0x12aa6cu: goto label_12aa6c;
        case 0x12aa70u: goto label_12aa70;
        case 0x12aa74u: goto label_12aa74;
        case 0x12aa78u: goto label_12aa78;
        case 0x12aa7cu: goto label_12aa7c;
        case 0x12aa80u: goto label_12aa80;
        case 0x12aa84u: goto label_12aa84;
        case 0x12aa88u: goto label_12aa88;
        case 0x12aa8cu: goto label_12aa8c;
        case 0x12aa90u: goto label_12aa90;
        case 0x12aa94u: goto label_12aa94;
        case 0x12aa98u: goto label_12aa98;
        case 0x12aa9cu: goto label_12aa9c;
        case 0x12aaa0u: goto label_12aaa0;
        case 0x12aaa4u: goto label_12aaa4;
        case 0x12aaa8u: goto label_12aaa8;
        case 0x12aaacu: goto label_12aaac;
        case 0x12aab0u: goto label_12aab0;
        case 0x12aab4u: goto label_12aab4;
        case 0x12aab8u: goto label_12aab8;
        case 0x12aabcu: goto label_12aabc;
        case 0x12aac0u: goto label_12aac0;
        case 0x12aac4u: goto label_12aac4;
        case 0x12aac8u: goto label_12aac8;
        case 0x12aaccu: goto label_12aacc;
        case 0x12aad0u: goto label_12aad0;
        case 0x12aad4u: goto label_12aad4;
        case 0x12aad8u: goto label_12aad8;
        case 0x12aadcu: goto label_12aadc;
        default: break;
    }

    ctx->pc = 0x12a7d8u;

label_12a7d8:
    // 0x12a7d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x12a7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_12a7dc:
    // 0x12a7dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_12a7e0:
    // 0x12a7e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_12a7e4:
    // 0x12a7e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12a7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12a7e8:
    // 0x12a7e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_12a7ec:
    // 0x12a7ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12a7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12a7f0:
    // 0x12a7f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_12a7f4:
    // 0x12a7f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12a7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a7f8:
    // 0x12a7f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_12a7fc:
    // 0x12a7fc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12a7fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a800:
    // 0x12a800: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x12a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_12a804:
    // 0x12a804: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x12a804u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12a808:
    // 0x12a808: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x12a808u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_12a80c:
    // 0x12a80c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x12a80cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12a810:
    // 0x12a810: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x12a810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_12a814:
    // 0x12a814: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x12a814u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_12a818:
    // 0x12a818: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_12a81c:
    // 0x12a81c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_12a820:
    // 0x12a820: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12a824:
    // 0x12a824: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x12a824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_12a828:
    // 0x12a828: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12a82c:
    // 0x12a82c: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_12a830:
    if (ctx->pc == 0x12A830u) {
        ctx->pc = 0x12A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A82Cu;
        // 0x12a830: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A834u;
        goto label_12a834;
    }
    ctx->pc = 0x12A82Cu;
    {
        const bool branch_taken_0x12a82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A82Cu;
        // 0x12a830: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a82c) {
            ctx->pc = 0x12AAA8u;
            goto label_12aaa8;
        }
    }
    ctx->pc = 0x12A834u;
label_12a834:
    // 0x12a834: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x12a834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_12a838:
    // 0x12a838: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x12a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a83c:
    // 0x12a83c: 0xc44191cc  lwc1        $f1, -0x6E34($v0)
    ctx->pc = 0x12a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a840:
    // 0x12a840: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12a840u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12a844:
    // 0x12a844: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a848:
    // 0x12a848: 0x0  nop
    ctx->pc = 0x12a848u;
    // NOP
label_12a84c:
    // 0x12a84c: 0x45000097  bc1f        . + 4 + (0x97 << 2)
label_12a850:
    if (ctx->pc == 0x12A850u) {
        ctx->pc = 0x12A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A84Cu;
        // 0x12a850: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A854u;
        goto label_12a854;
    }
    ctx->pc = 0x12A84Cu;
    {
        const bool branch_taken_0x12a84c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A84Cu;
        // 0x12a850: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a84c) {
            ctx->pc = 0x12AAACu;
            goto label_12aaac;
        }
    }
    ctx->pc = 0x12A854u;
label_12a854:
    // 0x12a854: 0x92620453  lbu         $v0, 0x453($s3)
    ctx->pc = 0x12a854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1107)));
label_12a858:
    // 0x12a858: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
label_12a85c:
    if (ctx->pc == 0x12A85Cu) {
        ctx->pc = 0x12A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A858u;
        // 0x12a85c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A860u;
        goto label_12a860;
    }
    ctx->pc = 0x12A858u;
    {
        const bool branch_taken_0x12a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a858) {
            ctx->pc = 0x12A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A858u;
            // 0x12a85c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAB0u;
            goto label_12aab0;
        }
    }
    ctx->pc = 0x12A860u;
label_12a860:
    // 0x12a860: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x12a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a864:
    // 0x12a864: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12a868:
    // 0x12a868: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12a868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12a86c:
    // 0x12a86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a870:
    // 0x12a870: 0x0  nop
    ctx->pc = 0x12a870u;
    // NOP
label_12a874:
    // 0x12a874: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a878:
    // 0x12a878: 0x0  nop
    ctx->pc = 0x12a878u;
    // NOP
label_12a87c:
    // 0x12a87c: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_12a880:
    if (ctx->pc == 0x12A880u) {
        ctx->pc = 0x12A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A87Cu;
        // 0x12a880: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A884u;
        goto label_12a884;
    }
    ctx->pc = 0x12A87Cu;
    {
        const bool branch_taken_0x12a87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A87Cu;
        // 0x12a880: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a87c) {
            ctx->pc = 0x12AAA8u;
            goto label_12aaa8;
        }
    }
    ctx->pc = 0x12A884u;
label_12a884:
    // 0x12a884: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x12a884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12a888:
    // 0x12a888: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12a888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12a88c:
    // 0x12a88c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a890:
    // 0x12a890: 0x7e620220  sq          $v0, 0x220($s3)
    ctx->pc = 0x12a890u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 2));
label_12a894:
    // 0x12a894: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12a894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a898:
    // 0x12a898: 0xc136b24  jal         func_4DAC90
label_12a89c:
    if (ctx->pc == 0x12A89Cu) {
        ctx->pc = 0x12A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A898u;
        // 0x12a89c: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8A0u;
        goto label_12a8a0;
    }
    ctx->pc = 0x12A898u;
    SET_GPR_U32(ctx, 31, 0x12A8A0u);
    ctx->pc = 0x12A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A898u;
    // 0x12a89c: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12A898u, 0x12A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8A0u;
label_12a8a0:
    // 0x12a8a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12a8a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12a8a4:
    // 0x12a8a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12a8a8:
    // 0x12a8a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a8ac:
    // 0x12a8ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12a8b0:
    // 0x12a8b0: 0xc136b18  jal         func_4DAC60
label_12a8b4:
    if (ctx->pc == 0x12A8B4u) {
        ctx->pc = 0x12A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8B0u;
        // 0x12a8b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8B8u;
        goto label_12a8b8;
    }
    ctx->pc = 0x12A8B0u;
    SET_GPR_U32(ctx, 31, 0x12A8B8u);
    ctx->pc = 0x12A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A8B0u;
    // 0x12a8b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12A8B0u, 0x12A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8B8u;
label_12a8b8:
    // 0x12a8b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12a8b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12a8bc:
    // 0x12a8bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12a8c0:
    // 0x12a8c0: 0x7e620230  sq          $v0, 0x230($s3)
    ctx->pc = 0x12a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 560), GPR_VEC(ctx, 2));
label_12a8c4:
    // 0x12a8c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12a8c8:
    // 0x12a8c8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x12a8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_12a8cc:
    // 0x12a8cc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x12a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_12a8d0:
    // 0x12a8d0: 0x40f809  jalr        $v0
label_12a8d4:
    if (ctx->pc == 0x12A8D4u) {
        ctx->pc = 0x12A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8D0u;
        // 0x12a8d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8D8u;
        goto label_12a8d8;
    }
    ctx->pc = 0x12A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A8D8u);
        ctx->pc = 0x12A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8D0u;
        // 0x12a8d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8D0u, 0x12A8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A8D8u;
label_12a8d8:
    // 0x12a8d8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x12a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a8dc:
    // 0x12a8dc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12a8dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_12a8e0:
    // 0x12a8e0: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x12a8e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12a8e4:
    // 0x12a8e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_12a8e8:
    if (ctx->pc == 0x12A8E8u) {
        ctx->pc = 0x12A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8E4u;
        // 0x12a8e8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8ECu;
        goto label_12a8ec;
    }
    ctx->pc = 0x12A8E4u;
    {
        const bool branch_taken_0x12a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8E4u;
        // 0x12a8e8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8e4) {
            ctx->pc = 0x12A8F8u;
            goto label_12a8f8;
        }
    }
    ctx->pc = 0x12A8ECu;
label_12a8ec:
    // 0x12a8ec: 0x0  nop
    ctx->pc = 0x12a8ecu;
    // NOP
label_12a8f0:
    // 0x12a8f0: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_12a8f4:
    if (ctx->pc == 0x12A8F4u) {
        ctx->pc = 0x12A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F0u;
        // 0x12a8f4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8F8u;
        goto label_12a8f8;
    }
    ctx->pc = 0x12A8F0u;
    {
        const bool branch_taken_0x12a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a8f0) {
            ctx->pc = 0x12A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8F0u;
            // 0x12a8f4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A9C8u;
            goto label_12a9c8;
        }
    }
    ctx->pc = 0x12A8F8u;
label_12a8f8:
    // 0x12a8f8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x12a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_12a8fc:
    // 0x12a8fc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x12a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_12a900:
    // 0x12a900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a904:
    // 0x12a904: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x12a904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_12a908:
    // 0x12a908: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x12a908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a90c:
    // 0x12a90c: 0x0  nop
    ctx->pc = 0x12a90cu;
    // NOP
label_12a910:
    // 0x12a910: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_12a914:
    if (ctx->pc == 0x12A914u) {
        ctx->pc = 0x12A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A910u;
        // 0x12a914: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A918u;
        goto label_12a918;
    }
    ctx->pc = 0x12A910u;
    {
        const bool branch_taken_0x12a910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A910u;
        // 0x12a914: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a910) {
            ctx->pc = 0x12A9B8u;
            goto label_12a9b8;
        }
    }
    ctx->pc = 0x12A918u;
label_12a918:
    // 0x12a918: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12a918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a91c:
    // 0x12a91c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a920:
    // 0x12a920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a924:
    // 0x12a924: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a928:
    // 0x12a928: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x12a928u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_12a92c:
    // 0x12a92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12a92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a930:
    // 0x12a930: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x12a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_12a934:
    // 0x12a934: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12a934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12a938:
    // 0x12a938: 0xc0d4336  jal         func_350CD8
label_12a93c:
    if (ctx->pc == 0x12A93Cu) {
        ctx->pc = 0x12A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A938u;
        // 0x12a93c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A940u;
        goto label_12a940;
    }
    ctx->pc = 0x12A938u;
    SET_GPR_U32(ctx, 31, 0x12A940u);
    ctx->pc = 0x12A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A938u;
    // 0x12a93c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12A938u, 0x12A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A940u;
label_12a940:
    // 0x12a940: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12a944:
    // 0x12a944: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_12a948:
    if (ctx->pc == 0x12A948u) {
        ctx->pc = 0x12A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A944u;
        // 0x12a948: 0x297102b  sltu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A94Cu;
        goto label_12a94c;
    }
    ctx->pc = 0x12A944u;
    {
        const bool branch_taken_0x12a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A944u;
        // 0x12a948: 0x297102b  sltu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a944) {
            ctx->pc = 0x12A8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a8f0;
        }
    }
    ctx->pc = 0x12A94Cu;
label_12a94c:
    // 0x12a94c: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x12a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12a950:
    // 0x12a950: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12a954:
    // 0x12a954: 0xc136b24  jal         func_4DAC90
label_12a958:
    if (ctx->pc == 0x12A958u) {
        ctx->pc = 0x12A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A954u;
        // 0x12a958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A95Cu;
        goto label_12a95c;
    }
    ctx->pc = 0x12A954u;
    SET_GPR_U32(ctx, 31, 0x12A95Cu);
    ctx->pc = 0x12A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A954u;
    // 0x12a958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12A954u, 0x12A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A95Cu;
label_12a95c:
    // 0x12a95c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12a95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12a960:
    // 0x12a960: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12a960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12a964:
    // 0x12a964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a968:
    // 0x12a968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a96c:
    // 0x12a96c: 0xc136b18  jal         func_4DAC60
label_12a970:
    if (ctx->pc == 0x12A970u) {
        ctx->pc = 0x12A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A96Cu;
        // 0x12a970: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A974u;
        goto label_12a974;
    }
    ctx->pc = 0x12A96Cu;
    SET_GPR_U32(ctx, 31, 0x12A974u);
    ctx->pc = 0x12A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A96Cu;
    // 0x12a970: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12A96Cu, 0x12A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A974u;
label_12a974:
    // 0x12a974: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a978:
    // 0x12a978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a97c:
    // 0x12a97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a980:
    // 0x12a980: 0xc136b24  jal         func_4DAC90
label_12a984:
    if (ctx->pc == 0x12A984u) {
        ctx->pc = 0x12A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A980u;
        // 0x12a984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A988u;
        goto label_12a988;
    }
    ctx->pc = 0x12A980u;
    SET_GPR_U32(ctx, 31, 0x12A988u);
    ctx->pc = 0x12A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A980u;
    // 0x12a984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12A980u, 0x12A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A988u;
label_12a988:
    // 0x12a988: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x12a988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_12a98c:
    // 0x12a98c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a990:
    // 0x12a990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a994:
    // 0x12a994: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a998:
    // 0x12a998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12a998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a99c:
    // 0x12a99c: 0xc0d4336  jal         func_350CD8
label_12a9a0:
    if (ctx->pc == 0x12A9A0u) {
        ctx->pc = 0x12A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A99Cu;
        // 0x12a9a0: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9A4u;
        goto label_12a9a4;
    }
    ctx->pc = 0x12A99Cu;
    SET_GPR_U32(ctx, 31, 0x12A9A4u);
    ctx->pc = 0x12A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A99Cu;
    // 0x12a9a0: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12A99Cu, 0x12A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9A4u;
label_12a9a4:
    // 0x12a9a4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a9a8:
    // 0x12a9a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a9ac:
    // 0x12a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9b0:
    // 0x12a9b0: 0xc136b24  jal         func_4DAC90
label_12a9b4:
    if (ctx->pc == 0x12A9B4u) {
        ctx->pc = 0x12A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9B0u;
        // 0x12a9b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9B8u;
        goto label_12a9b8;
    }
    ctx->pc = 0x12A9B0u;
    SET_GPR_U32(ctx, 31, 0x12A9B8u);
    ctx->pc = 0x12A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9B0u;
    // 0x12a9b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12A9B0u, 0x12A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9B8u;
label_12a9b8:
    // 0x12a9b8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12a9bc:
    // 0x12a9bc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_12a9c0:
    if (ctx->pc == 0x12A9C0u) {
        ctx->pc = 0x12A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9BCu;
        // 0x12a9c0: 0x297102b  sltu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9C4u;
        goto label_12a9c4;
    }
    ctx->pc = 0x12A9BCu;
    {
        const bool branch_taken_0x12a9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9BCu;
        // 0x12a9c0: 0x297102b  sltu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9bc) {
            ctx->pc = 0x12A8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a8f0;
        }
    }
    ctx->pc = 0x12A9C4u;
label_12a9c4:
    // 0x12a9c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12a9c8:
    // 0x12a9c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_12a9cc:
    if (ctx->pc == 0x12A9CCu) {
        ctx->pc = 0x12A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9C8u;
        // 0x12a9cc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9D0u;
        goto label_12a9d0;
    }
    ctx->pc = 0x12A9C8u;
    {
        const bool branch_taken_0x12a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9C8u;
        // 0x12a9cc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9c8) {
            ctx->pc = 0x12AA78u;
            goto label_12aa78;
        }
    }
    ctx->pc = 0x12A9D0u;
label_12a9d0:
    // 0x12a9d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a9d4:
    // 0x12a9d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a9d8:
    // 0x12a9d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a9dc:
    // 0x12a9dc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x12a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_12a9e0:
    // 0x12a9e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12a9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a9e4:
    // 0x12a9e4: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x12a9e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_12a9e8:
    // 0x12a9e8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12a9ec:
    // 0x12a9ec: 0xc0d4336  jal         func_350CD8
label_12a9f0:
    if (ctx->pc == 0x12A9F0u) {
        ctx->pc = 0x12A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9ECu;
        // 0x12a9f0: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9F4u;
        goto label_12a9f4;
    }
    ctx->pc = 0x12A9ECu;
    SET_GPR_U32(ctx, 31, 0x12A9F4u);
    ctx->pc = 0x12A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9ECu;
    // 0x12a9f0: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12A9ECu, 0x12A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9F4u;
label_12a9f4:
    // 0x12a9f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12a9f8:
    // 0x12a9f8: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_12a9fc:
    if (ctx->pc == 0x12A9FCu) {
        ctx->pc = 0x12A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9F8u;
        // 0x12a9fc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA00u;
        goto label_12aa00;
    }
    ctx->pc = 0x12A9F8u;
    {
        const bool branch_taken_0x12a9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9f8) {
            ctx->pc = 0x12A9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A9F8u;
            // 0x12a9fc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAACu;
            goto label_12aaac;
        }
    }
    ctx->pc = 0x12AA00u;
label_12aa00:
    // 0x12aa00: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x12aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12aa04:
    // 0x12aa04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12aa08:
    // 0x12aa08: 0xc136b24  jal         func_4DAC90
label_12aa0c:
    if (ctx->pc == 0x12AA0Cu) {
        ctx->pc = 0x12AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA08u;
        // 0x12aa0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA10u;
        goto label_12aa10;
    }
    ctx->pc = 0x12AA08u;
    SET_GPR_U32(ctx, 31, 0x12AA10u);
    ctx->pc = 0x12AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA08u;
    // 0x12aa0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12AA08u, 0x12AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA10u;
label_12aa10:
    // 0x12aa10: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12aa10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12aa14:
    // 0x12aa14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12aa18:
    // 0x12aa18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12aa1c:
    // 0x12aa1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12aa20:
    // 0x12aa20: 0xc136b18  jal         func_4DAC60
label_12aa24:
    if (ctx->pc == 0x12AA24u) {
        ctx->pc = 0x12AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA20u;
        // 0x12aa24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA28u;
        goto label_12aa28;
    }
    ctx->pc = 0x12AA20u;
    SET_GPR_U32(ctx, 31, 0x12AA28u);
    ctx->pc = 0x12AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA20u;
    // 0x12aa24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12AA20u, 0x12AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA28u;
label_12aa28:
    // 0x12aa28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12aa2c:
    // 0x12aa2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12aa2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12aa30:
    // 0x12aa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa34:
    // 0x12aa34: 0xc136b24  jal         func_4DAC90
label_12aa38:
    if (ctx->pc == 0x12AA38u) {
        ctx->pc = 0x12AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA34u;
        // 0x12aa38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA3Cu;
        goto label_12aa3c;
    }
    ctx->pc = 0x12AA34u;
    SET_GPR_U32(ctx, 31, 0x12AA3Cu);
    ctx->pc = 0x12AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA34u;
    // 0x12aa38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12AA34u, 0x12AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA3Cu;
label_12aa3c:
    // 0x12aa3c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x12aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_12aa40:
    // 0x12aa40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12aa44:
    // 0x12aa44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12aa48:
    // 0x12aa48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12aa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12aa4c:
    // 0x12aa4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12aa4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12aa50:
    // 0x12aa50: 0xc0d4336  jal         func_350CD8
label_12aa54:
    if (ctx->pc == 0x12AA54u) {
        ctx->pc = 0x12AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA50u;
        // 0x12aa54: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA58u;
        goto label_12aa58;
    }
    ctx->pc = 0x12AA50u;
    SET_GPR_U32(ctx, 31, 0x12AA58u);
    ctx->pc = 0x12AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA50u;
    // 0x12aa54: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12AA50u, 0x12AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA58u;
label_12aa58:
    // 0x12aa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa5c:
    // 0x12aa5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12aa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12aa60:
    // 0x12aa60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12aa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12aa64:
    // 0x12aa64: 0xc136b24  jal         func_4DAC90
label_12aa68:
    if (ctx->pc == 0x12AA68u) {
        ctx->pc = 0x12AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA64u;
        // 0x12aa68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA6Cu;
        goto label_12aa6c;
    }
    ctx->pc = 0x12AA64u;
    SET_GPR_U32(ctx, 31, 0x12AA6Cu);
    ctx->pc = 0x12AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA64u;
    // 0x12aa68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12AA64u, 0x12AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA6Cu;
label_12aa6c:
    // 0x12aa6c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12aa70:
    // 0x12aa70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_12aa74:
    if (ctx->pc == 0x12AA74u) {
        ctx->pc = 0x12AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA70u;
        // 0x12aa74: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA78u;
        goto label_12aa78;
    }
    ctx->pc = 0x12AA70u;
    {
        const bool branch_taken_0x12aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA70u;
        // 0x12aa74: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa70) {
            ctx->pc = 0x12AAACu;
            goto label_12aaac;
        }
    }
    ctx->pc = 0x12AA78u;
label_12aa78:
    // 0x12aa78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12aa7c:
    // 0x12aa7c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x12aa7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_12aa80:
    // 0x12aa80: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x12aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_12aa84:
    // 0x12aa84: 0x60f809  jalr        $v1
label_12aa88:
    if (ctx->pc == 0x12AA88u) {
        ctx->pc = 0x12AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA84u;
        // 0x12aa88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA8Cu;
        goto label_12aa8c;
    }
    ctx->pc = 0x12AA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12AA8Cu);
        ctx->pc = 0x12AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA84u;
        // 0x12aa88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AA84u, 0x12AA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AA8Cu;
label_12aa8c:
    // 0x12aa8c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x12aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12aa90:
    // 0x12aa90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12aa94:
    // 0x12aa94: 0xc6620378  lwc1        $f2, 0x378($s3)
    ctx->pc = 0x12aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12aa98:
    // 0x12aa98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12aa98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12aa9c:
    // 0x12aa9c: 0xa2620453  sb          $v0, 0x453($s3)
    ctx->pc = 0x12aa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1107), (uint8_t)GPR_U32(ctx, 2));
label_12aaa0:
    // 0x12aaa0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x12aaa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_12aaa4:
    // 0x12aaa4: 0xe6610324  swc1        $f1, 0x324($s3)
    ctx->pc = 0x12aaa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 804), bits); }
label_12aaa8:
    // 0x12aaa8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12aaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_12aaac:
    // 0x12aaac: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12aaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12aab0:
    // 0x12aab0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12aab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12aab4:
    // 0x12aab4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12aab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12aab8:
    // 0x12aab8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12aab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12aabc:
    // 0x12aabc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12aabcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12aac0:
    // 0x12aac0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12aac4:
    // 0x12aac4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x12aac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12aac8:
    // 0x12aac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12aacc:
    // 0x12aacc: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x12aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12aad0:
    // 0x12aad0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x12aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12aad4:
    // 0x12aad4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x12aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12aad8:
    // 0x12aad8: 0x3e00008  jr          $ra
label_12aadc:
    if (ctx->pc == 0x12AADCu) {
        ctx->pc = 0x12AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAD8u;
        // 0x12aadc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAE0u;
        goto label_fallthrough_0x12aad8;
    }
    ctx->pc = 0x12AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAD8u;
        // 0x12aadc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12aad8:
    ctx->pc = 0x12AAE0u;
}
