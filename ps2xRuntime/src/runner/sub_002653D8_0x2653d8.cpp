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

// Function: sub_002653D8
// Address: 0x2653d8 - 0x265c28
void sub_002653D8_0x2653d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002653D8_0x2653d8");
#endif

    switch (ctx->pc) {
        case 0x26540cu: goto label_26540c;
        case 0x265424u: goto label_265424;
        case 0x265430u: goto label_265430;
        case 0x265464u: goto label_265464;
        case 0x265474u: goto label_265474;
        case 0x2654a8u: goto label_2654a8;
        case 0x2654e8u: goto label_2654e8;
        case 0x2655d0u: goto label_2655d0;
        case 0x2655e0u: goto label_2655e0;
        case 0x2655f8u: goto label_2655f8;
        case 0x26560cu: goto label_26560c;
        case 0x265630u: goto label_265630;
        case 0x2656a4u: goto label_2656a4;
        case 0x2656f4u: goto label_2656f4;
        case 0x265784u: goto label_265784;
        case 0x26580cu: goto label_26580c;
        case 0x26585cu: goto label_26585c;
        case 0x2658ecu: goto label_2658ec;
        case 0x265948u: goto label_265948;
        case 0x265990u: goto label_265990;
        case 0x2659d0u: goto label_2659d0;
        case 0x265a20u: goto label_265a20;
        case 0x265a78u: goto label_265a78;
        case 0x265ab8u: goto label_265ab8;
        case 0x265b14u: goto label_265b14;
        case 0x265b54u: goto label_265b54;
        case 0x265b78u: goto label_265b78;
        case 0x265b8cu: goto label_265b8c;
        case 0x265bc8u: goto label_265bc8;
        case 0x265bd8u: goto label_265bd8;
        case 0x265bf4u: goto label_265bf4;
        case 0x265c08u: goto label_265c08;
        default: break;
    }

    ctx->pc = 0x2653d8u;

    // 0x2653d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2653d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2653dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2653dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2653e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2653e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2653e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2653e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2653e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2653ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2653ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2653f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2653f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2653f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2653f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2653fc: 0x12200202  beqz        $s1, . + 4 + (0x202 << 2)
    ctx->pc = 0x2653FCu;
    {
        const bool branch_taken_0x2653fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x265400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653FCu;
        // 0x265400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653fc) {
            ctx->pc = 0x265C08u;
            goto label_265c08;
        }
    }
    ctx->pc = 0x265404u;
    // 0x265404: 0xc087502  jal         func_21D408
    ctx->pc = 0x265404u;
    SET_GPR_U32(ctx, 31, 0x26540Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x265404u, 0x26540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26540Cu;
label_26540c:
    // 0x26540c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26540cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265410: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x265410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x265414: 0x544001fd  bnel        $v0, $zero, . + 4 + (0x1FD << 2)
    ctx->pc = 0x265414u;
    {
        const bool branch_taken_0x265414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265414) {
            ctx->pc = 0x265418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265414u;
            // 0x265418: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x26541Cu;
    // 0x26541c: 0xc087502  jal         func_21D408
    ctx->pc = 0x26541Cu;
    SET_GPR_U32(ctx, 31, 0x265424u);
    ctx->pc = 0x265420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26541Cu;
    // 0x265420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26541Cu, 0x265424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265424u;
label_265424:
    // 0x265424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265428: 0xc0a408c  jal         func_290230
    ctx->pc = 0x265428u;
    SET_GPR_U32(ctx, 31, 0x265430u);
    ctx->pc = 0x26542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265428u;
    // 0x26542c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x265428u, 0x265430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265430u;
label_265430:
    // 0x265430: 0x144001f6  bnez        $v0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x265430u;
    {
        const bool branch_taken_0x265430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265430u;
        // 0x265434: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265430) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265438u;
    // 0x265438: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x26543c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x265440: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x265440u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x265444: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x265444u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x265448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265448u;
    {
        const bool branch_taken_0x265448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265448u;
        // 0x26544c: 0x8c700020  lw          $s0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265448) {
            ctx->pc = 0x265464u;
            goto label_265464;
        }
    }
    ctx->pc = 0x265450u;
    // 0x265450: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265450u;
    {
        const bool branch_taken_0x265450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x265454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265450u;
        // 0x265454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265450) {
            ctx->pc = 0x265464u;
            goto label_265464;
        }
    }
    ctx->pc = 0x265458u;
    // 0x265458: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x265458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x26545c: 0xc073a6a  jal         func_1CE9A8
    ctx->pc = 0x26545Cu;
    SET_GPR_U32(ctx, 31, 0x265464u);
    ctx->pc = 0x265460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26545Cu;
    // 0x265460: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9A8u, 0x26545Cu, 0x265464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265464u;
label_265464:
    // 0x265464: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x265464u;
    {
        const bool branch_taken_0x265464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x265464) {
            ctx->pc = 0x2654B0u;
            goto label_2654b0;
        }
    }
    ctx->pc = 0x26546Cu;
    // 0x26546c: 0xc08a200  jal         func_228800
    ctx->pc = 0x26546Cu;
    SET_GPR_U32(ctx, 31, 0x265474u);
    ctx->pc = 0x265470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26546Cu;
    // 0x265470: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x26546Cu, 0x265474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265474u;
label_265474:
    // 0x265474: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x265474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x265478: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x265478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26547c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26547Cu;
    {
        const bool branch_taken_0x26547c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26547c) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265484u;
    // 0x265484: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x265484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x265488: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x265488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x26548c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265490: 0x544001de  bnel        $v0, $zero, . + 4 + (0x1DE << 2)
    ctx->pc = 0x265490u;
    {
        const bool branch_taken_0x265490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265490) {
            ctx->pc = 0x265494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265490u;
            // 0x265494: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265498u;
label_265498:
    // 0x265498: 0x3405c002  ori         $a1, $zero, 0xC002
    ctx->pc = 0x265498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49154);
    // 0x26549c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x26549cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x2654a0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2654A0u;
    SET_GPR_U32(ctx, 31, 0x2654A8u);
    ctx->pc = 0x2654A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2654A0u;
    // 0x2654a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2654A0u, 0x2654A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654A8u;
