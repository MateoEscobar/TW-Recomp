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

// Function: sub_0022F658
// Address: 0x22f658 - 0x22f8d8
void sub_0022F658_0x22f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F658_0x22f658");
#endif

    switch (ctx->pc) {
        case 0x22f67cu: goto label_22f67c;
        case 0x22f688u: goto label_22f688;
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f6ecu: goto label_22f6ec;
        case 0x22f704u: goto label_22f704;
        case 0x22f71cu: goto label_22f71c;
        case 0x22f73cu: goto label_22f73c;
        case 0x22f758u: goto label_22f758;
        case 0x22f788u: goto label_22f788;
        case 0x22f794u: goto label_22f794;
        case 0x22f7a4u: goto label_22f7a4;
        case 0x22f7acu: goto label_22f7ac;
        case 0x22f7c4u: goto label_22f7c4;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f804u: goto label_22f804;
        case 0x22f86cu: goto label_22f86c;
        case 0x22f878u: goto label_22f878;
        case 0x22f88cu: goto label_22f88c;
        case 0x22f8acu: goto label_22f8ac;
        case 0x22f8b8u: goto label_22f8b8;
        default: break;
    }

    ctx->pc = 0x22f658u;

    // 0x22f658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22f65c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22f660: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22f664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f66c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22f670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f674: 0xc088dc8  jal         func_223720
    ctx->pc = 0x22F674u;
    SET_GPR_U32(ctx, 31, 0x22F67Cu);
    ctx->pc = 0x22F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F674u;
    // 0x22f678: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223720u, 0x22F674u, 0x22F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F67Cu;
label_22f67c:
    // 0x22f67c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f680: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x22F680u;
    SET_GPR_U32(ctx, 31, 0x22F688u);
    ctx->pc = 0x22F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F680u;
    // 0x22f684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x22F680u, 0x22F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F688u;
label_22f688:
    // 0x22f688: 0x56600010  bnel        $s3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22F688u;
    {
        const bool branch_taken_0x22f688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f688) {
            ctx->pc = 0x22F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F688u;
            // 0x22f68c: 0x922200e1  lbu         $v0, 0xE1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 225)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F6CCu;
            goto label_22f6cc;
        }
    }
    ctx->pc = 0x22F690u;
    // 0x22f690: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x22f694: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x22f694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x22f698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22f69c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22f69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22f6a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f6a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22f6a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F6A8u;
    {
        const bool branch_taken_0x22f6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6A8u;
        // 0x22f6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6a8) {
            ctx->pc = 0x22F6C8u;
            goto label_22f6c8;
        }
    }
    ctx->pc = 0x22F6B0u;
    // 0x22f6b0: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x22f6b4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x22f6b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x22f6b8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22F6B8u;
    SET_GPR_U32(ctx, 31, 0x22F6C0u);
    ctx->pc = 0x22F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6B8u;
    // 0x22f6bc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22F6B8u, 0x22F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6C0u;
label_22f6c0:
    // 0x22f6c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F6E4u;
            goto label_22f6e4;
        }
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0x922200e1  lbu         $v0, 0xE1($s1)
    ctx->pc = 0x22f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 225)));
label_22f6cc:
    // 0x22f6cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f6d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f6d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22f6d8: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x22F6D8u;
    {
        const bool branch_taken_0x22f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6D8u;
        // 0x22f6dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6d8) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F6E0u;
    // 0x22f6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f6e4:
    // 0x22f6e4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F6E4u;
    SET_GPR_U32(ctx, 31, 0x22F6ECu);
    ctx->pc = 0x22F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6E4u;
    // 0x22f6e8: 0x24050cf0  addiu       $a1, $zero, 0xCF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F6E4u, 0x22F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6ECu;
label_22f6ec:
    // 0x22f6ec: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F6F4u;
    // 0x22f6f4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x22f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x22f6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6fc: 0xc089998  jal         func_226660
    ctx->pc = 0x22F6FCu;
    SET_GPR_U32(ctx, 31, 0x22F704u);
    ctx->pc = 0x22F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6FCu;
    // 0x22f700: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22F6FCu, 0x22F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F704u;
label_22f704:
    // 0x22f704: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x22F704u;
    {
        const bool branch_taken_0x22f704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F704u;
        // 0x22f708: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f704) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F70Cu;
    // 0x22f70c: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x22F70Cu;
    {
        const bool branch_taken_0x22f70c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f70c) {
            ctx->pc = 0x22F79Cu;
            goto label_22f79c;
        }
    }
    ctx->pc = 0x22F714u;
    // 0x22f714: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x22F714u;
    SET_GPR_U32(ctx, 31, 0x22F71Cu);
    ctx->pc = 0x22F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F714u;
    // 0x22f718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x22F714u, 0x22F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F71Cu;
label_22f71c:
    // 0x22f71c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x22f720: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x22f724: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22F724u;
    {
        const bool branch_taken_0x22f724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F724u;
        // 0x22f728: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f724) {
            ctx->pc = 0x22F780u;
            goto label_22f780;
        }
    }
    ctx->pc = 0x22F72Cu;
    // 0x22f72c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22f730: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x22f734: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x22F734u;
    SET_GPR_U32(ctx, 31, 0x22F73Cu);
    ctx->pc = 0x22F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F734u;
    // 0x22f738: 0x8c650124  lw          $a1, 0x124($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x22F734u, 0x22F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F73Cu;
