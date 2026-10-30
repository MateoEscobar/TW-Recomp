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

// Function: sub_00225FF0
// Address: 0x225ff0 - 0x226168
void sub_00225FF0_0x225ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225FF0_0x225ff0");
#endif

    switch (ctx->pc) {
        case 0x226014u: goto label_226014;
        case 0x226028u: goto label_226028;
        case 0x226038u: goto label_226038;
        case 0x226050u: goto label_226050;
        case 0x226060u: goto label_226060;
        case 0x226070u: goto label_226070;
        case 0x2260c4u: goto label_2260c4;
        case 0x2260d0u: goto label_2260d0;
        case 0x2260ecu: goto label_2260ec;
        case 0x22611cu: goto label_22611c;
        default: break;
    }

    ctx->pc = 0x225ff0u;

    // 0x225ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225ff4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x225ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x225ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ffc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x226000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x226000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x226004: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x226004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x226008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22600c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x22600Cu;
    SET_GPR_U32(ctx, 31, 0x226014u);
    ctx->pc = 0x226010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22600Cu;
    // 0x226010: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22600Cu, 0x226014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226014u;
label_226014:
    // 0x226014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x226014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226018: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x226018u;
    {
        const bool branch_taken_0x226018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226018u;
        // 0x22601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226018) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226020u;
    // 0x226020: 0xc088e60  jal         func_223980
    ctx->pc = 0x226020u;
    SET_GPR_U32(ctx, 31, 0x226028u);
    ctx->pc = 0x226024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226020u;
    // 0x226024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x226020u, 0x226028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226028u;
    {
        const bool branch_taken_0x226028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226028) {
            ctx->pc = 0x226040u;
            goto label_226040;
        }
    }
    ctx->pc = 0x226030u;
    // 0x226030: 0xc088e40  jal         func_223900
    ctx->pc = 0x226030u;
    SET_GPR_U32(ctx, 31, 0x226038u);
    ctx->pc = 0x226034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226030u;
    // 0x226034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x226030u, 0x226038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226038u;
label_226038:
    // 0x226038: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x226038u;
    {
        const bool branch_taken_0x226038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226038u;
        // 0x22603c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226038) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226040u;
label_226040:
    // 0x226040: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x226044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226048: 0xc089998  jal         func_226660
    ctx->pc = 0x226048u;
    SET_GPR_U32(ctx, 31, 0x226050u);
    ctx->pc = 0x22604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226048u;
    // 0x22604c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x226048u, 0x226050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226050u;
    {
        const bool branch_taken_0x226050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226050u;
        // 0x226054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226050) {
            ctx->pc = 0x226078u;
            goto label_226078;
        }
    }
    ctx->pc = 0x226058u;
    // 0x226058: 0xc089998  jal         func_226660
    ctx->pc = 0x226058u;
    SET_GPR_U32(ctx, 31, 0x226060u);
    ctx->pc = 0x22605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226058u;
    // 0x22605c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x226058u, 0x226060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226060u;
label_226060:
    // 0x226060: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x226060u;
    {
        const bool branch_taken_0x226060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226060u;
        // 0x226064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226060) {
            ctx->pc = 0x226144u;
            goto label_226144;
        }
    }
    ctx->pc = 0x226068u;
    // 0x226068: 0xc089998  jal         func_226660
    ctx->pc = 0x226068u;
    SET_GPR_U32(ctx, 31, 0x226070u);
    ctx->pc = 0x22606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226068u;
    // 0x22606c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x226068u, 0x226070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226070u;