label_2654a8:
    // 0x2654a8: 0x544001d8  bnel        $v0, $zero, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x2654A8u;
    {
        const bool branch_taken_0x2654a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2654a8) {
            ctx->pc = 0x2654ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2654A8u;
            // 0x2654ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x2654B0u;
label_2654b0:
    // 0x2654b0: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2654B0u;
    {
        const bool branch_taken_0x2654b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2654B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654B0u;
        // 0x2654b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654b0) {
            ctx->pc = 0x2654BCu;
            goto label_2654bc;
        }
    }
    ctx->pc = 0x2654B8u;
    // 0x2654b8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2654b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2654bc:
    // 0x2654bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2654BCu;
    {
        const bool branch_taken_0x2654bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654BCu;
        // 0x2654c0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654bc) {
            ctx->pc = 0x265500u;
            goto label_265500;
        }
    }
    ctx->pc = 0x2654C4u;
    // 0x2654c4: 0x104001d1  beqz        $v0, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x2654C4u;
    {
        const bool branch_taken_0x2654c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654C4u;
        // 0x2654c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654c4) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x2654CCu;
    // 0x2654cc: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2654CCu;
    {
        const bool branch_taken_0x2654cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654CCu;
        // 0x2654d0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654cc) {
            ctx->pc = 0x2654F0u;
            goto label_2654f0;
        }
    }
    ctx->pc = 0x2654D4u;
    // 0x2654d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2654d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654d8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2654d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2654dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2654dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654e0: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2654E0u;
    SET_GPR_U32(ctx, 31, 0x2654E8u);
    ctx->pc = 0x2654E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2654E0u;
    // 0x2654e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2654E0u, 0x2654E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654E8u;
