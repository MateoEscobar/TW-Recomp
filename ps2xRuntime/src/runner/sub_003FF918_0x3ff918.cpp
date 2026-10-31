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

// Function: sub_003FF918
// Address: 0x3ff918 - 0x3ffb48
void sub_003FF918_0x3ff918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF918_0x3ff918");
#endif

    switch (ctx->pc) {
        case 0x3ff918u: goto label_3ff918;
        case 0x3ff91cu: goto label_3ff91c;
        case 0x3ff920u: goto label_3ff920;
        case 0x3ff924u: goto label_3ff924;
        case 0x3ff928u: goto label_3ff928;
        case 0x3ff92cu: goto label_3ff92c;
        case 0x3ff930u: goto label_3ff930;
        case 0x3ff934u: goto label_3ff934;
        case 0x3ff938u: goto label_3ff938;
        case 0x3ff93cu: goto label_3ff93c;
        case 0x3ff940u: goto label_3ff940;
        case 0x3ff944u: goto label_3ff944;
        case 0x3ff948u: goto label_3ff948;
        case 0x3ff94cu: goto label_3ff94c;
        case 0x3ff950u: goto label_3ff950;
        case 0x3ff954u: goto label_3ff954;
        case 0x3ff958u: goto label_3ff958;
        case 0x3ff95cu: goto label_3ff95c;
        case 0x3ff960u: goto label_3ff960;
        case 0x3ff964u: goto label_3ff964;
        case 0x3ff968u: goto label_3ff968;
        case 0x3ff96cu: goto label_3ff96c;
        case 0x3ff970u: goto label_3ff970;
        case 0x3ff974u: goto label_3ff974;
        case 0x3ff978u: goto label_3ff978;
        case 0x3ff97cu: goto label_3ff97c;
        case 0x3ff980u: goto label_3ff980;
        case 0x3ff984u: goto label_3ff984;
        case 0x3ff988u: goto label_3ff988;
        case 0x3ff98cu: goto label_3ff98c;
        case 0x3ff990u: goto label_3ff990;
        case 0x3ff994u: goto label_3ff994;
        case 0x3ff998u: goto label_3ff998;
        case 0x3ff99cu: goto label_3ff99c;
        case 0x3ff9a0u: goto label_3ff9a0;
        case 0x3ff9a4u: goto label_3ff9a4;
        case 0x3ff9a8u: goto label_3ff9a8;
        case 0x3ff9acu: goto label_3ff9ac;
        case 0x3ff9b0u: goto label_3ff9b0;
        case 0x3ff9b4u: goto label_3ff9b4;
        case 0x3ff9b8u: goto label_3ff9b8;
        case 0x3ff9bcu: goto label_3ff9bc;
        case 0x3ff9c0u: goto label_3ff9c0;
        case 0x3ff9c4u: goto label_3ff9c4;
        case 0x3ff9c8u: goto label_3ff9c8;
        case 0x3ff9ccu: goto label_3ff9cc;
        case 0x3ff9d0u: goto label_3ff9d0;
        case 0x3ff9d4u: goto label_3ff9d4;
        case 0x3ff9d8u: goto label_3ff9d8;
        case 0x3ff9dcu: goto label_3ff9dc;
        case 0x3ff9e0u: goto label_3ff9e0;
        case 0x3ff9e4u: goto label_3ff9e4;
        case 0x3ff9e8u: goto label_3ff9e8;
        case 0x3ff9ecu: goto label_3ff9ec;
        case 0x3ff9f0u: goto label_3ff9f0;
        case 0x3ff9f4u: goto label_3ff9f4;
        case 0x3ff9f8u: goto label_3ff9f8;
        case 0x3ff9fcu: goto label_3ff9fc;
        case 0x3ffa00u: goto label_3ffa00;
        case 0x3ffa04u: goto label_3ffa04;
        case 0x3ffa08u: goto label_3ffa08;
        case 0x3ffa0cu: goto label_3ffa0c;
        case 0x3ffa10u: goto label_3ffa10;
        case 0x3ffa14u: goto label_3ffa14;
        case 0x3ffa18u: goto label_3ffa18;
        case 0x3ffa1cu: goto label_3ffa1c;
        case 0x3ffa20u: goto label_3ffa20;
        case 0x3ffa24u: goto label_3ffa24;
        case 0x3ffa28u: goto label_3ffa28;
        case 0x3ffa2cu: goto label_3ffa2c;
        case 0x3ffa30u: goto label_3ffa30;
        case 0x3ffa34u: goto label_3ffa34;
        case 0x3ffa38u: goto label_3ffa38;
        case 0x3ffa3cu: goto label_3ffa3c;
        case 0x3ffa40u: goto label_3ffa40;
        case 0x3ffa44u: goto label_3ffa44;
        case 0x3ffa48u: goto label_3ffa48;
        case 0x3ffa4cu: goto label_3ffa4c;
        case 0x3ffa50u: goto label_3ffa50;
        case 0x3ffa54u: goto label_3ffa54;
        case 0x3ffa58u: goto label_3ffa58;
        case 0x3ffa5cu: goto label_3ffa5c;
        case 0x3ffa60u: goto label_3ffa60;
        case 0x3ffa64u: goto label_3ffa64;
        case 0x3ffa68u: goto label_3ffa68;
        case 0x3ffa6cu: goto label_3ffa6c;
        case 0x3ffa70u: goto label_3ffa70;
        case 0x3ffa74u: goto label_3ffa74;
        case 0x3ffa78u: goto label_3ffa78;
        case 0x3ffa7cu: goto label_3ffa7c;
        case 0x3ffa80u: goto label_3ffa80;
        case 0x3ffa84u: goto label_3ffa84;
        case 0x3ffa88u: goto label_3ffa88;
        case 0x3ffa8cu: goto label_3ffa8c;
        case 0x3ffa90u: goto label_3ffa90;
        case 0x3ffa94u: goto label_3ffa94;
        case 0x3ffa98u: goto label_3ffa98;
        case 0x3ffa9cu: goto label_3ffa9c;
        case 0x3ffaa0u: goto label_3ffaa0;
        case 0x3ffaa4u: goto label_3ffaa4;
        case 0x3ffaa8u: goto label_3ffaa8;
        case 0x3ffaacu: goto label_3ffaac;
        case 0x3ffab0u: goto label_3ffab0;
        case 0x3ffab4u: goto label_3ffab4;
        case 0x3ffab8u: goto label_3ffab8;
        case 0x3ffabcu: goto label_3ffabc;
        case 0x3ffac0u: goto label_3ffac0;
        case 0x3ffac4u: goto label_3ffac4;
        case 0x3ffac8u: goto label_3ffac8;
        case 0x3ffaccu: goto label_3ffacc;
        case 0x3ffad0u: goto label_3ffad0;
        case 0x3ffad4u: goto label_3ffad4;
        case 0x3ffad8u: goto label_3ffad8;
        case 0x3ffadcu: goto label_3ffadc;
        case 0x3ffae0u: goto label_3ffae0;
        case 0x3ffae4u: goto label_3ffae4;
        case 0x3ffae8u: goto label_3ffae8;
        case 0x3ffaecu: goto label_3ffaec;
        case 0x3ffaf0u: goto label_3ffaf0;
        case 0x3ffaf4u: goto label_3ffaf4;
        case 0x3ffaf8u: goto label_3ffaf8;
        case 0x3ffafcu: goto label_3ffafc;
        case 0x3ffb00u: goto label_3ffb00;
        case 0x3ffb04u: goto label_3ffb04;
        case 0x3ffb08u: goto label_3ffb08;
        case 0x3ffb0cu: goto label_3ffb0c;
        case 0x3ffb10u: goto label_3ffb10;
        case 0x3ffb14u: goto label_3ffb14;
        case 0x3ffb18u: goto label_3ffb18;
        case 0x3ffb1cu: goto label_3ffb1c;
        case 0x3ffb20u: goto label_3ffb20;
        case 0x3ffb24u: goto label_3ffb24;
        case 0x3ffb28u: goto label_3ffb28;
        case 0x3ffb2cu: goto label_3ffb2c;
        case 0x3ffb30u: goto label_3ffb30;
        case 0x3ffb34u: goto label_3ffb34;
        case 0x3ffb38u: goto label_3ffb38;
        case 0x3ffb3cu: goto label_3ffb3c;
        case 0x3ffb40u: goto label_3ffb40;
        case 0x3ffb44u: goto label_3ffb44;
        default: break;
    }

    ctx->pc = 0x3ff918u;

