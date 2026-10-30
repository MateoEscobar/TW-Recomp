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

// Function: sub_00311F78
// Address: 0x311f78 - 0x312208
void sub_00311F78_0x311f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311F78_0x311f78");
#endif

    switch (ctx->pc) {
        case 0x311fe8u: goto label_311fe8;
        case 0x312018u: goto label_312018;
        case 0x312020u: goto label_312020;
        case 0x312028u: goto label_312028;
        case 0x312050u: goto label_312050;
        case 0x312060u: goto label_312060;
        case 0x312074u: goto label_312074;
        case 0x312094u: goto label_312094;
        case 0x3120a8u: goto label_3120a8;
        case 0x312104u: goto label_312104;
        case 0x312118u: goto label_312118;
        case 0x312184u: goto label_312184;
        case 0x3121a0u: goto label_3121a0;
        case 0x3121acu: goto label_3121ac;
        case 0x3121b8u: goto label_3121b8;
        default: break;
    }

    ctx->pc = 0x311f78u;

    // 0x311f78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x311f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x311f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311f80: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x311f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x311f84: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x311f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x311f88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x311f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x311f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x311f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f94: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x311f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x311f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x311f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x311f9c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x311f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x311fa0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x311fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x311fa4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x311fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x311fa8: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x311FA8u;
    {
        const bool branch_taken_0x311fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x311FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FA8u;
        // 0x311fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fa8) {
            ctx->pc = 0x311FF4u;
            goto label_311ff4;
        }
    }
    ctx->pc = 0x311FB0u;
    // 0x311fb0: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x311fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x311fb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x311FB4u;
    {
        const bool branch_taken_0x311fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FB4u;
        // 0x311fb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fb4) {
            ctx->pc = 0x311FD8u;
            goto label_311fd8;
        }
    }
    ctx->pc = 0x311FBCu;
    // 0x311fbc: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x311fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x311fc0: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x311fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
    // 0x311fc4: 0x54600084  bnel        $v1, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x311FC4u;
    {
        const bool branch_taken_0x311fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311fc4) {
            ctx->pc = 0x311FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311FC4u;
            // 0x311fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3121D8u;
            goto label_3121d8;
        }
    }
    ctx->pc = 0x311FCCu;
    // 0x311fcc: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x311fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x311fd0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x311FD0u;
    {
        const bool branch_taken_0x311fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x311fd0) {
            ctx->pc = 0x311FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311FD0u;
            // 0x311fd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311FE0u;
            goto label_311fe0;
        }
    }
    ctx->pc = 0x311FD8u;
label_311fd8:
    // 0x311fd8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x311FD8u;
    {
        const bool branch_taken_0x311fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FD8u;
        // 0x311fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fd8) {
            ctx->pc = 0x3121D8u;
            goto label_3121d8;
        }
    }
    ctx->pc = 0x311FE0u;
label_311fe0:
    // 0x311fe0: 0xc059856  jal         func_166158
    ctx->pc = 0x311FE0u;
    SET_GPR_U32(ctx, 31, 0x311FE8u);
    ctx->pc = 0x311FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FE0u;
    // 0x311fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x311FE0u, 0x311FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FE8u;
label_311fe8:
    // 0x311fe8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x311fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311fec: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x311fecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x311ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311ff4:
    // 0x311ff4: 0x16020065  bne         $s0, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x311FF4u;
    {
        const bool branch_taken_0x311ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x311FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FF4u;
        // 0x311ff8: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ff4) {
            ctx->pc = 0x31218Cu;
            goto label_31218c;
        }
    }
    ctx->pc = 0x311FFCu;
    // 0x311ffc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x311ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312000: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312004: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x312004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312008: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x312008u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
    // 0x31200c: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x31200cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x312010: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x312010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312014: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x312014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_312018:
    // 0x312018: 0xc137826  jal         func_4DE098
    ctx->pc = 0x312018u;
    SET_GPR_U32(ctx, 31, 0x312020u);
    ctx->pc = 0x31201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312018u;
    // 0x31201c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x312018u, 0x312020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312020u;
label_312020:
    // 0x312020: 0xc0e409a  jal         func_390268
    ctx->pc = 0x312020u;
    SET_GPR_U32(ctx, 31, 0x312028u);
    ctx->pc = 0x312024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312020u;
    // 0x312024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x312020u, 0x312028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312028u;