label_2654e8:
    // 0x2654e8: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2654E8u;
    {
        const bool branch_taken_0x2654e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654E8u;
        // 0x2654ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654e8) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x2654F0u;
label_2654f0:
    // 0x2654f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2654f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2654f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2654f8: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x2654F8u;
    {
        const bool branch_taken_0x2654f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654F8u;
        // 0x2654fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654f8) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x265500u;
label_265500:
    // 0x265500: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x265500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x265504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265508: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265508u;
    {
        const bool branch_taken_0x265508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265508u;
        // 0x26550c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265508) {
            ctx->pc = 0x265514u;
            goto label_265514;
        }
    }
    ctx->pc = 0x265510u;
    // 0x265510: 0x2a030019  slti        $v1, $s0, 0x19
    ctx->pc = 0x265510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_265514:
    // 0x265514: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x265514u;
    {
        const bool branch_taken_0x265514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265514u;
        // 0x265518: 0x2603fff5  addiu       $v1, $s0, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265514) {
            ctx->pc = 0x26564Cu;
            goto label_26564c;
        }
    }
    ctx->pc = 0x26551Cu;
    // 0x26551c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26551cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265520: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x265520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x265524: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x265524u;
    {
        const bool branch_taken_0x265524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265524u;
        // 0x265528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265524) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x26552Cu;
    // 0x26552c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x265530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x265530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265534: 0x2442def0  addiu       $v0, $v0, -0x2110
    ctx->pc = 0x265534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x265538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26553c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26553cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265540: 0x800008  jr          $a0
    ctx->pc = 0x265540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265548u: goto label_265548;
            case 0x265554u: goto label_265554;
            case 0x26555Cu: goto label_26555c;
            case 0x265568u: goto label_265568;
            case 0x265578u: goto label_265578;
            case 0x265588u: goto label_265588;
            case 0x265598u: goto label_265598;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265540u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265548u;
label_265548:
    // 0x265548: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26554c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26554Cu;
    {
        const bool branch_taken_0x26554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26554Cu;
        // 0x265550: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26554c) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265554u;
label_265554:
    // 0x265554: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265554u;
    {
        const bool branch_taken_0x265554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265554u;
        // 0x265558: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265554) {
            ctx->pc = 0x2655A0u;
            goto label_2655a0;
        }
    }
    ctx->pc = 0x26555Cu;
label_26555c:
    // 0x26555c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265560: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x265560u;
    {
        const bool branch_taken_0x265560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265560u;
        // 0x265564: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265560) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265568u;
label_265568:
    // 0x265568: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x265568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26556c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26556cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265570: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265570u;
    {
        const bool branch_taken_0x265570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265570u;
        // 0x265574: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265570) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265578u;
label_265578:
    // 0x265578: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x265578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26557c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x265580u;
    {
        const bool branch_taken_0x265580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265580u;
        // 0x265584: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265580) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265588u;
label_265588:
    // 0x265588: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x265588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26558c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265590u;
    {
        const bool branch_taken_0x265590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265590u;
        // 0x265594: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265590) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265598u;
label_265598:
    // 0x265598: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x265598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26559c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x26559cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2655a0:
    // 0x2655a0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2655a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2655a4:
    // 0x2655a4: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x2655a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
    // 0x2655a8: 0x50400198  beql        $v0, $zero, . + 4 + (0x198 << 2)
    ctx->pc = 0x2655A8u;
    {
        const bool branch_taken_0x2655a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655a8) {
            ctx->pc = 0x2655ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2655A8u;
            // 0x2655ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x2655B0u;
    // 0x2655b0: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2655B0u;
    {
        const bool branch_taken_0x2655b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655b0) {
            ctx->pc = 0x26560Cu;
            goto label_26560c;
        }
    }
    ctx->pc = 0x2655B8u;
    // 0x2655b8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2655B8u;
    {
        const bool branch_taken_0x2655b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655B8u;
        // 0x2655bc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655b8) {
            ctx->pc = 0x2655E8u;
            goto label_2655e8;
        }
    }
    ctx->pc = 0x2655C0u;
    // 0x2655c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2655c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655c4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2655c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2655c8: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2655C8u;
    SET_GPR_U32(ctx, 31, 0x2655D0u);
    ctx->pc = 0x2655CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655C8u;
    // 0x2655cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2655C8u, 0x2655D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655D0u;
label_2655d0:
    // 0x2655d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2655d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2655d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655d8: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x2655D8u;
    SET_GPR_U32(ctx, 31, 0x2655E0u);
    ctx->pc = 0x2655DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655D8u;
    // 0x2655dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x2655D8u, 0x2655E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655E0u;
label_2655e0:
    // 0x2655e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2655E0u;
    {
        const bool branch_taken_0x2655e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655e0) {
            ctx->pc = 0x26560Cu;
            goto label_26560c;
        }
    }
    ctx->pc = 0x2655E8u;
label_2655e8:
    // 0x2655e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2655e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655ec: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2655ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2655f0: 0xc13b672  jal         func_4ED9C8
    ctx->pc = 0x2655F0u;
    SET_GPR_U32(ctx, 31, 0x2655F8u);
    ctx->pc = 0x2655F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655F0u;
    // 0x2655f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED9C8u, 0x2655F0u, 0x2655F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655F8u;
label_2655f8:
    // 0x2655f8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2655fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2655fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265600: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x265600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265604: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x265604u;
    SET_GPR_U32(ctx, 31, 0x26560Cu);
    ctx->pc = 0x265608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265604u;
    // 0x265608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x265604u, 0x26560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26560Cu;
label_26560c:
    // 0x26560c: 0x5200017f  beql        $s0, $zero, . + 4 + (0x17F << 2)
    ctx->pc = 0x26560Cu;
    {
        const bool branch_taken_0x26560c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26560c) {
            ctx->pc = 0x265610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26560Cu;
            // 0x265610: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265614u;
    // 0x265614: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265614u;
    {
        const bool branch_taken_0x265614 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265614u;
        // 0x265618: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265614) {
            ctx->pc = 0x265638u;
            goto label_265638;
        }
    }
    ctx->pc = 0x26561Cu;
    // 0x26561c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265620: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265628: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265628u;
    SET_GPR_U32(ctx, 31, 0x265630u);
    ctx->pc = 0x26562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265628u;
    // 0x26562c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265628u, 0x265630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265630u;
label_265630:
    // 0x265630: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x265630u;
    {
        const bool branch_taken_0x265630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265630u;
        // 0x265634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265630) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265638u;
label_265638:
    // 0x265638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26563c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x26563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265644: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x265644u;
    {
        const bool branch_taken_0x265644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265644u;
        // 0x265648: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265644) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x26564Cu;
label_26564c:
    // 0x26564c: 0x2a02028d  slti        $v0, $s0, 0x28D
    ctx->pc = 0x26564cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)653) ? 1 : 0);
    // 0x265650: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265654u;
    {
        const bool branch_taken_0x265654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265654u;
        // 0x265658: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265654) {
            ctx->pc = 0x265668u;
            goto label_265668;
        }
    }
    ctx->pc = 0x26565Cu;
    // 0x26565c: 0x2a020294  slti        $v0, $s0, 0x294
    ctx->pc = 0x26565cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)660) ? 1 : 0);
    // 0x265660: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x265660u;
    {
        const bool branch_taken_0x265660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265660) {
            ctx->pc = 0x265664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265660u;
            // 0x265664: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265668u;
label_265668:
    // 0x265668: 0x2a020285  slti        $v0, $s0, 0x285
    ctx->pc = 0x265668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)645) ? 1 : 0);
    // 0x26566c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265670u;
    {
        const bool branch_taken_0x265670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265670u;
        // 0x265674: 0x2a02028c  slti        $v0, $s0, 0x28C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)652) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265670) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265678u;
    // 0x265678: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x265678u;
    {
        const bool branch_taken_0x265678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265678) {
            ctx->pc = 0x26567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265678u;
            // 0x26567c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265680u;
label_265680:
    // 0x265680: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x265680u;
    {
        const bool branch_taken_0x265680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265680u;
        // 0x265684: 0x2a020019  slti        $v0, $s0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265680) {
            ctx->pc = 0x2656C0u;
            goto label_2656c0;
        }
    }
    ctx->pc = 0x265688u;
    // 0x265688: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265688u;
    {
        const bool branch_taken_0x265688 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265688u;
        // 0x26568c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265688) {
            ctx->pc = 0x2656ACu;
            goto label_2656ac;
        }
    }
    ctx->pc = 0x265690u;
    // 0x265690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265694: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26569c: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x26569Cu;
    SET_GPR_U32(ctx, 31, 0x2656A4u);
    ctx->pc = 0x2656A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26569Cu;
    // 0x2656a0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x26569Cu, 0x2656A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656A4u;
label_2656a4:
    // 0x2656a4: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2656A4u;
    {
        const bool branch_taken_0x2656a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656A4u;
        // 0x2656a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656a4) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x2656ACu;
label_2656ac:
    // 0x2656ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2656acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656b0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2656b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2656b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2656b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2656b8: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x2656B8u;
    {
        const bool branch_taken_0x2656b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656B8u;
        // 0x2656bc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656b8) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x2656C0u;
label_2656c0:
    // 0x2656c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2656c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2656c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2656C4u;
    {
        const bool branch_taken_0x2656c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656C4u;
        // 0x2656c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656c4) {
            ctx->pc = 0x2656D0u;
            goto label_2656d0;
        }
    }
    ctx->pc = 0x2656CCu;
    // 0x2656cc: 0x2a03001f  slti        $v1, $s0, 0x1F
    ctx->pc = 0x2656ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
label_2656d0:
    // 0x2656d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2656D0u;
    {
        const bool branch_taken_0x2656d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656D0u;
        // 0x2656d4: 0x2a020022  slti        $v0, $s0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)34) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656d0) {
            ctx->pc = 0x26570Cu;
            goto label_26570c;
        }
    }
    ctx->pc = 0x2656D8u;
    // 0x2656d8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2656D8u;
    {
        const bool branch_taken_0x2656d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656D8u;
        // 0x2656dc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656d8) {
            ctx->pc = 0x2656FCu;
            goto label_2656fc;
        }
    }
    ctx->pc = 0x2656E0u;
    // 0x2656e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2656e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656e4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2656e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2656e8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2656e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2656ec: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2656ECu;
    SET_GPR_U32(ctx, 31, 0x2656F4u);
    ctx->pc = 0x2656F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656ECu;
    // 0x2656f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2656ECu, 0x2656F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656F4u;