label_22f73c:
    // 0x22f73c: 0x94430062  lhu         $v1, 0x62($v0)
    ctx->pc = 0x22f73cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x22f740: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x22f744: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x22f744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x22f748: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22F748u;
    {
        const bool branch_taken_0x22f748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f748) {
            ctx->pc = 0x22F780u;
            goto label_22f780;
        }
    }
    ctx->pc = 0x22F750u;
    // 0x22f750: 0xc088ade  jal         func_222B78
    ctx->pc = 0x22F750u;
    SET_GPR_U32(ctx, 31, 0x22F758u);
    ctx->pc = 0x22F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F750u;
    // 0x22f754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x22F750u, 0x22F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F758u;
label_22f758:
    // 0x22f758: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x22f758u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f75c: 0x0  nop
    ctx->pc = 0x22f75cu;
    // NOP
    // 0x22f760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22f760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22f764: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f768: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22f768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22f76c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22f76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f774: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22f774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22f778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22f778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22f77c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x22f77cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_22f780:
    // 0x22f780: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x22F780u;
    SET_GPR_U32(ctx, 31, 0x22F788u);
    ctx->pc = 0x22F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F780u;
    // 0x22f784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22F780u, 0x22F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F788u;
label_22f788:
    // 0x22f788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f78c: 0xc0406fc  jal         func_101BF0
    ctx->pc = 0x22F78Cu;
    SET_GPR_U32(ctx, 31, 0x22F794u);
    ctx->pc = 0x22F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F78Cu;
    // 0x22f790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BF0u, 0x22F78Cu, 0x22F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F794u;
label_22f794:
    // 0x22f794: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22f798: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x22f798u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_22f79c:
    // 0x22f79c: 0xc095f8e  jal         func_257E38
    ctx->pc = 0x22F79Cu;
    SET_GPR_U32(ctx, 31, 0x22F7A4u);
    ctx->pc = 0x22F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F79Cu;
    // 0x22f7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E38u, 0x22F79Cu, 0x22F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7A4u;
label_22f7a4:
    // 0x22f7a4: 0xc095018  jal         func_254060
    ctx->pc = 0x22F7A4u;
    SET_GPR_U32(ctx, 31, 0x22F7ACu);
    ctx->pc = 0x22F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7A4u;
    // 0x22f7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F7A4u, 0x22F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7ACu;
label_22f7ac:
    // 0x22f7ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7b0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x22f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22f7b4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7B4u;
    {
        const bool branch_taken_0x22f7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7B4u;
        // 0x22f7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7b4) {
            ctx->pc = 0x22F7CCu;
            goto label_22f7cc;
        }
    }
    ctx->pc = 0x22F7BCu;
    // 0x22f7bc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F7BCu;
    SET_GPR_U32(ctx, 31, 0x22F7C4u);
    ctx->pc = 0x22F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7BCu;
    // 0x22f7c0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F7BCu, 0x22F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7C4u;
label_22f7c4:
    // 0x22f7c4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22F7C4u;
    {
        const bool branch_taken_0x22f7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7C4u;
        // 0x22f7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7c4) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F7CCu;
label_22f7cc:
    // 0x22f7cc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F7CCu;
    SET_GPR_U32(ctx, 31, 0x22F7D4u);
    ctx->pc = 0x22F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7CCu;
    // 0x22f7d0: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F7CCu, 0x22F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7D4u;
label_22f7d4:
    // 0x22f7d4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22F7D4u;
    {
        const bool branch_taken_0x22f7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D4u;
        // 0x22f7d8: 0x3a02000e  xori        $v0, $s0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7d4) {
            ctx->pc = 0x22F894u;
            goto label_22f894;
        }
    }
    ctx->pc = 0x22F7DCu;
    // 0x22f7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7e0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F7E0u;
    SET_GPR_U32(ctx, 31, 0x22F7E8u);
    ctx->pc = 0x22F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7E0u;
    // 0x22f7e4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F7E0u, 0x22F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7E8u;