label_3ff918:
    // 0x3ff918: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ff918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ff91c:
    // 0x3ff91c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3ff91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3ff920:
    // 0x3ff920: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3ff920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3ff924:
    // 0x3ff924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ff924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ff928:
    // 0x3ff928: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ff928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ff92c:
    // 0x3ff92c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3ff92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3ff930:
    // 0x3ff930: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3ff930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3ff934:
    // 0x3ff934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ff934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ff938:
    // 0x3ff938: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ff938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ff93c:
    // 0x3ff93c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ff93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ff940:
    // 0x3ff940: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3ff940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3ff944:
    // 0x3ff944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ff944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ff948:
    // 0x3ff948: 0xc0ea146  jal         func_3A8518
label_3ff94c:
    if (ctx->pc == 0x3FF94Cu) {
        ctx->pc = 0x3FF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF948u;
        // 0x3ff94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF950u;
        goto label_3ff950;
    }
    ctx->pc = 0x3FF948u;
    SET_GPR_U32(ctx, 31, 0x3FF950u);
    ctx->pc = 0x3FF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF948u;
    // 0x3ff94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FF948u, 0x3FF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF950u;
label_3ff950:
    // 0x3ff950: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff954:
    // 0x3ff954: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ff954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff958:
    // 0x3ff958: 0xc0ea12a  jal         func_3A84A8