label_2656f4:
    // 0x2656f4: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2656F4u;
    {
        const bool branch_taken_0x2656f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656F4u;
        // 0x2656f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656f4) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x2656FCu;
label_2656fc:
    // 0x2656fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2656fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265700: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265704: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x265704u;
    {
        const bool branch_taken_0x265704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265704u;
        // 0x265708: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265704) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x26570Cu;
label_26570c:
    // 0x26570c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26570cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265710u;
    {
        const bool branch_taken_0x265710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265710u;
        // 0x265714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265710) {
            ctx->pc = 0x265724u;
            goto label_265724;
        }
    }
    ctx->pc = 0x265718u;
    // 0x265718: 0x2a020027  slti        $v0, $s0, 0x27
    ctx->pc = 0x265718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x26571c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26571Cu;
    {
        const bool branch_taken_0x26571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26571c) {
            ctx->pc = 0x265720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26571Cu;
            // 0x265720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265724u;
label_265724:
    // 0x265724: 0x2a020027  slti        $v0, $s0, 0x27
    ctx->pc = 0x265724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x265728: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26572c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26572Cu;
    {
        const bool branch_taken_0x26572c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26572Cu;
        // 0x265730: 0x2a02002d  slti        $v0, $s0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26572c) {
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265734u;
    // 0x265734: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x265734u;
    {
        const bool branch_taken_0x265734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265734) {
            ctx->pc = 0x265738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265734u;
            // 0x265738: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x26573Cu;
label_26573c:
    // 0x26573c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26573Cu;
    {
        const bool branch_taken_0x26573c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26573Cu;
        // 0x265740: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26573c) {
            ctx->pc = 0x2657A0u;
            goto label_2657a0;
        }
    }
    ctx->pc = 0x265744u;
    // 0x265744: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265744u;
    {
        const bool branch_taken_0x265744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265744u;
        // 0x265748: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265744) {
            ctx->pc = 0x265758u;
            goto label_265758;
        }
    }
    ctx->pc = 0x26574Cu;
    // 0x26574c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x26574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x265750: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265750u;
    {
        const bool branch_taken_0x265750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265750u;
        // 0x265754: 0x3a620008  xori        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265750) {
            ctx->pc = 0x265760u;
            goto label_265760;
        }
    }
    ctx->pc = 0x265758u;
label_265758:
    // 0x265758: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x265758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26575c: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x26575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
label_265760:
    // 0x265760: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x265760u;
    {
        const bool branch_taken_0x265760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265760u;
        // 0x265764: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265760) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265768u;
    // 0x265768: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265768u;
    {
        const bool branch_taken_0x265768 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265768u;
        // 0x26576c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265768) {
            ctx->pc = 0x26578Cu;
            goto label_26578c;
        }
    }
    ctx->pc = 0x265770u;
    // 0x265770: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x265770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265774: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26577c: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x26577Cu;
    SET_GPR_U32(ctx, 31, 0x265784u);
    ctx->pc = 0x265780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26577Cu;
    // 0x265780: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x26577Cu, 0x265784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265784u;
label_265784:
    // 0x265784: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x265784u;
    {
        const bool branch_taken_0x265784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265784u;
        // 0x265788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265784) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x26578Cu;
label_26578c:
    // 0x26578c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26578cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265790: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265798: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x265798u;
    {
        const bool branch_taken_0x265798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265798u;
        // 0x26579c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265798) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x2657A0u;
label_2657a0:
    // 0x2657a0: 0x2a03002d  slti        $v1, $s0, 0x2D
    ctx->pc = 0x2657a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x2657a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2657a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657a8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2657a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2657ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2657ACu;
    {
        const bool branch_taken_0x2657ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657ACu;
        // 0x2657b0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657ac) {
            ctx->pc = 0x2657B8u;
            goto label_2657b8;
        }
    }
    ctx->pc = 0x2657B4u;
    // 0x2657b4: 0x2a040033  slti        $a0, $s0, 0x33
    ctx->pc = 0x2657b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_2657b8:
    // 0x2657b8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2657B8u;
    {
        const bool branch_taken_0x2657b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657B8u;
        // 0x2657bc: 0x2a020033  slti        $v0, $s0, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657b8) {
            ctx->pc = 0x265828u;
            goto label_265828;
        }
    }
    ctx->pc = 0x2657C0u;
    // 0x2657c0: 0x12050008  beq         $s0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2657C0u;
    {
        const bool branch_taken_0x2657c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2657C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657C0u;
        // 0x2657c4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657c0) {
            ctx->pc = 0x2657E4u;
            goto label_2657e4;
        }
    }
    ctx->pc = 0x2657C8u;
    // 0x2657c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2657C8u;
    {
        const bool branch_taken_0x2657c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2657CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657C8u;
        // 0x2657cc: 0x3a620008  xori        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657c8) {
            ctx->pc = 0x2657E8u;
            goto label_2657e8;
        }
    }
    ctx->pc = 0x2657D0u;
    // 0x2657d0: 0x2a020033  slti        $v0, $s0, 0x33
    ctx->pc = 0x2657d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x2657d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2657D4u;
    {
        const bool branch_taken_0x2657d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657D4u;
        // 0x2657d8: 0x2a02002f  slti        $v0, $s0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657d4) {
            ctx->pc = 0x2657E4u;
            goto label_2657e4;
        }
    }
    ctx->pc = 0x2657DCu;
    // 0x2657dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2657DCu;
    {
        const bool branch_taken_0x2657dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657dc) {
            ctx->pc = 0x2657E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657DCu;
            // 0x2657e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2657E4u;
            goto label_2657e4;
        }
    }
    ctx->pc = 0x2657E4u;
label_2657e4:
    // 0x2657e4: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x2657e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
