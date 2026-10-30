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

// Function: sub_00152F78
// Address: 0x152f78 - 0x153118
void sub_00152F78_0x152f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F78_0x152f78");
#endif

    switch (ctx->pc) {
        case 0x152fe0u: goto label_152fe0;
        case 0x152ffcu: goto label_152ffc;
        case 0x153010u: goto label_153010;
        case 0x15303cu: goto label_15303c;
        case 0x153050u: goto label_153050;
        case 0x15306cu: goto label_15306c;
        case 0x153084u: goto label_153084;
        case 0x1530b0u: goto label_1530b0;
        case 0x1530c4u: goto label_1530c4;
        case 0x1530d4u: goto label_1530d4;
        case 0x1530e4u: goto label_1530e4;
        case 0x1530f8u: goto label_1530f8;
        default: break;
    }

    ctx->pc = 0x152f78u;

    // 0x152f78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x152f7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152f80: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x152f84: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x152f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x152f88: 0x8e83c5d8  lw          $v1, -0x3A28($s4)
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x152f8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x152f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x152f90: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x152f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x152f94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x152f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x152f98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152F98u;
    {
        const bool branch_taken_0x152f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F98u;
        // 0x152f9c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f98) {
            ctx->pc = 0x152FB4u;
            goto label_152fb4;
        }
    }
    ctx->pc = 0x152FA0u;
    // 0x152fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152fa4: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x152FA4u;
    {
        const bool branch_taken_0x152fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA4u;
        // 0x152fa8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fa4) {
            ctx->pc = 0x153098u;
            goto label_153098;
        }
    }
    ctx->pc = 0x152FACu;
    // 0x152fac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x152FACu;
    {
        const bool branch_taken_0x152fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FACu;
        // 0x152fb0: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fac) {
            ctx->pc = 0x153100u;
            goto label_153100;
        }
    }
    ctx->pc = 0x152FB4u;
label_152fb4:
    // 0x152fb4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152fb8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152fbc: 0x245146a4  addiu       $s1, $v0, 0x46A4
    ctx->pc = 0x152fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18084));
    // 0x152fc0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152fc4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152fc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fcc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fd0: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x152fd4: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152fd8: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152FD8u;
    SET_GPR_U32(ctx, 31, 0x152FE0u);
    ctx->pc = 0x152FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FD8u;
    // 0x152fdc: 0x24e74658  addiu       $a3, $a3, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152FD8u, 0x152FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FE0u;
label_152fe0:
    // 0x152fe0: 0x2633ffc4  addiu       $s3, $s1, -0x3C
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967236));
    // 0x152fe4: 0x8e24ffc4  lw          $a0, -0x3C($s1)
    ctx->pc = 0x152fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967236)));
    // 0x152fe8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x152ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ff4: 0xc1116b0  jal         func_445AC0
    ctx->pc = 0x152FF4u;
    SET_GPR_U32(ctx, 31, 0x152FFCu);
    ctx->pc = 0x152FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FF4u;
    // 0x152ff8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445AC0u, 0x152FF4u, 0x152FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FFCu;
label_152ffc:
    // 0x152ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153000: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153008: 0xc111590  jal         func_445640
    ctx->pc = 0x153008u;
    SET_GPR_U32(ctx, 31, 0x153010u);
    ctx->pc = 0x15300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153008u;
    // 0x15300c: 0x2646c5ec  addiu       $a2, $s2, -0x3A14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x153008u, 0x153010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153010u;
label_153010:
    // 0x153010: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153010u;
    {
        const bool branch_taken_0x153010 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x153014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153010u;
        // 0x153014: 0x8e42c5ec  lw          $v0, -0x3A14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153010) {
            ctx->pc = 0x153020u;
            goto label_153020;
        }
    }
    ctx->pc = 0x153018u;
    // 0x153018: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x153018u;
    {
        const bool branch_taken_0x153018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153018) {
            ctx->pc = 0x15301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153018u;
            // 0x15301c: 0x8e24ffc4  lw          $a0, -0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153028u;
            goto label_153028;
        }
    }
    ctx->pc = 0x153020u;
label_153020:
    // 0x153020: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x153020u;
    {
        const bool branch_taken_0x153020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153020u;
        // 0x153024: 0x8e45c5ec  lw          $a1, -0x3A14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153020) {
            ctx->pc = 0x1530BCu;
            goto label_1530bc;
        }
    }
    ctx->pc = 0x153028u;
label_153028:
    // 0x153028: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x15302c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x153030: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153034: 0xc111438  jal         func_4450E0
    ctx->pc = 0x153034u;
    SET_GPR_U32(ctx, 31, 0x15303Cu);
    ctx->pc = 0x153038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153034u;
    // 0x153038: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4450E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4450E0u, 0x153034u, 0x15303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15303Cu;
label_15303c:
    // 0x15303c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15303cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153048: 0xc111590  jal         func_445640
    ctx->pc = 0x153048u;
    SET_GPR_U32(ctx, 31, 0x153050u);
    ctx->pc = 0x15304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153048u;
    // 0x15304c: 0x2626c5f0  addiu       $a2, $s1, -0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x153048u, 0x153050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153050u;