label_3ff95c:
    if (ctx->pc == 0x3FF95Cu) {
        ctx->pc = 0x3FF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF958u;
        // 0x3ff95c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF960u;
        goto label_3ff960;
    }
    ctx->pc = 0x3FF958u;
    SET_GPR_U32(ctx, 31, 0x3FF960u);
    ctx->pc = 0x3FF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF958u;
    // 0x3ff95c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FF958u, 0x3FF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF960u;
label_3ff960:
    // 0x3ff960: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ff960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ff964:
    // 0x3ff964: 0xc0ea12a  jal         func_3A84A8
label_3ff968:
    if (ctx->pc == 0x3FF968u) {
        ctx->pc = 0x3FF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF964u;
        // 0x3ff968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF96Cu;
        goto label_3ff96c;
    }
    ctx->pc = 0x3FF964u;
    SET_GPR_U32(ctx, 31, 0x3FF96Cu);
    ctx->pc = 0x3FF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF964u;
    // 0x3ff968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FF964u, 0x3FF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF96Cu;
label_3ff96c:
    // 0x3ff96c: 0xc0ea146  jal         func_3A8518
label_3ff970:
    if (ctx->pc == 0x3FF970u) {
        ctx->pc = 0x3FF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF96Cu;
        // 0x3ff970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF974u;
        goto label_3ff974;
    }
    ctx->pc = 0x3FF96Cu;
    SET_GPR_U32(ctx, 31, 0x3FF974u);
    ctx->pc = 0x3FF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF96Cu;
    // 0x3ff970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FF96Cu, 0x3FF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF974u;
label_3ff974:
    // 0x3ff974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ff974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ff978:
    // 0x3ff978: 0xc0ea14c  jal         func_3A8530