label_2657e8:
    // 0x2657e8: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2657E8u;
    {
        const bool branch_taken_0x2657e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657E8u;
        // 0x2657ec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657e8) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x2657F0u;
    // 0x2657f0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2657F0u;
    {
        const bool branch_taken_0x2657f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657F0u;
        // 0x2657f4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657f0) {
            ctx->pc = 0x265814u;
            goto label_265814;
        }
    }
    ctx->pc = 0x2657F8u;
    // 0x2657f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2657f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657fc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265804: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265804u;
    SET_GPR_U32(ctx, 31, 0x26580Cu);
    ctx->pc = 0x265808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265804u;
    // 0x265808: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265804u, 0x26580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26580Cu;
label_26580c:
    // 0x26580c: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x26580Cu;
    {
        const bool branch_taken_0x26580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26580Cu;
        // 0x265810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26580c) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265814u;
label_265814:
    // 0x265814: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x265814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265818: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26581c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26581cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265820: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x265820u;
    {
        const bool branch_taken_0x265820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265820u;
        // 0x265824: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265820) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x265828u;
label_265828:
    // 0x265828: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26582c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26582Cu;
    {
        const bool branch_taken_0x26582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26582Cu;
        // 0x265830: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26582c) {
            ctx->pc = 0x265838u;
            goto label_265838;
        }
    }
    ctx->pc = 0x265834u;
    // 0x265834: 0x2a030039  slti        $v1, $s0, 0x39
    ctx->pc = 0x265834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
label_265838:
    // 0x265838: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x265838u;
    {
        const bool branch_taken_0x265838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265838u;
        // 0x26583c: 0x2a020045  slti        $v0, $s0, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265838) {
            ctx->pc = 0x265874u;
            goto label_265874;
        }
    }
    ctx->pc = 0x265840u;
    // 0x265840: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265840u;
    {
        const bool branch_taken_0x265840 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265840u;
        // 0x265844: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265840) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x265848u;
    // 0x265848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26584c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x26584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265850: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x265850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265854: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265854u;
    SET_GPR_U32(ctx, 31, 0x26585Cu);
    ctx->pc = 0x265858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265854u;
    // 0x265858: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265854u, 0x26585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26585Cu;
label_26585c:
    // 0x26585c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x26585Cu;
    {
        const bool branch_taken_0x26585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26585Cu;
        // 0x265860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26585c) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265864u;
label_265864:
    // 0x265864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265868: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26586c: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26586Cu;
    {
        const bool branch_taken_0x26586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26586Cu;
        // 0x265870: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26586c) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x265874u;
label_265874:
    // 0x265874: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265878: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265878u;
    {
        const bool branch_taken_0x265878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265878u;
        // 0x26587c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265878) {
            ctx->pc = 0x265884u;
            goto label_265884;
        }
    }
    ctx->pc = 0x265880u;
    // 0x265880: 0x2a03007b  slti        $v1, $s0, 0x7B
    ctx->pc = 0x265880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)123) ? 1 : 0);
label_265884:
    // 0x265884: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x265884u;
    {
        const bool branch_taken_0x265884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265884u;
        // 0x265888: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265884) {
            ctx->pc = 0x265904u;
            goto label_265904;
        }
    }
    ctx->pc = 0x26588Cu;
    // 0x26588c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26588Cu;
    {
        const bool branch_taken_0x26588c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26588Cu;
        // 0x265890: 0x2a020075  slti        $v0, $s0, 0x75 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)117) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26588c) {
            ctx->pc = 0x2658C0u;
            goto label_2658c0;
        }
    }
    ctx->pc = 0x265894u;
    // 0x265894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265894u;
    {
        const bool branch_taken_0x265894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265894u;
        // 0x265898: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265894) {
            ctx->pc = 0x2658ACu;
            goto label_2658ac;
        }
    }
    ctx->pc = 0x26589Cu;
    // 0x26589c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26589Cu;
    {
        const bool branch_taken_0x26589c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2658A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26589Cu;
        // 0x2658a0: 0x3a620008  xori        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26589c) {
            ctx->pc = 0x2658C0u;
            goto label_2658c0;
        }
    }
    ctx->pc = 0x2658A4u;
    // 0x2658a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2658A4u;
    {
        const bool branch_taken_0x2658a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658a4) {
            ctx->pc = 0x2658C8u;
            goto label_2658c8;
        }
    }
    ctx->pc = 0x2658ACu;
label_2658ac:
    // 0x2658ac: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2658acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2658b0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658B0u;
    {
        const bool branch_taken_0x2658b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2658B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658B0u;
        // 0x2658b4: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658b0) {
            ctx->pc = 0x2658C0u;
            goto label_2658c0;
        }
    }
    ctx->pc = 0x2658B8u;
    // 0x2658b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658B8u;
    {
        const bool branch_taken_0x2658b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2658BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658B8u;
        // 0x2658bc: 0x3a620008  xori        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658b8) {
            ctx->pc = 0x2658C8u;
            goto label_2658c8;
        }
    }
    ctx->pc = 0x2658C0u;
label_2658c0:
    // 0x2658c0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2658c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2658c4: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x2658c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
label_2658c8:
    // 0x2658c8: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2658C8u;
    {
        const bool branch_taken_0x2658c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658C8u;
        // 0x2658cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658c8) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x2658D0u;
    // 0x2658d0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2658D0u;
    {
        const bool branch_taken_0x2658d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658D0u;
        // 0x2658d4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658d0) {
            ctx->pc = 0x2658F4u;
            goto label_2658f4;
        }
    }
    ctx->pc = 0x2658D8u;
    // 0x2658d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2658d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658dc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2658dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2658e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2658e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658e4: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2658E4u;
    SET_GPR_U32(ctx, 31, 0x2658ECu);
    ctx->pc = 0x2658E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2658E4u;
    // 0x2658e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2658E4u, 0x2658ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2658ECu;