label_226070:
    // 0x226070: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x226070u;
    {
        const bool branch_taken_0x226070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226070u;
        // 0x226074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226070) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226078u;
label_226078:
    // 0x226078: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x22607c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x22607Cu;
    {
        const bool branch_taken_0x22607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22607Cu;
        // 0x226080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22607c) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226084u;
    // 0x226084: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x226088: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x226088u;
    {
        const bool branch_taken_0x226088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226088u;
        // 0x22608c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226088) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226090u;
    // 0x226090: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x226094: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x226098: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x226098u;
    {
        const bool branch_taken_0x226098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226098u;
        // 0x22609c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226098) {
            ctx->pc = 0x226100u;
            goto label_226100;
        }
    }
    ctx->pc = 0x2260A0u;
    // 0x2260a0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2260a4: 0x8c645708  lw          $a0, 0x5708($v1)
    ctx->pc = 0x2260a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22280)));
    // 0x2260a8: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2260A8u;
    {
        const bool branch_taken_0x2260a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260A8u;
        // 0x2260ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260a8) {
            ctx->pc = 0x226144u;
            goto label_226144;
        }
    }
    ctx->pc = 0x2260B0u;
    // 0x2260b0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2260b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2260b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2260b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260b8: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
    // 0x2260bc: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2260BCu;
    SET_GPR_U32(ctx, 31, 0x2260C4u);
    ctx->pc = 0x2260C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260BCu;
    // 0x2260c0: 0x26240257  addiu       $a0, $s1, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2260BCu, 0x2260C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260C4u;
label_2260c4:
    // 0x2260c4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2260C4u;
    {
        const bool branch_taken_0x2260c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2260c4) {
            ctx->pc = 0x2260C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2260C4u;
            // 0x2260c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2260F8u;
            goto label_2260f8;
        }
    }
    ctx->pc = 0x2260CCu;
    // 0x2260cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2260ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2260d0:
    // 0x2260d0: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x2260d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2260d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2260D4u;
    {
        const bool branch_taken_0x2260d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260D4u;
        // 0x2260d8: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260d4) {
            ctx->pc = 0x2260F8u;
            goto label_2260f8;
        }
    }
    ctx->pc = 0x2260DCu;
    // 0x2260dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2260dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260e0: 0x822501b0  lb          $a1, 0x1B0($s1)
    ctx->pc = 0x2260e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2260e4: 0xc107908  jal         func_41E420
    ctx->pc = 0x2260E4u;
    SET_GPR_U32(ctx, 31, 0x2260ECu);
    ctx->pc = 0x2260E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260E4u;
    // 0x2260e8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2260E4u, 0x2260ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260ECu;
label_2260ec:
    // 0x2260ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2260ECu;
    {
        const bool branch_taken_0x2260ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260ECu;
        // 0x2260f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260ec) {
            ctx->pc = 0x2260D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2260d0;
        }
    }
    ctx->pc = 0x2260F4u;
    // 0x2260f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2260f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2260f8:
    // 0x2260f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2260F8u;
    {
        const bool branch_taken_0x2260f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260F8u;
        // 0x2260fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260f8) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226100u;
label_226100:
    // 0x226100: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x226104: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226108: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x226108u;
    {
        const bool branch_taken_0x226108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226108u;
        // 0x22610c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226108) {
            ctx->pc = 0x226144u;
            goto label_226144;
        }
    }
    ctx->pc = 0x226110u;
    // 0x226110: 0x26240257  addiu       $a0, $s1, 0x257
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 599));
    // 0x226114: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x226114u;
    SET_GPR_U32(ctx, 31, 0x22611Cu);
    ctx->pc = 0x226118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226114u;
    // 0x226118: 0x24a5a540  addiu       $a1, $a1, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x226114u, 0x22611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22611Cu;
label_22611c:
    // 0x22611c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22611Cu;
    {
        const bool branch_taken_0x22611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22611Cu;
        // 0x226120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22611c) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226124u;
    // 0x226124: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x226128: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226128u;
    {
        const bool branch_taken_0x226128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226128u;
        // 0x22612c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226128) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226130u;
    // 0x226130: 0x82230254  lb          $v1, 0x254($s1)
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x226134: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226134u;
    {
        const bool branch_taken_0x226134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226134u;
        // 0x226138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226134) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x22613Cu;
    // 0x22613c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22613Cu;
    {
        const bool branch_taken_0x22613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22613Cu;
        // 0x226140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22613c) {
            ctx->pc = 0x226148u;
            goto label_226148;
        }
    }
    ctx->pc = 0x226144u;
label_226144:
    // 0x226144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226148:
    // 0x226148: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x226148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22614c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22614cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226154: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x226154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22615c: 0x3e00008  jr          $ra
    ctx->pc = 0x22615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22615Cu;
        // 0x226160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226164u;
    // 0x226164: 0x0  nop
    ctx->pc = 0x226164u;
    // NOP
    ctx->pc = 0x226168u;
}