label_3ff97c:
    if (ctx->pc == 0x3FF97Cu) {
        ctx->pc = 0x3FF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF978u;
        // 0x3ff97c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF980u;
        goto label_3ff980;
    }
    ctx->pc = 0x3FF978u;
    SET_GPR_U32(ctx, 31, 0x3FF980u);
    ctx->pc = 0x3FF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF978u;
    // 0x3ff97c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FF978u, 0x3FF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF980u;
label_3ff980:
    // 0x3ff980: 0xc08a61a  jal         func_229868
label_3ff984:
    if (ctx->pc == 0x3FF984u) {
        ctx->pc = 0x3FF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF980u;
        // 0x3ff984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF988u;
        goto label_3ff988;
    }
    ctx->pc = 0x3FF980u;
    SET_GPR_U32(ctx, 31, 0x3FF988u);
    ctx->pc = 0x3FF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF980u;
    // 0x3ff984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3FF980u, 0x3FF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF988u;
label_3ff988:
    // 0x3ff988: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ff988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff98c:
    // 0x3ff98c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3ff98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ff990:
    // 0x3ff990: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3ff994:
    if (ctx->pc == 0x3FF994u) {
        ctx->pc = 0x3FF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF990u;
        // 0x3ff994: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF998u;
        goto label_3ff998;
    }
    ctx->pc = 0x3FF990u;
    {
        const bool branch_taken_0x3ff990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff990) {
            ctx->pc = 0x3FF994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF990u;
            // 0x3ff994: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF9B0u;
            goto label_3ff9b0;
        }
    }
    ctx->pc = 0x3FF998u;
label_3ff998:
    // 0x3ff998: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3ff998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3ff99c:
    // 0x3ff99c: 0xc0e91f0  jal         func_3A47C0
label_3ff9a0:
    if (ctx->pc == 0x3FF9A0u) {
        ctx->pc = 0x3FF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF99Cu;
        // 0x3ff9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF9A4u;
        goto label_3ff9a4;
    }
    ctx->pc = 0x3FF99Cu;
    SET_GPR_U32(ctx, 31, 0x3FF9A4u);
    ctx->pc = 0x3FF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF99Cu;
    // 0x3ff9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FF99Cu, 0x3FF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF9A4u;
label_3ff9a4:
    // 0x3ff9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ff9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff9a8:
    // 0x3ff9a8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3ff9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3ff9ac:
    // 0x3ff9ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ff9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ff9b0:
    // 0x3ff9b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ff9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ff9b4:
    // 0x3ff9b4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3ff9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff9b8:
    // 0x3ff9b8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3ff9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3ff9bc:
    // 0x3ff9bc: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3ff9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3ff9c0:
    // 0x3ff9c0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3ff9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3ff9c4:
    // 0x3ff9c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff9c8:
    // 0x3ff9c8: 0x40f809  jalr        $v0
label_3ff9cc:
    if (ctx->pc == 0x3FF9CCu) {
        ctx->pc = 0x3FF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9C8u;
        // 0x3ff9cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF9D0u;
        goto label_3ff9d0;
    }
    ctx->pc = 0x3FF9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF9D0u);
        ctx->pc = 0x3FF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9C8u;
        // 0x3ff9cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF9C8u, 0x3FF9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF9D0u;
label_3ff9d0:
    // 0x3ff9d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ff9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ff9d4:
    // 0x3ff9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff9d8:
    // 0x3ff9d8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3ff9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3ff9dc:
    // 0x3ff9dc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3ff9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3ff9e0:
    // 0x3ff9e0: 0x40f809  jalr        $v0
label_3ff9e4:
    if (ctx->pc == 0x3FF9E4u) {
        ctx->pc = 0x3FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9E0u;
        // 0x3ff9e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF9E8u;
        goto label_3ff9e8;
    }
    ctx->pc = 0x3FF9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF9E8u);
        ctx->pc = 0x3FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9E0u;
        // 0x3ff9e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF9E0u, 0x3FF9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF9E8u;
label_3ff9e8:
    // 0x3ff9e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ff9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ff9ec:
    // 0x3ff9ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ff9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ff9f0:
    // 0x3ff9f0: 0xc0e8604  jal         func_3A1810