label_2658ec:
    // 0x2658ec: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2658ECu;
    {
        const bool branch_taken_0x2658ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658ECu;
        // 0x2658f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658ec) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x2658F4u;
label_2658f4:
    // 0x2658f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2658f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658f8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2658f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2658fc: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2658FCu;
    {
        const bool branch_taken_0x2658fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658FCu;
        // 0x265900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658fc) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x265904u;
label_265904:
    // 0x265904: 0x2a0200c1  slti        $v0, $s0, 0xC1
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x265908: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26590c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26590Cu;
    {
        const bool branch_taken_0x26590c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26590Cu;
        // 0x265910: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26590c) {
            ctx->pc = 0x265918u;
            goto label_265918;
        }
    }
    ctx->pc = 0x265914u;
    // 0x265914: 0x2a0300c8  slti        $v1, $s0, 0xC8
    ctx->pc = 0x265914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
label_265918:
    // 0x265918: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x265918u;
    {
        const bool branch_taken_0x265918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265918u;
        // 0x26591c: 0x2602ff3f  addiu       $v0, $s0, -0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265918) {
            ctx->pc = 0x265950u;
            goto label_265950;
        }
    }
    ctx->pc = 0x265920u;
    // 0x265920: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x265924: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x265924u;
    {
        const bool branch_taken_0x265924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265924u;
        // 0x265928: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265924) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x26592Cu;
    // 0x26592c: 0x1280008b  beqz        $s4, . + 4 + (0x8B << 2)
    ctx->pc = 0x26592Cu;
    {
        const bool branch_taken_0x26592c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26592Cu;
        // 0x265930: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26592c) {
            ctx->pc = 0x265B5Cu;
            goto label_265b5c;
        }
    }
    ctx->pc = 0x265934u;
    // 0x265934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265938: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x26593c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26593cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265940: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265940u;
    SET_GPR_U32(ctx, 31, 0x265948u);
    ctx->pc = 0x265944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265940u;
    // 0x265944: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265940u, 0x265948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265948u;
label_265948:
    // 0x265948: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x265948u;
    {
        const bool branch_taken_0x265948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265948u;
        // 0x26594c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265948) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265950u;
label_265950:
    // 0x265950: 0x2a0200d2  slti        $v0, $s0, 0xD2
    ctx->pc = 0x265950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)210) ? 1 : 0);
    // 0x265954: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265958: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265958u;
    {
        const bool branch_taken_0x265958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265958u;
        // 0x26595c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265958) {
            ctx->pc = 0x265964u;
            goto label_265964;
        }
    }
    ctx->pc = 0x265960u;
    // 0x265960: 0x2a0300db  slti        $v1, $s0, 0xDB
    ctx->pc = 0x265960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)219) ? 1 : 0);
label_265964:
    // 0x265964: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x265964u;
    {
        const bool branch_taken_0x265964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265964u;
        // 0x265968: 0x240200d4  addiu       $v0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265964) {
            ctx->pc = 0x265998u;
            goto label_265998;
        }
    }
    ctx->pc = 0x26596Cu;
    // 0x26596c: 0x160200a7  bne         $s0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26596Cu;
    {
        const bool branch_taken_0x26596c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26596Cu;
        // 0x265970: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26596c) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265974u;
    // 0x265974: 0x12800079  beqz        $s4, . + 4 + (0x79 << 2)
    ctx->pc = 0x265974u;
    {
        const bool branch_taken_0x265974 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265974u;
        // 0x265978: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265974) {
            ctx->pc = 0x265B5Cu;
            goto label_265b5c;
        }
    }
    ctx->pc = 0x26597Cu;
    // 0x26597c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265980: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265988: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265988u;
    SET_GPR_U32(ctx, 31, 0x265990u);
    ctx->pc = 0x26598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265988u;
    // 0x26598c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265988u, 0x265990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265990u;
label_265990:
    // 0x265990: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x265990u;
    {
        const bool branch_taken_0x265990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265990u;
        // 0x265994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265990) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265998u;
label_265998:
    // 0x265998: 0x2a0200db  slti        $v0, $s0, 0xDB
    ctx->pc = 0x265998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)219) ? 1 : 0);
    // 0x26599c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2659a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2659A0u;
    {
        const bool branch_taken_0x2659a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659A0u;
        // 0x2659a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659a0) {
            ctx->pc = 0x2659ACu;
            goto label_2659ac;
        }
    }
    ctx->pc = 0x2659A8u;
    // 0x2659a8: 0x2a0300e1  slti        $v1, $s0, 0xE1
    ctx->pc = 0x2659a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)225) ? 1 : 0);
label_2659ac:
    // 0x2659ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2659ACu;
    {
        const bool branch_taken_0x2659ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659ACu;
        // 0x2659b0: 0x2a0200ed  slti        $v0, $s0, 0xED (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)237) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659ac) {
            ctx->pc = 0x2659E8u;
            goto label_2659e8;
        }
    }
    ctx->pc = 0x2659B4u;
    // 0x2659b4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2659B4u;
    {
        const bool branch_taken_0x2659b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659B4u;
        // 0x2659b8: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b4) {
            ctx->pc = 0x2659D8u;
            goto label_2659d8;
        }
    }
    ctx->pc = 0x2659BCu;
    // 0x2659bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2659bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659c0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2659c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2659c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2659c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2659c8: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2659C8u;
    SET_GPR_U32(ctx, 31, 0x2659D0u);
    ctx->pc = 0x2659CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659C8u;
    // 0x2659cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2659C8u, 0x2659D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659D0u;
label_2659d0:
    // 0x2659d0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2659D0u;
    {
        const bool branch_taken_0x2659d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659D0u;
        // 0x2659d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659d0) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x2659D8u;
label_2659d8:
    // 0x2659d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2659d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659dc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2659dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2659e0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2659E0u;
    {
        const bool branch_taken_0x2659e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659E0u;
        // 0x2659e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659e0) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x2659E8u;
label_2659e8:
    // 0x2659e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2659e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2659ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2659ECu;
    {
        const bool branch_taken_0x2659ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659ECu;
        // 0x2659f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659ec) {
            ctx->pc = 0x2659F8u;
            goto label_2659f8;
        }
    }
    ctx->pc = 0x2659F4u;
    // 0x2659f4: 0x2a0300fc  slti        $v1, $s0, 0xFC
    ctx->pc = 0x2659f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)252) ? 1 : 0);
