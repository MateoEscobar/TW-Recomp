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

// Function: sub_0016A910
// Address: 0x16a910 - 0x16aa98
void sub_0016A910_0x16a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A910_0x16a910");
#endif

    switch (ctx->pc) {
        case 0x16a910u: goto label_16a910;
        case 0x16a914u: goto label_16a914;
        case 0x16a918u: goto label_16a918;
        case 0x16a91cu: goto label_16a91c;
        case 0x16a920u: goto label_16a920;
        case 0x16a924u: goto label_16a924;
        case 0x16a928u: goto label_16a928;
        case 0x16a92cu: goto label_16a92c;
        case 0x16a930u: goto label_16a930;
        case 0x16a934u: goto label_16a934;
        case 0x16a938u: goto label_16a938;
        case 0x16a93cu: goto label_16a93c;
        case 0x16a940u: goto label_16a940;
        case 0x16a944u: goto label_16a944;
        case 0x16a948u: goto label_16a948;
        case 0x16a94cu: goto label_16a94c;
        case 0x16a950u: goto label_16a950;
        case 0x16a954u: goto label_16a954;
        case 0x16a958u: goto label_16a958;
        case 0x16a95cu: goto label_16a95c;
        case 0x16a960u: goto label_16a960;
        case 0x16a964u: goto label_16a964;
        case 0x16a968u: goto label_16a968;
        case 0x16a96cu: goto label_16a96c;
        case 0x16a970u: goto label_16a970;
        case 0x16a974u: goto label_16a974;
        case 0x16a978u: goto label_16a978;
        case 0x16a97cu: goto label_16a97c;
        case 0x16a980u: goto label_16a980;
        case 0x16a984u: goto label_16a984;
        case 0x16a988u: goto label_16a988;
        case 0x16a98cu: goto label_16a98c;
        case 0x16a990u: goto label_16a990;
        case 0x16a994u: goto label_16a994;
        case 0x16a998u: goto label_16a998;
        case 0x16a99cu: goto label_16a99c;
        case 0x16a9a0u: goto label_16a9a0;
        case 0x16a9a4u: goto label_16a9a4;
        case 0x16a9a8u: goto label_16a9a8;
        case 0x16a9acu: goto label_16a9ac;
        case 0x16a9b0u: goto label_16a9b0;
        case 0x16a9b4u: goto label_16a9b4;
        case 0x16a9b8u: goto label_16a9b8;
        case 0x16a9bcu: goto label_16a9bc;
        case 0x16a9c0u: goto label_16a9c0;
        case 0x16a9c4u: goto label_16a9c4;
        case 0x16a9c8u: goto label_16a9c8;
        case 0x16a9ccu: goto label_16a9cc;
        case 0x16a9d0u: goto label_16a9d0;
        case 0x16a9d4u: goto label_16a9d4;
        case 0x16a9d8u: goto label_16a9d8;
        case 0x16a9dcu: goto label_16a9dc;
        case 0x16a9e0u: goto label_16a9e0;
        case 0x16a9e4u: goto label_16a9e4;
        case 0x16a9e8u: goto label_16a9e8;
        case 0x16a9ecu: goto label_16a9ec;
        case 0x16a9f0u: goto label_16a9f0;
        case 0x16a9f4u: goto label_16a9f4;
        case 0x16a9f8u: goto label_16a9f8;
        case 0x16a9fcu: goto label_16a9fc;
        case 0x16aa00u: goto label_16aa00;
        case 0x16aa04u: goto label_16aa04;
        case 0x16aa08u: goto label_16aa08;
        case 0x16aa0cu: goto label_16aa0c;
        case 0x16aa10u: goto label_16aa10;
        case 0x16aa14u: goto label_16aa14;
        case 0x16aa18u: goto label_16aa18;
        case 0x16aa1cu: goto label_16aa1c;
        case 0x16aa20u: goto label_16aa20;
        case 0x16aa24u: goto label_16aa24;
        case 0x16aa28u: goto label_16aa28;
        case 0x16aa2cu: goto label_16aa2c;
        case 0x16aa30u: goto label_16aa30;
        case 0x16aa34u: goto label_16aa34;
        case 0x16aa38u: goto label_16aa38;
        case 0x16aa3cu: goto label_16aa3c;
        case 0x16aa40u: goto label_16aa40;
        case 0x16aa44u: goto label_16aa44;
        case 0x16aa48u: goto label_16aa48;
        case 0x16aa4cu: goto label_16aa4c;
        case 0x16aa50u: goto label_16aa50;
        case 0x16aa54u: goto label_16aa54;
        case 0x16aa58u: goto label_16aa58;
        case 0x16aa5cu: goto label_16aa5c;
        case 0x16aa60u: goto label_16aa60;
        case 0x16aa64u: goto label_16aa64;
        case 0x16aa68u: goto label_16aa68;
        case 0x16aa6cu: goto label_16aa6c;
        case 0x16aa70u: goto label_16aa70;
        case 0x16aa74u: goto label_16aa74;
        case 0x16aa78u: goto label_16aa78;
        case 0x16aa7cu: goto label_16aa7c;
        case 0x16aa80u: goto label_16aa80;
        case 0x16aa84u: goto label_16aa84;
        case 0x16aa88u: goto label_16aa88;
        case 0x16aa8cu: goto label_16aa8c;
        case 0x16aa90u: goto label_16aa90;
        case 0x16aa94u: goto label_16aa94;
        default: break;
    }

    ctx->pc = 0x16a910u;