label_3ff9f4:
    if (ctx->pc == 0x3FF9F4u) {
        ctx->pc = 0x3FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF9F0u;
        // 0x3ff9f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF9F8u;
        goto label_3ff9f8;
    }
    ctx->pc = 0x3FF9F0u;
    SET_GPR_U32(ctx, 31, 0x3FF9F8u);
    ctx->pc = 0x3FF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF9F0u;
    // 0x3ff9f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3FF9F0u, 0x3FF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF9F8u;
label_3ff9f8:
    // 0x3ff9f8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3ff9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3ff9fc:
    // 0x3ff9fc: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3ff9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3ffa00:
    // 0x3ffa00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ffa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ffa04:
    // 0x3ffa04: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3ffa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_3ffa08:
    // 0x3ffa08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ffa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ffa0c:
    // 0x3ffa0c: 0x16a00010  bnez        $s5, . + 4 + (0x10 << 2)
label_3ffa10:
    if (ctx->pc == 0x3FFA10u) {
        ctx->pc = 0x3FFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA0Cu;
        // 0x3ffa10: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA14u;
        goto label_3ffa14;
    }
    ctx->pc = 0x3FFA0Cu;
    {
        const bool branch_taken_0x3ffa0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA0Cu;
        // 0x3ffa10: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa0c) {
            ctx->pc = 0x3FFA50u;
            goto label_3ffa50;
        }
    }
    ctx->pc = 0x3FFA14u;
label_3ffa14:
    // 0x3ffa14: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3ffa14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ffa18:
    // 0x3ffa18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ffa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa1c:
    // 0x3ffa1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa20:
    // 0x3ffa20: 0xc0e8e5e  jal         func_3A3978
label_3ffa24:
    if (ctx->pc == 0x3FFA24u) {
        ctx->pc = 0x3FFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA20u;
        // 0x3ffa24: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA28u;
        goto label_3ffa28;
    }
    ctx->pc = 0x3FFA20u;
    SET_GPR_U32(ctx, 31, 0x3FFA28u);
    ctx->pc = 0x3FFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFA20u;
    // 0x3ffa24: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3FFA20u, 0x3FFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFA28u;
label_3ffa28:
    // 0x3ffa28: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x3ffa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3ffa2c:
    // 0x3ffa2c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ffa2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ffa30:
    // 0x3ffa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa34:
    // 0x3ffa34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ffa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa38:
    // 0x3ffa38: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3ffa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ffa3c:
    // 0x3ffa3c: 0xc0e8e5e  jal         func_3A3978
label_3ffa40:
    if (ctx->pc == 0x3FFA40u) {
        ctx->pc = 0x3FFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA3Cu;
        // 0x3ffa40: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA44u;
        goto label_3ffa44;
    }
    ctx->pc = 0x3FFA3Cu;
    SET_GPR_U32(ctx, 31, 0x3FFA44u);
    ctx->pc = 0x3FFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFA3Cu;
    // 0x3ffa40: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3FFA3Cu, 0x3FFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFA44u;
label_3ffa44:
    // 0x3ffa44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ffa44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ffa48:
    // 0x3ffa48: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ffa4c:
    if (ctx->pc == 0x3FFA4Cu) {
        ctx->pc = 0x3FFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA48u;
        // 0x3ffa4c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA50u;
        goto label_3ffa50;
    }
    ctx->pc = 0x3FFA48u;
    {
        const bool branch_taken_0x3ffa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA48u;
        // 0x3ffa4c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa48) {
            ctx->pc = 0x3FFA64u;
            goto label_3ffa64;
        }
    }
    ctx->pc = 0x3FFA50u;
label_3ffa50:
    // 0x3ffa50: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ffa50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ffa54:
    // 0x3ffa54: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3ffa54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ffa58:
    // 0x3ffa58: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ffa58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ffa5c:
    // 0x3ffa5c: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3ffa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3ffa60:
    // 0x3ffa60: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3ffa60u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3ffa64:
    // 0x3ffa64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ffa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa68:
    // 0x3ffa68: 0xc0ea176  jal         func_3A85D8