label_153050:
    // 0x153050: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153050u;
    {
        const bool branch_taken_0x153050 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x153054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153050u;
        // 0x153054: 0x8e24c5f0  lw          $a0, -0x3A10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153050) {
            ctx->pc = 0x153074u;
            goto label_153074;
        }
    }
    ctx->pc = 0x153058u;
    // 0x153058: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x153058u;
    {
        const bool branch_taken_0x153058 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153058u;
        // 0x15305c: 0x8e25c5f0  lw          $a1, -0x3A10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153058) {
            ctx->pc = 0x153078u;
            goto label_153078;
        }
    }
    ctx->pc = 0x153060u;
    // 0x153060: 0x8e660038  lw          $a2, 0x38($s3)
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153064: 0xc1114ec  jal         func_4453B0
    ctx->pc = 0x153064u;
    SET_GPR_U32(ctx, 31, 0x15306Cu);
    ctx->pc = 0x153068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153064u;
    // 0x153068: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4453B0u, 0x153064u, 0x15306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15306Cu;
label_15306c:
    // 0x15306c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15306Cu;
    {
        const bool branch_taken_0x15306c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15306Cu;
        // 0x153070: 0x8e82c5d8  lw          $v0, -0x3A28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15306c) {
            ctx->pc = 0x15308Cu;
            goto label_15308c;
        }
    }
    ctx->pc = 0x153074u;
label_153074:
    // 0x153074: 0x8e25c5f0  lw          $a1, -0x3A10($s1)
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952432)));
label_153078:
    // 0x153078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15307c: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x15307Cu;
    SET_GPR_U32(ctx, 31, 0x153084u);
    ctx->pc = 0x153080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15307Cu;
    // 0x153080: 0xae45c5ec  sw          $a1, -0x3A14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952428), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x15307Cu, 0x153084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153084u;
label_153084:
    // 0x153084: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x153084u;
    {
        const bool branch_taken_0x153084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153084u;
        // 0x153088: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153084) {
            ctx->pc = 0x1530FCu;
            goto label_1530fc;
        }
    }
    ctx->pc = 0x15308Cu;
label_15308c:
    // 0x15308c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x153090: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x153090u;
    {
        const bool branch_taken_0x153090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153090u;
        // 0x153094: 0xae82c5d8  sw          $v0, -0x3A28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153090) {
            ctx->pc = 0x1530F8u;
            goto label_1530f8;
        }
    }
    ctx->pc = 0x153098u;
label_153098:
    // 0x153098: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x15309c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15309cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530a0: 0x2611c5ec  addiu       $s1, $s0, -0x3A14
    ctx->pc = 0x1530a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952428));
    // 0x1530a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1530a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530a8: 0xc111590  jal         func_445640
    ctx->pc = 0x1530A8u;
    SET_GPR_U32(ctx, 31, 0x1530B0u);
    ctx->pc = 0x1530ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530A8u;
    // 0x1530ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x1530A8u, 0x1530B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530B0u;
label_1530b0:
    // 0x1530b0: 0x8e05c5ec  lw          $a1, -0x3A14($s0)
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952428)));
    // 0x1530b4: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1530B4u;
    {
        const bool branch_taken_0x1530b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1530B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B4u;
        // 0x1530b8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530b4) {
            ctx->pc = 0x1530CCu;
            goto label_1530cc;
        }
    }
    ctx->pc = 0x1530BCu;
label_1530bc:
    // 0x1530bc: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1530BCu;
    SET_GPR_U32(ctx, 31, 0x1530C4u);
    ctx->pc = 0x1530C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530BCu;
    // 0x1530c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1530BCu, 0x1530C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530C4u;
label_1530c4:
    // 0x1530c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1530C4u;
    {
        const bool branch_taken_0x1530c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C4u;
        // 0x1530c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530c4) {
            ctx->pc = 0x1530FCu;
            goto label_1530fc;
        }
    }
    ctx->pc = 0x1530CCu;
label_1530cc:
    // 0x1530cc: 0xc111490  jal         func_445240
    ctx->pc = 0x1530CCu;
    SET_GPR_U32(ctx, 31, 0x1530D4u);
    ctx->pc = 0x1530D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530CCu;
    // 0x1530d0: 0x8e04c5f0  lw          $a0, -0x3A10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445240u, 0x1530CCu, 0x1530D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530D4u;
label_1530d4:
    // 0x1530d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1530d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1530d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530dc: 0xc111590  jal         func_445640
    ctx->pc = 0x1530DCu;
    SET_GPR_U32(ctx, 31, 0x1530E4u);
    ctx->pc = 0x1530E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530DCu;
    // 0x1530e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x1530DCu, 0x1530E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530E4u;
label_1530e4:
    // 0x1530e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1530e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1530ec: 0xae03c5f0  sw          $v1, -0x3A10($s0)
    ctx->pc = 0x1530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952432), GPR_U32(ctx, 3));
    // 0x1530f0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1530F0u;
    SET_GPR_U32(ctx, 31, 0x1530F8u);
    ctx->pc = 0x1530F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530F0u;
    // 0x1530f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1530F0u, 0x1530F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530F8u;
label_1530f8:
    // 0x1530f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1530f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1530fc:
    // 0x1530fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1530fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_153100:
    // 0x153100: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x153100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153104: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x153104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153108: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x153108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15310c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153110: 0x3e00008  jr          $ra
    ctx->pc = 0x153110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153110u;
        // 0x153114: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153118u;
}