label_16a910:
    // 0x16a910: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16a914:
    // 0x16a914: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16a918:
    // 0x16a918: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16a91c:
    // 0x16a91c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a91cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16a920:
    // 0x16a920: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_16a924:
    // 0x16a924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a928:
    // 0x16a928: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16a92c:
    // 0x16a92c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_16a930:
    // 0x16a930: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_16a934:
    // 0x16a934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16a938:
    // 0x16a938: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_16a93c:
    // 0x16a93c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16a940:
    // 0x16a940: 0x1082004b  beq         $a0, $v0, . + 4 + (0x4B << 2)
label_16a944:
    if (ctx->pc == 0x16A944u) {
        ctx->pc = 0x16A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A940u;
        // 0x16a944: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A948u;
        goto label_16a948;
    }
    ctx->pc = 0x16A940u;
    {
        const bool branch_taken_0x16a940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A940u;
        // 0x16a944: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a940) {
            ctx->pc = 0x16AA70u;
            goto label_16aa70;
        }
    }
    ctx->pc = 0x16A948u;
label_16a948:
    // 0x16a948: 0xc05b0e2  jal         func_16C388
label_16a94c:
    if (ctx->pc == 0x16A94Cu) {
        ctx->pc = 0x16A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A948u;
        // 0x16a94c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A950u;
        goto label_16a950;
    }
    ctx->pc = 0x16A948u;
    SET_GPR_U32(ctx, 31, 0x16A950u);
    ctx->pc = 0x16A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A948u;
    // 0x16a94c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A948u, 0x16A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A950u;
label_16a950:
    // 0x16a950: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16a954:
    // 0x16a954: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x16a954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16a958:
    // 0x16a958: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16a958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a95c:
    // 0x16a95c: 0xc0e409a  jal         func_390268
label_16a960:
    if (ctx->pc == 0x16A960u) {
        ctx->pc = 0x16A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A95Cu;
        // 0x16a960: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A964u;
        goto label_16a964;
    }
    ctx->pc = 0x16A95Cu;
    SET_GPR_U32(ctx, 31, 0x16A964u);
    ctx->pc = 0x16A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A95Cu;
    // 0x16a960: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A95Cu, 0x16A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A964u;
label_16a964:
    // 0x16a964: 0x241301f4  addiu       $s3, $zero, 0x1F4
    ctx->pc = 0x16a964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_16a968:
    // 0x16a968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16a968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16a96c:
    // 0x16a96c: 0x0  nop
    ctx->pc = 0x16a96cu;
    // NOP
label_16a970:
    // 0x16a970: 0xc137866  jal         func_4DE198
label_16a974:
    if (ctx->pc == 0x16A974u) {
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A978u;
        goto label_16a978;
    }
    ctx->pc = 0x16A970u;
    SET_GPR_U32(ctx, 31, 0x16A978u);
    ctx->pc = 0x16A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A970u;
    // 0x16a974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16A970u, 0x16A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A978u;
label_16a978:
    // 0x16a978: 0xc0e409a  jal         func_390268
label_16a97c:
    if (ctx->pc == 0x16A97Cu) {
        ctx->pc = 0x16A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A978u;
        // 0x16a97c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A980u;
        goto label_16a980;
    }
    ctx->pc = 0x16A978u;
    SET_GPR_U32(ctx, 31, 0x16A980u);
    ctx->pc = 0x16A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A978u;
    // 0x16a97c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A978u, 0x16A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A980u;
label_16a980:
    // 0x16a980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a984:
    // 0x16a984: 0x52000037  beql        $s0, $zero, . + 4 + (0x37 << 2)
label_16a988:
    if (ctx->pc == 0x16A988u) {
        ctx->pc = 0x16A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A984u;
        // 0x16a988: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A98Cu;
        goto label_16a98c;
    }
    ctx->pc = 0x16A984u;
    {
        const bool branch_taken_0x16a984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a984) {
            ctx->pc = 0x16A988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A984u;
            // 0x16a988: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA64u;
            goto label_16aa64;
        }
    }
    ctx->pc = 0x16A98Cu;
