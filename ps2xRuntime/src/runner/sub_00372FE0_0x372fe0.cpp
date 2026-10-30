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

// Function: sub_00372FE0
// Address: 0x372fe0 - 0x373118
void sub_00372FE0_0x372fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372FE0_0x372fe0");
#endif

    switch (ctx->pc) {
        case 0x373014u: goto label_373014;
        case 0x37301cu: goto label_37301c;
        case 0x373030u: goto label_373030;
        case 0x373038u: goto label_373038;
        case 0x37304cu: goto label_37304c;
        case 0x373060u: goto label_373060;
        case 0x373088u: goto label_373088;
        case 0x373090u: goto label_373090;
        case 0x3730a4u: goto label_3730a4;
        case 0x3730c0u: goto label_3730c0;
        case 0x3730ccu: goto label_3730cc;
        case 0x3730e4u: goto label_3730e4;
        case 0x3730f0u: goto label_3730f0;
        default: break;
    }

    ctx->pc = 0x372fe0u;

    // 0x372fe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x372fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x372fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372fe8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x372fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x372fec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x372fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x372ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ff4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x372ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ff8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x372ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x372ffc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x372ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x373000: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x373000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x373004: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x373004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x373008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37300c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37300Cu;
    SET_GPR_U32(ctx, 31, 0x373014u);
    ctx->pc = 0x373010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37300Cu;
    // 0x373010: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37300Cu, 0x373014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373014u;
label_373014:
    // 0x373014: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373014u;
    SET_GPR_U32(ctx, 31, 0x37301Cu);
    ctx->pc = 0x373018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373014u;
    // 0x373018: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373014u, 0x37301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37301Cu;
label_37301c:
    // 0x37301c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37301cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x373020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373024: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x373024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373028: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373028u;
    SET_GPR_U32(ctx, 31, 0x373030u);
    ctx->pc = 0x37302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373028u;
    // 0x37302c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373028u, 0x373030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373030u;
label_373030:
    // 0x373030: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373030u;
    SET_GPR_U32(ctx, 31, 0x373038u);
    ctx->pc = 0x373034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373030u;
    // 0x373034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373030u, 0x373038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373038u;
label_373038:
    // 0x373038: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x373038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37303c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37303cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373040: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x373040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x373044: 0xc102488  jal         func_409220
    ctx->pc = 0x373044u;
    SET_GPR_U32(ctx, 31, 0x37304Cu);
    ctx->pc = 0x373048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373044u;
    // 0x373048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373044u, 0x37304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37304Cu;
label_37304c:
    // 0x37304c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37304cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x373050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373054: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x373054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373058: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373058u;
    SET_GPR_U32(ctx, 31, 0x373060u);
    ctx->pc = 0x37305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373058u;
    // 0x37305c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373058u, 0x373060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373060u;
label_373060:
    // 0x373060: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x373060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x373064: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x373064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x373068: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x373068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x37306c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x37306cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x373070: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x373070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x373074: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x373074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x373078: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x373078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37307c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x37307cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373080: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373080u;
    SET_GPR_U32(ctx, 31, 0x373088u);
    ctx->pc = 0x373084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373080u;
    // 0x373084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373080u, 0x373088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373088u;
label_373088:
    // 0x373088: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373088u;
    SET_GPR_U32(ctx, 31, 0x373090u);
    ctx->pc = 0x37308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373088u;
    // 0x37308c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373088u, 0x373090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373090u;
label_373090:
    // 0x373090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373094: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x373094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373098: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x373098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37309c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37309Cu;
    SET_GPR_U32(ctx, 31, 0x3730A4u);
    ctx->pc = 0x3730A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37309Cu;
    // 0x3730a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37309Cu, 0x3730A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730A4u;
label_3730a4:
    // 0x3730a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3730a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3730a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3730acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730b0: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x3730b0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3730b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3730b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730b8: 0xc045036  jal         func_1140D8
    ctx->pc = 0x3730B8u;
    SET_GPR_U32(ctx, 31, 0x3730C0u);
    ctx->pc = 0x3730BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730B8u;
    // 0x3730bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1140D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1140D8u, 0x3730B8u, 0x3730C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730C0u;
label_3730c0:
    // 0x3730c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3730c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730c4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3730C4u;
    SET_GPR_U32(ctx, 31, 0x3730CCu);
    ctx->pc = 0x3730C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730C4u;
    // 0x3730c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3730C4u, 0x3730CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730CCu;
label_3730cc:
    // 0x3730cc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3730CCu;
    {
        const bool branch_taken_0x3730cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3730D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730CCu;
        // 0x3730d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730cc) {
            ctx->pc = 0x3730E8u;
            goto label_3730e8;
        }
    }
    ctx->pc = 0x3730D4u;
    // 0x3730d4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3730d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3730d8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3730d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3730dc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3730DCu;
    SET_GPR_U32(ctx, 31, 0x3730E4u);
    ctx->pc = 0x3730E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730DCu;
    // 0x3730e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3730DCu, 0x3730E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730E4u;
label_3730e4:
    // 0x3730e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3730e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3730e8:
    // 0x3730e8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3730E8u;
    SET_GPR_U32(ctx, 31, 0x3730F0u);
    ctx->pc = 0x3730ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730E8u;
    // 0x3730ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3730E8u, 0x3730F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730F0u;
label_3730f0:
    // 0x3730f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3730f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3730f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3730f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3730f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3730f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3730fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3730fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373100: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373104: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x373104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373108: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x373108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37310c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373110: 0x3e00008  jr          $ra
    ctx->pc = 0x373110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373110u;
        // 0x373114: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373118u;
}