label_312028:
    // 0x312028: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x312028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31202c: 0x5240004a  beql        $s2, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x31202Cu;
    {
        const bool branch_taken_0x31202c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31202c) {
            ctx->pc = 0x312030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31202Cu;
            // 0x312030: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312034u;
    // 0x312034: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x312034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x312038: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x312038u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31203c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31203cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312040: 0x50570045  beql        $v0, $s7, . + 4 + (0x45 << 2)
    ctx->pc = 0x312040u;
    {
        const bool branch_taken_0x312040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x312040) {
            ctx->pc = 0x312044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312040u;
            // 0x312044: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312048u;
    // 0x312048: 0xc087502  jal         func_21D408
    ctx->pc = 0x312048u;
    SET_GPR_U32(ctx, 31, 0x312050u);
    ctx->pc = 0x31204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312048u;
    // 0x31204c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312048u, 0x312050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312050u;
label_312050:
    // 0x312050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312054: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x312054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x312058: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x312058u;
    SET_GPR_U32(ctx, 31, 0x312060u);
    ctx->pc = 0x31205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312058u;
    // 0x31205c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x312058u, 0x312060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312060u;
label_312060:
    // 0x312060: 0x5c40003d  bgtzl       $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x312060u;
    {
        const bool branch_taken_0x312060 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x312060) {
            ctx->pc = 0x312064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312060u;
            // 0x312064: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312068u;
    // 0x312068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31206c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x31206Cu;
    SET_GPR_U32(ctx, 31, 0x312074u);
    ctx->pc = 0x312070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31206Cu;
    // 0x312070: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31206Cu, 0x312074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312074u;
label_312074:
    // 0x312074: 0x5c400038  bgtzl       $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x312074u;
    {
        const bool branch_taken_0x312074 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x312074) {
            ctx->pc = 0x312078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312074u;
            // 0x312078: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x31207Cu;
    // 0x31207c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x31207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x312080: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x312080u;
    {
        const bool branch_taken_0x312080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312080) {
            ctx->pc = 0x312084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312080u;
            // 0x312084: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3120F0u;
            goto label_3120f0;
        }
    }
    ctx->pc = 0x312088u;
    // 0x312088: 0x26a4b8a0  addiu       $a0, $s5, -0x4760
    ctx->pc = 0x312088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949024));
    // 0x31208c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31208Cu;
    SET_GPR_U32(ctx, 31, 0x312094u);
    ctx->pc = 0x312090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31208Cu;
    // 0x312090: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31208Cu, 0x312094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312094u;
label_312094:
    // 0x312094: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x312094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x312098: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x312098u;
    {
        const bool branch_taken_0x312098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312098u;
        // 0x31209c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312098) {
            ctx->pc = 0x3120ECu;
            goto label_3120ec;
        }
    }
    ctx->pc = 0x3120A0u;
    // 0x3120a0: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x3120A0u;
    SET_GPR_U32(ctx, 31, 0x3120A8u);
    ctx->pc = 0x3120A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120A0u;
    // 0x3120a4: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3120A0u, 0x3120A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120A8u;
label_3120a8:
    // 0x3120a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3120a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120ac: 0x5074002a  beql        $v1, $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x3120ACu;
    {
        const bool branch_taken_0x3120ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x3120ac) {
            ctx->pc = 0x3120B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120ACu;
            // 0x3120b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x3120B4u;
    // 0x3120b4: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3120B4u;
    {
        const bool branch_taken_0x3120b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3120B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120B4u;
        // 0x3120b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120b4) {
            ctx->pc = 0x3120D8u;
            goto label_3120d8;
        }
    }
    ctx->pc = 0x3120BCu;
    // 0x3120bc: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x3120bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3120c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3120c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3120c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3120C4u;
    {
        const bool branch_taken_0x3120c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3120c4) {
            ctx->pc = 0x3120C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120C4u;
            // 0x3120c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3120D8u;
            goto label_3120d8;
        }
    }
    ctx->pc = 0x3120CCu;
    // 0x3120cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3120ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3120d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3120d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3120d4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x3120d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3120d8:
    // 0x3120d8: 0x9442003c  lhu         $v0, 0x3C($v0)
    ctx->pc = 0x3120d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x3120dc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3120DCu;
    {
        const bool branch_taken_0x3120dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3120dc) {
            ctx->pc = 0x3120E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120DCu;
            // 0x3120e0: 0xae320034  sw          $s2, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312154u;
            goto label_312154;
        }
    }
    ctx->pc = 0x3120E4u;
    // 0x3120e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3120E4u;
    {
        const bool branch_taken_0x3120e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120E4u;
        // 0x3120e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120e4) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x3120ECu;
label_3120ec:
    // 0x3120ec: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3120f0:
    // 0x3120f0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3120F0u;
    {
        const bool branch_taken_0x3120f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3120f0) {
            ctx->pc = 0x3120F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120F0u;
            // 0x3120f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x3120F8u;
    // 0x3120f8: 0x26a4b8a0  addiu       $a0, $s5, -0x4760
    ctx->pc = 0x3120f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949024));
    // 0x3120fc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3120FCu;
    SET_GPR_U32(ctx, 31, 0x312104u);
    ctx->pc = 0x312100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120FCu;
    // 0x312100: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3120FCu, 0x312104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312104u;