label_16a98c:
    // 0x16a98c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a990:
    // 0x16a990: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a994:
    // 0x16a994: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a998:
    // 0x16a998: 0x40f809  jalr        $v0
label_16a99c:
    if (ctx->pc == 0x16A99Cu) {
        ctx->pc = 0x16A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A998u;
        // 0x16a99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9A0u;
        goto label_16a9a0;
    }
    ctx->pc = 0x16A998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A9A0u);
        ctx->pc = 0x16A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A998u;
        // 0x16a99c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A998u, 0x16A9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A9A0u;
label_16a9a0:
    // 0x16a9a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a9a4:
    // 0x16a9a4: 0xc0a48cc  jal         func_292330
label_16a9a8:
    if (ctx->pc == 0x16A9A8u) {
        ctx->pc = 0x16A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9A4u;
        // 0x16a9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9ACu;
        goto label_16a9ac;
    }
    ctx->pc = 0x16A9A4u;
    SET_GPR_U32(ctx, 31, 0x16A9ACu);
    ctx->pc = 0x16A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9A4u;
    // 0x16a9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x16A9A4u, 0x16A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9ACu;
label_16a9ac:
    // 0x16a9ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a9b0:
    // 0x16a9b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a9b4:
    // 0x16a9b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a9b8:
    // 0x16a9b8: 0x40f809  jalr        $v0
label_16a9bc:
    if (ctx->pc == 0x16A9BCu) {
        ctx->pc = 0x16A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9B8u;
        // 0x16a9bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9C0u;
        goto label_16a9c0;
    }
    ctx->pc = 0x16A9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A9C0u);
        ctx->pc = 0x16A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9B8u;
        // 0x16a9bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9B8u, 0x16A9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A9C0u;
label_16a9c0:
    // 0x16a9c0: 0xc0a494c  jal         func_292530
label_16a9c4:
    if (ctx->pc == 0x16A9C4u) {
        ctx->pc = 0x16A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9C0u;
        // 0x16a9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9C8u;
        goto label_16a9c8;
    }
    ctx->pc = 0x16A9C0u;
    SET_GPR_U32(ctx, 31, 0x16A9C8u);
    ctx->pc = 0x16A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9C0u;
    // 0x16a9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292530u, 0x16A9C0u, 0x16A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9C8u;
label_16a9c8:
    // 0x16a9c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a9cc:
    // 0x16a9cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a9d0:
    // 0x16a9d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a9d4:
    // 0x16a9d4: 0x40f809  jalr        $v0
label_16a9d8:
    if (ctx->pc == 0x16A9D8u) {
        ctx->pc = 0x16A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9D4u;
        // 0x16a9d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9DCu;
        goto label_16a9dc;
    }
    ctx->pc = 0x16A9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A9DCu);
        ctx->pc = 0x16A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9D4u;
        // 0x16a9d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9D4u, 0x16A9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A9DCu;
label_16a9dc:
    // 0x16a9dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16a9e0:
    // 0x16a9e0: 0xc0e409a  jal         func_390268
label_16a9e4:
    if (ctx->pc == 0x16A9E4u) {
        ctx->pc = 0x16A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9E0u;
        // 0x16a9e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A9E8u;
        goto label_16a9e8;
    }
    ctx->pc = 0x16A9E0u;
    SET_GPR_U32(ctx, 31, 0x16A9E8u);
    ctx->pc = 0x16A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9E0u;
    // 0x16a9e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A9E0u, 0x16A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9E8u;
label_16a9e8:
    // 0x16a9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16a9ec:
    // 0x16a9ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a9f0:
    // 0x16a9f0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_16a9f4:
    // 0x16a9f4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x16a9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_16a9f8:
    // 0x16a9f8: 0xc0f809  jalr        $a2
label_16a9fc:
    if (ctx->pc == 0x16A9FCu) {
        ctx->pc = 0x16A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9F8u;
        // 0x16a9fc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA00u;
        goto label_16aa00;
    }
    ctx->pc = 0x16A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16AA00u);
        ctx->pc = 0x16A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9F8u;
        // 0x16a9fc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9F8u, 0x16AA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16AA00u;
label_16aa00:
    // 0x16aa00: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x16aa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16aa04:
    // 0x16aa04: 0xc0cd4e4  jal         func_335390
label_16aa08:
    if (ctx->pc == 0x16AA08u) {
        ctx->pc = 0x16AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA04u;
        // 0x16aa08: 0x26c4b8a8  addiu       $a0, $s6, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA0Cu;
        goto label_16aa0c;
    }
    ctx->pc = 0x16AA04u;
    SET_GPR_U32(ctx, 31, 0x16AA0Cu);
    ctx->pc = 0x16AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA04u;
    // 0x16aa08: 0x26c4b8a8  addiu       $a0, $s6, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x16AA04u, 0x16AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA0Cu;