label_2659f8:
    // 0x2659f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2659F8u;
    {
        const bool branch_taken_0x2659f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659F8u;
        // 0x2659fc: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659f8) {
            ctx->pc = 0x265A28u;
            goto label_265a28;
        }
    }
    ctx->pc = 0x265A00u;
    // 0x265a00: 0x16020082  bne         $s0, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x265A00u;
    {
        const bool branch_taken_0x265a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A00u;
        // 0x265a04: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a00) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265A08u;
    // 0x265a08: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a10: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265a14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x265a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265a18: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265A18u;
    SET_GPR_U32(ctx, 31, 0x265A20u);
    ctx->pc = 0x265A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A18u;
    // 0x265a1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265A18u, 0x265A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A20u;
label_265a20:
    // 0x265a20: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x265A20u;
    {
        const bool branch_taken_0x265a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A20u;
        // 0x265a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a20) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265A28u;
label_265a28:
    // 0x265a28: 0x2a0201e1  slti        $v0, $s0, 0x1E1
    ctx->pc = 0x265a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x265a2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265a30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265A30u;
    {
        const bool branch_taken_0x265a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A30u;
        // 0x265a34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a30) {
            ctx->pc = 0x265A3Cu;
            goto label_265a3c;
        }
    }
    ctx->pc = 0x265A38u;
    // 0x265a38: 0x2a0301ec  slti        $v1, $s0, 0x1EC
    ctx->pc = 0x265a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)492) ? 1 : 0);
label_265a3c:
    // 0x265a3c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x265A3Cu;
    {
        const bool branch_taken_0x265a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A3Cu;
        // 0x265a40: 0x240201e4  addiu       $v0, $zero, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a3c) {
            ctx->pc = 0x265AC0u;
            goto label_265ac0;
        }
    }
    ctx->pc = 0x265A44u;
    // 0x265a44: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265A44u;
    {
        const bool branch_taken_0x265a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A44u;
        // 0x265a48: 0x240201e6  addiu       $v0, $zero, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a44) {
            ctx->pc = 0x265A5Cu;
            goto label_265a5c;
        }
    }
    ctx->pc = 0x265A4Cu;
    // 0x265a4c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265A4Cu;
    {
        const bool branch_taken_0x265a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A4Cu;
        // 0x265a50: 0x240201e8  addiu       $v0, $zero, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a4c) {
            ctx->pc = 0x265A5Cu;
            goto label_265a5c;
        }
    }
    ctx->pc = 0x265A54u;
    // 0x265a54: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x265A54u;
    {
        const bool branch_taken_0x265a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A54u;
        // 0x265a58: 0x240201ea  addiu       $v0, $zero, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a54) {
            ctx->pc = 0x265A94u;
            goto label_265a94;
        }
    }
    ctx->pc = 0x265A5Cu;
label_265a5c:
    // 0x265a5c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265A5Cu;
    {
        const bool branch_taken_0x265a5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A5Cu;
        // 0x265a60: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a5c) {
            ctx->pc = 0x265A80u;
            goto label_265a80;
        }
    }
    ctx->pc = 0x265A64u;
    // 0x265a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a68: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265a6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x265a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265a70: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265A70u;
    SET_GPR_U32(ctx, 31, 0x265A78u);
    ctx->pc = 0x265A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265A70u;
    // 0x265a74: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265A70u, 0x265A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A78u;
label_265a78:
    // 0x265a78: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x265A78u;
    {
        const bool branch_taken_0x265a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A78u;
        // 0x265a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a78) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265A80u;
label_265a80:
    // 0x265a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a84: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265a88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x265a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265a8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x265A8Cu;
    {
        const bool branch_taken_0x265a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A8Cu;
        // 0x265a90: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a8c) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x265A94u;
label_265a94:
    // 0x265a94: 0x1602005d  bne         $s0, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x265A94u;
    {
        const bool branch_taken_0x265a94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A94u;
        // 0x265a98: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a94) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265A9Cu;
    // 0x265a9c: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x265A9Cu;
    {
        const bool branch_taken_0x265a9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A9Cu;
        // 0x265aa0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a9c) {
            ctx->pc = 0x265B5Cu;
            goto label_265b5c;
        }
    }
    ctx->pc = 0x265AA4u;
    // 0x265aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265aa8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265aac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265ab0: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265AB0u;
    SET_GPR_U32(ctx, 31, 0x265AB8u);
    ctx->pc = 0x265AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265AB0u;
    // 0x265ab4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265AB0u, 0x265AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AB8u;
label_265ab8:
    // 0x265ab8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x265AB8u;
    {
        const bool branch_taken_0x265ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AB8u;
        // 0x265abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ab8) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265AC0u;
label_265ac0:
    // 0x265ac0: 0x2a0201ec  slti        $v0, $s0, 0x1EC
    ctx->pc = 0x265ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)492) ? 1 : 0);
    // 0x265ac4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x265ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ac8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265acc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265ACCu;
    {
        const bool branch_taken_0x265acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265ACCu;
        // 0x265ad0: 0x240401ec  addiu       $a0, $zero, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265acc) {
            ctx->pc = 0x265AD8u;
            goto label_265ad8;
        }
    }
    ctx->pc = 0x265AD4u;
    // 0x265ad4: 0x2a0301f2  slti        $v1, $s0, 0x1F2
    ctx->pc = 0x265ad4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)498) ? 1 : 0);