label_312104:
    // 0x312104: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x312104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x312108: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x312108u;
    {
        const bool branch_taken_0x312108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312108u;
        // 0x31210c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312108) {
            ctx->pc = 0x312154u;
            goto label_312154;
        }
    }
    ctx->pc = 0x312110u;
    // 0x312110: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x312110u;
    SET_GPR_U32(ctx, 31, 0x312118u);
    ctx->pc = 0x312114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312110u;
    // 0x312114: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x312110u, 0x312118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312118u;
label_312118:
    // 0x312118: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31211c: 0x5074000e  beql        $v1, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x31211Cu;
    {
        const bool branch_taken_0x31211c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x31211c) {
            ctx->pc = 0x312120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31211Cu;
            // 0x312120: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312124u;
    // 0x312124: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x312124u;
    {
        const bool branch_taken_0x312124 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312124u;
        // 0x312128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312124) {
            ctx->pc = 0x312148u;
            goto label_312148;
        }
    }
    ctx->pc = 0x31212Cu;
    // 0x31212c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x31212cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x312130: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x312130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x312134: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x312134u;
    {
        const bool branch_taken_0x312134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312134) {
            ctx->pc = 0x312138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312134u;
            // 0x312138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312148u;
            goto label_312148;
        }
    }
    ctx->pc = 0x31213Cu;
    // 0x31213c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31213cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312140: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x312140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x312144: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x312144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_312148:
    // 0x312148: 0x9442003c  lhu         $v0, 0x3C($v0)
    ctx->pc = 0x312148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x31214c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31214Cu;
    {
        const bool branch_taken_0x31214c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31214c) {
            ctx->pc = 0x312150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31214Cu;
            // 0x312150: 0xae320038  sw          $s2, 0x38($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312154u;
            goto label_312154;
        }
    }
    ctx->pc = 0x312154u;
label_312154:
    // 0x312154: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_312158:
    // 0x312158: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x312158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31215c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x31215Cu;
    {
        const bool branch_taken_0x31215c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31215Cu;
        // 0x312160: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31215c) {
            ctx->pc = 0x312018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312018;
        }
    }
    ctx->pc = 0x312164u;
    // 0x312164: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x312164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x312168: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x312168u;
    {
        const bool branch_taken_0x312168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312168u;
        // 0x31216c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312168) {
            ctx->pc = 0x3121BCu;
            goto label_3121bc;
        }
    }
    ctx->pc = 0x312170u;
    // 0x312170: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x312170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x312174: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x312174u;
    {
        const bool branch_taken_0x312174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312174u;
        // 0x312178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312174) {
            ctx->pc = 0x3121B8u;
            goto label_3121b8;
        }
    }
    ctx->pc = 0x31217Cu;
    // 0x31217c: 0xc0c47ae  jal         func_311EB8
    ctx->pc = 0x31217Cu;
    SET_GPR_U32(ctx, 31, 0x312184u);
    ctx->pc = 0x312180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31217Cu;
    // 0x312180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EB8u, 0x31217Cu, 0x312184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312184u;
label_312184:
    // 0x312184: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x312184u;
    {
        const bool branch_taken_0x312184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312184u;
        // 0x312188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312184) {
            ctx->pc = 0x3121D8u;
            goto label_3121d8;
        }
    }
    ctx->pc = 0x31218Cu;
label_31218c:
    // 0x31218c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x31218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x312190: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x312190u;
    {
        const bool branch_taken_0x312190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312190u;
        // 0x312194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312190) {
            ctx->pc = 0x3121BCu;
            goto label_3121bc;
        }
    }
    ctx->pc = 0x312198u;
    // 0x312198: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x312198u;
    SET_GPR_U32(ctx, 31, 0x3121A0u);
    ctx->pc = 0x31219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312198u;
    // 0x31219c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x312198u, 0x3121A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121A0u;
label_3121a0:
    // 0x3121a0: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x3121a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3121a4: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x3121A4u;
    SET_GPR_U32(ctx, 31, 0x3121ACu);
    ctx->pc = 0x3121A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121A4u;
    // 0x3121a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x3121A4u, 0x3121ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121ACu;
label_3121ac:
    // 0x3121ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3121acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121b0: 0xc0c47ae  jal         func_311EB8
    ctx->pc = 0x3121B0u;
    SET_GPR_U32(ctx, 31, 0x3121B8u);
    ctx->pc = 0x3121B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121B0u;
    // 0x3121b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EB8u, 0x3121B0u, 0x3121B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121B8u;
label_3121b8:
    // 0x3121b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3121bc:
    // 0x3121bc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3121bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x3121c0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3121c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x3121c4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x3121c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x3121c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3121c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121cc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3121ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3121d0: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x3121d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x3121d4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3121d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_3121d8:
    // 0x3121d8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3121d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3121dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3121dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3121e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3121e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3121e4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3121e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3121e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3121e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3121ec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3121ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3121f0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3121f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3121f4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3121f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3121f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3121f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3121fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3121FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121FCu;
        // 0x312200: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312204u;
    // 0x312204: 0x0  nop
    ctx->pc = 0x312204u;
    // NOP
    ctx->pc = 0x312208u;
}