label_22f7e8:
    // 0x22f7e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F7E8u;
    {
        const bool branch_taken_0x22f7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E8u;
        // 0x22f7ec: 0x3a02000f  xori        $v0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7e8) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F7F0u;
    // 0x22f7f0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x22F7F0u;
    {
        const bool branch_taken_0x22f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7F0u;
        // 0x22f7f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7f0) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F7F8u;
    // 0x22f7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7fc: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22F7FCu;
    SET_GPR_U32(ctx, 31, 0x22F804u);
    ctx->pc = 0x22F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7FCu;
    // 0x22f800: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22F7FCu, 0x22F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F804u;
label_22f804:
    // 0x22f804: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22f808: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x22f80c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f810: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x22F810u;
    {
        const bool branch_taken_0x22f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F810u;
        // 0x22f814: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f810) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F818u;
label_22f818:
    // 0x22f818: 0x2602fff2  addiu       $v0, $s0, -0xE
    ctx->pc = 0x22f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
    // 0x22f81c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f81cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f820: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x22F820u;
    {
        const bool branch_taken_0x22f820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f820) {
            ctx->pc = 0x22F824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F820u;
            // 0x22f824: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F828u;
    // 0x22f828: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f82c: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22F82Cu;
    {
        const bool branch_taken_0x22f82c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F82Cu;
        // 0x22f830: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f82c) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F834u;
    // 0x22f834: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22F834u;
    {
        const bool branch_taken_0x22f834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F834u;
        // 0x22f838: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f834) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F83Cu;
    // 0x22f83c: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F83Cu;
    {
        const bool branch_taken_0x22f83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F83Cu;
        // 0x22f840: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f83c) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F844u;
    // 0x22f844: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F844u;
    {
        const bool branch_taken_0x22f844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F844u;
        // 0x22f848: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f844) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F84Cu;
    // 0x22f84c: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22f850: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x22f854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f858: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22f858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22f85c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22f860: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f864: 0xc089988  jal         func_226620
    ctx->pc = 0x22F864u;
    SET_GPR_U32(ctx, 31, 0x22F86Cu);
    ctx->pc = 0x22F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F864u;
    // 0x22f868: 0xacc20100  sw          $v0, 0x100($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22F864u, 0x22F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F86Cu;
label_22f86c:
    // 0x22f86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f870: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22F870u;
    SET_GPR_U32(ctx, 31, 0x22F878u);
    ctx->pc = 0x22F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F870u;
    // 0x22f874: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22F870u, 0x22F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F878u;
label_22f878:
    // 0x22f878: 0x3a02000e  xori        $v0, $s0, 0xE
    ctx->pc = 0x22f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14);
    // 0x22f87c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F87Cu;
    {
        const bool branch_taken_0x22f87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F87Cu;
        // 0x22f880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f87c) {
            ctx->pc = 0x22F8B8u;
            goto label_22f8b8;
        }
    }
    ctx->pc = 0x22F884u;
    // 0x22f884: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x22F884u;
    SET_GPR_U32(ctx, 31, 0x22F88Cu);
    ctx->pc = 0x22F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F884u;
    // 0x22f888: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22F884u, 0x22F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F88Cu;
label_22f88c:
    // 0x22f88c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22F88Cu;
    {
        const bool branch_taken_0x22f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F88Cu;
        // 0x22f890: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f88c) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F894u;
label_22f894:
    // 0x22f894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F894u;
    {
        const bool branch_taken_0x22f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F894u;
        // 0x22f898: 0x3a02000f  xori        $v0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f894) {
            ctx->pc = 0x22F8ACu;
            goto label_22f8ac;
        }
    }
    ctx->pc = 0x22F89Cu;
    // 0x22f89c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F89Cu;
    {
        const bool branch_taken_0x22f89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F89Cu;
        // 0x22f8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f89c) {
            ctx->pc = 0x22F8B0u;
            goto label_22f8b0;
        }
    }
    ctx->pc = 0x22F8A4u;
    // 0x22f8a4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F8A4u;
    SET_GPR_U32(ctx, 31, 0x22F8ACu);
    ctx->pc = 0x22F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8A4u;
    // 0x22f8a8: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F8A4u, 0x22F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8ACu;
label_22f8ac:
    // 0x22f8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f8b0:
    // 0x22f8b0: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F8B0u;
    SET_GPR_U32(ctx, 31, 0x22F8B8u);
    ctx->pc = 0x22F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8B0u;
    // 0x22f8b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F8B0u, 0x22F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8B8u;
label_22f8b8:
    // 0x22f8b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22f8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22f8bc:
    // 0x22f8bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22f8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f8c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f8c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f8c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22f8c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x22F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8CCu;
        // 0x22f8d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F8D4u;
    // 0x22f8d4: 0x0  nop
    ctx->pc = 0x22f8d4u;
    // NOP
    ctx->pc = 0x22f8d8u;
}