label_3ffa6c:
    if (ctx->pc == 0x3FFA6Cu) {
        ctx->pc = 0x3FFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA68u;
        // 0x3ffa6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA70u;
        goto label_3ffa70;
    }
    ctx->pc = 0x3FFA68u;
    SET_GPR_U32(ctx, 31, 0x3FFA70u);
    ctx->pc = 0x3FFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFA68u;
    // 0x3ffa6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FFA68u, 0x3FFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFA70u;
label_3ffa70:
    // 0x3ffa70: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ffa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffa74:
    // 0x3ffa74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ffa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa78:
    // 0x3ffa78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ffa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ffa7c:
    // 0x3ffa7c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ffa7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ffa80:
    // 0x3ffa80: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ffa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ffa84:
    // 0x3ffa84: 0x40f809  jalr        $v0
label_3ffa88:
    if (ctx->pc == 0x3FFA88u) {
        ctx->pc = 0x3FFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA84u;
        // 0x3ffa88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFA8Cu;
        goto label_3ffa8c;
    }
    ctx->pc = 0x3FFA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FFA8Cu);
        ctx->pc = 0x3FFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA84u;
        // 0x3ffa88: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFA84u, 0x3FFA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFA8Cu;
label_3ffa8c:
    // 0x3ffa8c: 0x26c316c0  addiu       $v1, $s6, 0x16C0
    ctx->pc = 0x3ffa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
label_3ffa90:
    // 0x3ffa90: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ffa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ffa94:
    // 0x3ffa94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3ffa94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3ffa98:
    // 0x3ffa98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffa9c:
    // 0x3ffa9c: 0xc0e8e26  jal         func_3A3898
label_3ffaa0:
    if (ctx->pc == 0x3FFAA0u) {
        ctx->pc = 0x3FFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFA9Cu;
        // 0x3ffaa0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFAA4u;
        goto label_3ffaa4;
    }
    ctx->pc = 0x3FFA9Cu;
    SET_GPR_U32(ctx, 31, 0x3FFAA4u);
    ctx->pc = 0x3FFAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFA9Cu;
    // 0x3ffaa0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FFA9Cu, 0x3FFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFAA4u;
label_3ffaa4:
    // 0x3ffaa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ffaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ffaa8:
    // 0x3ffaa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ffaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ffaac:
    // 0x3ffaac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ffaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ffab0:
    // 0x3ffab0: 0xc0ea164  jal         func_3A8590
label_3ffab4:
    if (ctx->pc == 0x3FFAB4u) {
        ctx->pc = 0x3FFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAB0u;
        // 0x3ffab4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFAB8u;
        goto label_3ffab8;
    }
    ctx->pc = 0x3FFAB0u;
    SET_GPR_U32(ctx, 31, 0x3FFAB8u);
    ctx->pc = 0x3FFAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFAB0u;
    // 0x3ffab4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3FFAB0u, 0x3FFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFAB8u;
label_3ffab8:
    // 0x3ffab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ffab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffabc:
    // 0x3ffabc: 0xc0ea158  jal         func_3A8560
label_3ffac0:
    if (ctx->pc == 0x3FFAC0u) {
        ctx->pc = 0x3FFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFABCu;
        // 0x3ffac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFAC4u;
        goto label_3ffac4;
    }
    ctx->pc = 0x3FFABCu;
    SET_GPR_U32(ctx, 31, 0x3FFAC4u);
    ctx->pc = 0x3FFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFABCu;
    // 0x3ffac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3FFABCu, 0x3FFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFAC4u;
label_3ffac4:
    // 0x3ffac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffac8:
    // 0x3ffac8: 0xc0e8dee  jal         func_3A37B8
