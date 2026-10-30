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

// Function: sub_001977C8
// Address: 0x1977c8 - 0x197900
void sub_001977C8_0x1977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001977C8_0x1977c8");
#endif

    switch (ctx->pc) {
        case 0x197800u: goto label_197800;
        case 0x197838u: goto label_197838;
        case 0x197858u: goto label_197858;
        case 0x197878u: goto label_197878;
        case 0x197898u: goto label_197898;
        case 0x1978b8u: goto label_1978b8;
        case 0x1978d8u: goto label_1978d8;
        default: break;
    }

    ctx->pc = 0x1977c8u;

    // 0x1977c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1977cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1977ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1977d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1977d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1977d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1977d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1977d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1977dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1977dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1977e0: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x1977e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1977e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1977E4u;
    {
        const bool branch_taken_0x1977e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977E4u;
        // 0x1977e8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977e4) {
            ctx->pc = 0x197808u;
            goto label_197808;
        }
    }
    ctx->pc = 0x1977ECu;
    // 0x1977ec: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x1977ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1977f0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1977F0u;
    {
        const bool branch_taken_0x1977f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977F0u;
        // 0x1977f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977f0) {
            ctx->pc = 0x1978E4u;
            goto label_1978e4;
        }
    }
    ctx->pc = 0x1977F8u;
    // 0x1977f8: 0xc060b5c  jal         func_182D70
    ctx->pc = 0x1977F8u;
    SET_GPR_U32(ctx, 31, 0x197800u);
    ctx->pc = 0x182D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D70u, 0x1977F8u, 0x197800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197800u;
label_197800:
    // 0x197800: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x197800u;
    {
        const bool branch_taken_0x197800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197800) {
            ctx->pc = 0x197804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197800u;
            // 0x197804: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197810u;
            goto label_197810;
        }
    }
    ctx->pc = 0x197808u;
label_197808:
    // 0x197808: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x197808u;
    {
        const bool branch_taken_0x197808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197808u;
        // 0x19780c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197808) {
            ctx->pc = 0x1978E4u;
            goto label_1978e4;
        }
    }
    ctx->pc = 0x197810u;
label_197810:
    // 0x197810: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x197810u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x197814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x197814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x197818: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x197818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19781c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19781Cu;
    {
        const bool branch_taken_0x19781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19781Cu;
        // 0x197820: 0x52880b  movn        $s1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19781c) {
            ctx->pc = 0x197838u;
            goto label_197838;
        }
    }
    ctx->pc = 0x197824u;
    // 0x197824: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197828: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x19782c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19782cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197830: 0xc113a46  jal         func_44E918
    ctx->pc = 0x197830u;
    SET_GPR_U32(ctx, 31, 0x197838u);
    ctx->pc = 0x197834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197830u;
    // 0x197834: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x197830u, 0x197838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197838u;
label_197838:
    // 0x197838: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19783c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19783cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x197840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197840u;
    {
        const bool branch_taken_0x197840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197840u;
        // 0x197844: 0x2605004c  addiu       $a1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197840) {
            ctx->pc = 0x197858u;
            goto label_197858;
        }
    }
    ctx->pc = 0x197848u;
    // 0x197848: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19784c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19784cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197850: 0xc113a46  jal         func_44E918
    ctx->pc = 0x197850u;
    SET_GPR_U32(ctx, 31, 0x197858u);
    ctx->pc = 0x197854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197850u;
    // 0x197854: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x197850u, 0x197858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197858u;
label_197858:
    // 0x197858: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19785c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x197860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197860u;
    {
        const bool branch_taken_0x197860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197860u;
        // 0x197864: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197860) {
            ctx->pc = 0x197878u;
            goto label_197878;
        }
    }
    ctx->pc = 0x197868u;
    // 0x197868: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19786c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x197870: 0xc113a46  jal         func_44E918
    ctx->pc = 0x197870u;
    SET_GPR_U32(ctx, 31, 0x197878u);
    ctx->pc = 0x197874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197870u;
    // 0x197874: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x197870u, 0x197878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197878u;
label_197878:
    // 0x197878: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19787c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x197880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197880u;
    {
        const bool branch_taken_0x197880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197880u;
        // 0x197884: 0x2605005c  addiu       $a1, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197880) {
            ctx->pc = 0x197898u;
            goto label_197898;
        }
    }
    ctx->pc = 0x197888u;
    // 0x197888: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19788c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x197890: 0xc113a46  jal         func_44E918
    ctx->pc = 0x197890u;
    SET_GPR_U32(ctx, 31, 0x197898u);
    ctx->pc = 0x197894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197890u;
    // 0x197894: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x197890u, 0x197898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197898u;
label_197898:
    // 0x197898: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19789c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1978a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1978A0u;
    {
        const bool branch_taken_0x1978a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978A0u;
        // 0x1978a4: 0x26050064  addiu       $a1, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978a0) {
            ctx->pc = 0x1978B8u;
            goto label_1978b8;
        }
    }
    ctx->pc = 0x1978A8u;
    // 0x1978a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1978ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1978acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1978b0: 0xc113a46  jal         func_44E918
    ctx->pc = 0x1978B0u;
    SET_GPR_U32(ctx, 31, 0x1978B8u);
    ctx->pc = 0x1978B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978B0u;
    // 0x1978b4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x1978B0u, 0x1978B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978B8u;
label_1978b8:
    // 0x1978b8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1978bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1978bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1978c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1978C0u;
    {
        const bool branch_taken_0x1978c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C0u;
        // 0x1978c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978c0) {
            ctx->pc = 0x1978D8u;
            goto label_1978d8;
        }
    }
    ctx->pc = 0x1978C8u;
    // 0x1978c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1978cc: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1978d0: 0xc113a46  jal         func_44E918
    ctx->pc = 0x1978D0u;
    SET_GPR_U32(ctx, 31, 0x1978D8u);
    ctx->pc = 0x1978D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978D0u;
    // 0x1978d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E918u, 0x1978D0u, 0x1978D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978D8u;
label_1978d8:
    // 0x1978d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1978dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1978dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1978e0: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x1978e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
label_1978e4:
    // 0x1978e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1978e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1978e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1978e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1978ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1978ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1978f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1978f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1978f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1978F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978F4u;
        // 0x1978f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1978F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1978FCu;
    // 0x1978fc: 0x0  nop
    ctx->pc = 0x1978fcu;
    // NOP
    ctx->pc = 0x197900u;
}