label_16aa0c:
    // 0x16aa0c: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x16aa0cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_16aa10:
    // 0x16aa10: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_16aa14:
    if (ctx->pc == 0x16AA14u) {
        ctx->pc = 0x16AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA10u;
        // 0x16aa14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA18u;
        goto label_16aa18;
    }
    ctx->pc = 0x16AA10u;
    {
        const bool branch_taken_0x16aa10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa10) {
            ctx->pc = 0x16AA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA10u;
            // 0x16aa14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA18u;
            goto label_16aa18;
        }
    }
    ctx->pc = 0x16AA18u;
label_16aa18:
    // 0x16aa18: 0x1010  mfhi        $v0
    ctx->pc = 0x16aa18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_16aa1c:
    // 0x16aa1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_16aa20:
    if (ctx->pc == 0x16AA20u) {
        ctx->pc = 0x16AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA1Cu;
        // 0x16aa20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA24u;
        goto label_16aa24;
    }
    ctx->pc = 0x16AA1Cu;
    {
        const bool branch_taken_0x16aa1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA1Cu;
        // 0x16aa20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa1c) {
            ctx->pc = 0x16AA38u;
            goto label_16aa38;
        }
    }
    ctx->pc = 0x16AA24u;
label_16aa24:
    // 0x16aa24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16aa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16aa28:
    // 0x16aa28: 0x0  nop
    ctx->pc = 0x16aa28u;
    // NOP
label_16aa2c:
    // 0x16aa2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x16aa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_16aa30:
    // 0x16aa30: 0x10000009  b           . + 4 + (0x9 << 2)
label_16aa34:
    if (ctx->pc == 0x16AA34u) {
        ctx->pc = 0x16AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA30u;
        // 0x16aa34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA38u;
        goto label_16aa38;
    }
    ctx->pc = 0x16AA30u;
    {
        const bool branch_taken_0x16aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA30u;
        // 0x16aa34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa30) {
            ctx->pc = 0x16AA58u;
            goto label_16aa58;
        }
    }
    ctx->pc = 0x16AA38u;
label_16aa38:
    // 0x16aa38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_16aa3c:
    // 0x16aa3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16aa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16aa40:
    // 0x16aa40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16aa44:
    // 0x16aa44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16aa48:
    // 0x16aa48: 0x0  nop
    ctx->pc = 0x16aa48u;
    // NOP
label_16aa4c:
    // 0x16aa4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x16aa4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_16aa50:
    // 0x16aa50: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x16aa50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_16aa54:
    // 0x16aa54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16aa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16aa58:
    // 0x16aa58: 0xc0bf7dc  jal         func_2FDF70
label_16aa5c:
    if (ctx->pc == 0x16AA5Cu) {
        ctx->pc = 0x16AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA58u;
        // 0x16aa5c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA60u;
        goto label_16aa60;
    }
    ctx->pc = 0x16AA58u;
    SET_GPR_U32(ctx, 31, 0x16AA60u);
    ctx->pc = 0x16AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA58u;
    // 0x16aa5c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x16AA58u, 0x16AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA60u;
label_16aa60:
    // 0x16aa60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16aa60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16aa64:
    // 0x16aa64: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x16aa64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16aa68:
    // 0x16aa68: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_16aa6c:
    if (ctx->pc == 0x16AA6Cu) {
        ctx->pc = 0x16AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA68u;
        // 0x16aa6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA70u;
        goto label_16aa70;
    }
    ctx->pc = 0x16AA68u;
    {
        const bool branch_taken_0x16aa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA68u;
        // 0x16aa6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa68) {
            ctx->pc = 0x16A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a970;
        }
    }
    ctx->pc = 0x16AA70u;
label_16aa70:
    // 0x16aa70: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16aa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16aa74:
    // 0x16aa74: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16aa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16aa78:
    // 0x16aa78: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16aa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16aa7c:
    // 0x16aa7c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16aa7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16aa80:
    // 0x16aa80: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16aa80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16aa84:
    // 0x16aa84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16aa84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16aa88:
    // 0x16aa88: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16aa88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16aa8c:
    // 0x16aa8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16aa90:
    // 0x16aa90: 0x3e00008  jr          $ra
label_16aa94:
    if (ctx->pc == 0x16AA94u) {
        ctx->pc = 0x16AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA90u;
        // 0x16aa94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA98u;
        goto label_fallthrough_0x16aa90;
    }
    ctx->pc = 0x16AA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA90u;
        // 0x16aa94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16aa90:
    ctx->pc = 0x16AA98u;
}