label_3ffacc:
    if (ctx->pc == 0x3FFACCu) {
        ctx->pc = 0x3FFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAC8u;
        // 0x3ffacc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFAD0u;
        goto label_3ffad0;
    }
    ctx->pc = 0x3FFAC8u;
    SET_GPR_U32(ctx, 31, 0x3FFAD0u);
    ctx->pc = 0x3FFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFAC8u;
    // 0x3ffacc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FFAC8u, 0x3FFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFAD0u;
label_3ffad0:
    // 0x3ffad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ffad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ffad4:
    // 0x3ffad4: 0xc0ea16a  jal         func_3A85A8
label_3ffad8:
    if (ctx->pc == 0x3FFAD8u) {
        ctx->pc = 0x3FFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAD4u;
        // 0x3ffad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFADCu;
        goto label_3ffadc;
    }
    ctx->pc = 0x3FFAD4u;
    SET_GPR_U32(ctx, 31, 0x3FFADCu);
    ctx->pc = 0x3FFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFAD4u;
    // 0x3ffad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FFAD4u, 0x3FFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFADCu;
label_3ffadc:
    // 0x3ffadc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3ffadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffae0:
    // 0x3ffae0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ffae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ffae4:
    // 0x3ffae4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3ffae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3ffae8:
    // 0x3ffae8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ffae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ffaec:
    // 0x3ffaec: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ffaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ffaf0:
    // 0x3ffaf0: 0x60f809  jalr        $v1
label_3ffaf4:
    if (ctx->pc == 0x3FFAF4u) {
        ctx->pc = 0x3FFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAF0u;
        // 0x3ffaf4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFAF8u;
        goto label_3ffaf8;
    }
    ctx->pc = 0x3FFAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FFAF8u);
        ctx->pc = 0x3FFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFAF0u;
        // 0x3ffaf4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFAF0u, 0x3FFAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFAF8u;
label_3ffaf8:
    // 0x3ffaf8: 0x3c02ac6f  lui         $v0, 0xAC6F
    ctx->pc = 0x3ffaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44143 << 16));
label_3ffafc:
    // 0x3ffafc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3ffafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3ffb00:
    // 0x3ffb00: 0x34425902  ori         $v0, $v0, 0x5902
    ctx->pc = 0x3ffb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
label_3ffb04:
    // 0x3ffb04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3ffb08:
    if (ctx->pc == 0x3FFB08u) {
        ctx->pc = 0x3FFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB04u;
        // 0x3ffb08: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFB0Cu;
        goto label_3ffb0c;
    }
    ctx->pc = 0x3FFB04u;
    {
        const bool branch_taken_0x3ffb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB04u;
        // 0x3ffb08: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb04) {
            ctx->pc = 0x3FFB20u;
            goto label_3ffb20;
        }
    }
    ctx->pc = 0x3FFB0Cu;
label_3ffb0c:
    // 0x3ffb0c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3ffb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3ffb10:
    // 0x3ffb10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ffb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ffb14:
    // 0x3ffb14: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3ffb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3ffb18:
    // 0x3ffb18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ffb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ffb1c:
    // 0x3ffb1c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3ffb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3ffb20:
    // 0x3ffb20: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ffb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ffb24:
    // 0x3ffb24: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ffb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ffb28:
    // 0x3ffb28: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3ffb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ffb2c:
    // 0x3ffb2c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ffb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ffb30:
    // 0x3ffb30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ffb30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ffb34:
    // 0x3ffb34: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3ffb34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ffb38:
    // 0x3ffb38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ffb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ffb3c:
    // 0x3ffb3c: 0x3e00008  jr          $ra
label_3ffb40:
    if (ctx->pc == 0x3FFB40u) {
        ctx->pc = 0x3FFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB3Cu;
        // 0x3ffb40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFB44u;
        goto label_3ffb44;
    }
    ctx->pc = 0x3FFB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB3Cu;
        // 0x3ffb40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FFB44u;
label_3ffb44:
    // 0x3ffb44: 0x0  nop
    ctx->pc = 0x3ffb44u;
    // NOP
    ctx->pc = 0x3ffb48u;
}