label_265ad8:
    // 0x265ad8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x265AD8u;
    {
        const bool branch_taken_0x265ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AD8u;
        // 0x265adc: 0x240201f5  addiu       $v0, $zero, 0x1F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ad8) {
            ctx->pc = 0x265B30u;
            goto label_265b30;
        }
    }
    ctx->pc = 0x265AE0u;
    // 0x265ae0: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265AE0u;
    {
        const bool branch_taken_0x265ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x265AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AE0u;
        // 0x265ae4: 0x240201ee  addiu       $v0, $zero, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ae0) {
            ctx->pc = 0x265AF8u;
            goto label_265af8;
        }
    }
    ctx->pc = 0x265AE8u;
    // 0x265ae8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265AE8u;
    {
        const bool branch_taken_0x265ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x265AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AE8u;
        // 0x265aec: 0x240201f0  addiu       $v0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ae8) {
            ctx->pc = 0x265AF8u;
            goto label_265af8;
        }
    }
    ctx->pc = 0x265AF0u;
    // 0x265af0: 0x16020046  bne         $s0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x265AF0u;
    {
        const bool branch_taken_0x265af0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AF0u;
        // 0x265af4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265af0) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265AF8u;
label_265af8:
    // 0x265af8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265AF8u;
    {
        const bool branch_taken_0x265af8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AF8u;
        // 0x265afc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265af8) {
            ctx->pc = 0x265B1Cu;
            goto label_265b1c;
        }
    }
    ctx->pc = 0x265B00u;
    // 0x265b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b04: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265b08: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265b0c: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265B0Cu;
    SET_GPR_U32(ctx, 31, 0x265B14u);
    ctx->pc = 0x265B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B0Cu;
    // 0x265b10: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265B0Cu, 0x265B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B14u;
label_265b14:
    // 0x265b14: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x265B14u;
    {
        const bool branch_taken_0x265b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B14u;
        // 0x265b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b14) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265B1Cu;
label_265b1c:
    // 0x265b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b20: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265b24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x265b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265b28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x265B28u;
    {
        const bool branch_taken_0x265b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B28u;
        // 0x265b2c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b28) {
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x265B30u;
label_265b30:
    // 0x265b30: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x265B30u;
    {
        const bool branch_taken_0x265b30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x265B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B30u;
        // 0x265b34: 0x2a020269  slti        $v0, $s0, 0x269 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)617) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b30) {
            ctx->pc = 0x265B94u;
            goto label_265b94;
        }
    }
    ctx->pc = 0x265B38u;
    // 0x265b38: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x265B38u;
    {
        const bool branch_taken_0x265b38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B38u;
        // 0x265b3c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b38) {
            ctx->pc = 0x265B5Cu;
            goto label_265b5c;
        }
    }
    ctx->pc = 0x265B40u;
    // 0x265b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b44: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265b48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265b4c: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x265B4Cu;
    SET_GPR_U32(ctx, 31, 0x265B54u);
    ctx->pc = 0x265B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B4Cu;
    // 0x265b50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x265B4Cu, 0x265B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B54u;
label_265b54:
    // 0x265b54: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x265B54u;
    {
        const bool branch_taken_0x265b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B54u;
        // 0x265b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b54) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265B5Cu;
label_265b5c:
    // 0x265b5c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x265b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x265b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b64: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265b68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265b6c:
    // 0x265b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x265b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265b70:
    // 0x265b70: 0xc13b672  jal         func_4ED9C8
    ctx->pc = 0x265B70u;
    SET_GPR_U32(ctx, 31, 0x265B78u);
    ctx->pc = 0x4ED9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED9C8u, 0x265B70u, 0x265B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B78u;
label_265b78:
    // 0x265b78: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x265b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x265b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b84: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x265B84u;
    SET_GPR_U32(ctx, 31, 0x265B8Cu);
    ctx->pc = 0x265B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B84u;
    // 0x265b88: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x265B84u, 0x265B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B8Cu;
label_265b8c:
    // 0x265b8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x265B8Cu;
    {
        const bool branch_taken_0x265b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B8Cu;
        // 0x265b90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b8c) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265B94u;
label_265b94:
    // 0x265b94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265b98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265B98u;
    {
        const bool branch_taken_0x265b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B98u;
        // 0x265b9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b98) {
            ctx->pc = 0x265BA4u;
            goto label_265ba4;
        }
    }
    ctx->pc = 0x265BA0u;
    // 0x265ba0: 0x2a03026d  slti        $v1, $s0, 0x26D
    ctx->pc = 0x265ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)621) ? 1 : 0);
label_265ba4:
    // 0x265ba4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x265BA4u;
    {
        const bool branch_taken_0x265ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BA4u;
        // 0x265ba8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ba4) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265BACu;
    // 0x265bac: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x265BACu;
    {
        const bool branch_taken_0x265bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BACu;
        // 0x265bb0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bac) {
            ctx->pc = 0x265BE0u;
            goto label_265be0;
        }
    }
    ctx->pc = 0x265BB4u;
    // 0x265bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bb8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bc0: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x265BC0u;
    SET_GPR_U32(ctx, 31, 0x265BC8u);
    ctx->pc = 0x265BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BC0u;
    // 0x265bc4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x265BC0u, 0x265BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BC8u;
label_265bc8:
    // 0x265bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265bcc:
    // 0x265bcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bd0: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x265BD0u;
    SET_GPR_U32(ctx, 31, 0x265BD8u);
    ctx->pc = 0x265BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BD0u;
    // 0x265bd4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x265BD0u, 0x265BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BD8u;
label_265bd8:
    // 0x265bd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265BD8u;
    {
        const bool branch_taken_0x265bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BD8u;
        // 0x265bdc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bd8) {
            ctx->pc = 0x265C0Cu;
            goto label_265c0c;
        }
    }
    ctx->pc = 0x265BE0u;
label_265be0:
    // 0x265be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265be4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x265be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bec: 0xc13b686  jal         func_4EDA18
    ctx->pc = 0x265BECu;
    SET_GPR_U32(ctx, 31, 0x265BF4u);
    ctx->pc = 0x265BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265BECu;
    // 0x265bf0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDA18u, 0x265BECu, 0x265BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BF4u;
label_265bf4:
    // 0x265bf4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x265bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x265bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c00: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x265C00u;
    SET_GPR_U32(ctx, 31, 0x265C08u);
    ctx->pc = 0x265C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C00u;
    // 0x265c04: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x265C00u, 0x265C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C08u;
label_265c08:
    // 0x265c08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x265c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_265c0c:
    // 0x265c0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x265c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265c10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x265c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265c14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x265c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265c18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x265c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265c20: 0x3e00008  jr          $ra
    ctx->pc = 0x265C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C20u;
        // 0x265c24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265C28u;
}
