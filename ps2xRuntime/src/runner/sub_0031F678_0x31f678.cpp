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

// Function: sub_0031F678
// Address: 0x31f678 - 0x31f7a0
void sub_0031F678_0x31f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F678_0x31f678");
#endif

    switch (ctx->pc) {
        case 0x31f69cu: goto label_31f69c;
        case 0x31f6bcu: goto label_31f6bc;
        case 0x31f6c8u: goto label_31f6c8;
        case 0x31f6d4u: goto label_31f6d4;
        case 0x31f714u: goto label_31f714;
        case 0x31f728u: goto label_31f728;
        case 0x31f730u: goto label_31f730;
        case 0x31f738u: goto label_31f738;
        case 0x31f760u: goto label_31f760;
        case 0x31f780u: goto label_31f780;
        default: break;
    }

    ctx->pc = 0x31f678u;

    // 0x31f678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31f678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31f67c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31f680: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31f684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31f68c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31f690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f694: 0xc05959e  jal         func_165678
    ctx->pc = 0x31F694u;
    SET_GPR_U32(ctx, 31, 0x31F69Cu);
    ctx->pc = 0x31F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F694u;
    // 0x31f698: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31F694u, 0x31F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F69Cu;
label_31f69c:
    // 0x31f69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6a0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x31F6A0u;
    {
        const bool branch_taken_0x31f6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6a0) {
            ctx->pc = 0x31F6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6A0u;
            // 0x31f6a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F6CCu;
            goto label_31f6cc;
        }
    }
    ctx->pc = 0x31F6A8u;
    // 0x31f6a8: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x31f6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31f6ac: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F6ACu;
    {
        const bool branch_taken_0x31f6ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31f6ac) {
            ctx->pc = 0x31F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6ACu;
            // 0x31f6b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F6CCu;
            goto label_31f6cc;
        }
    }
    ctx->pc = 0x31F6B4u;
    // 0x31f6b4: 0xc08750a  jal         func_21D428
    ctx->pc = 0x31F6B4u;
    SET_GPR_U32(ctx, 31, 0x31F6BCu);
    ctx->pc = 0x31F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6B4u;
    // 0x31f6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31F6B4u, 0x31F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6BCu;
label_31f6bc:
    // 0x31f6bc: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x31f6bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31f6c0: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x31F6C0u;
    SET_GPR_U32(ctx, 31, 0x31F6C8u);
    ctx->pc = 0x31F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6C0u;
    // 0x31f6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31F6C0u, 0x31F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6C8u;
label_31f6c8:
    // 0x31f6c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f6cc:
    // 0x31f6cc: 0xc059646  jal         func_165918
    ctx->pc = 0x31F6CCu;
    SET_GPR_U32(ctx, 31, 0x31F6D4u);
    ctx->pc = 0x31F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6CCu;
    // 0x31f6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x31F6CCu, 0x31F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6D4u;
label_31f6d4:
    // 0x31f6d4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x31f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31f6d8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x31F6D8u;
    {
        const bool branch_taken_0x31f6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6D8u;
        // 0x31f6dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6d8) {
            ctx->pc = 0x31F714u;
            goto label_31f714;
        }
    }
    ctx->pc = 0x31F6E0u;
    // 0x31f6e0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x31f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x31f6e4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31F6E4u;
    {
        const bool branch_taken_0x31f6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f6e4) {
            ctx->pc = 0x31F6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6E4u;
            // 0x31f6e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F718u;
            goto label_31f718;
        }
    }
    ctx->pc = 0x31F6ECu;
    // 0x31f6ec: 0x8c8303b4  lw          $v1, 0x3B4($a0)
    ctx->pc = 0x31f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x31f6f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31f6f4: 0x2404026d  addiu       $a0, $zero, 0x26D
    ctx->pc = 0x31f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x31f6f8: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x31f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31f6fc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31f6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31f700: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x31f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x31f704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f70c: 0xc05a582  jal         func_169608
    ctx->pc = 0x31F70Cu;
    SET_GPR_U32(ctx, 31, 0x31F714u);
    ctx->pc = 0x31F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F70Cu;
    // 0x31f710: 0x90650040  lbu         $a1, 0x40($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31F70Cu, 0x31F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F714u;
label_31f714:
    // 0x31f714: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f718:
    // 0x31f718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31f718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f71c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31f71cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f720: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x31f720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31f724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31f728:
    // 0x31f728: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31F728u;
    SET_GPR_U32(ctx, 31, 0x31F730u);
    ctx->pc = 0x31F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F728u;
    // 0x31f72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31F728u, 0x31F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F730u;
label_31f730:
    // 0x31f730: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31F730u;
    SET_GPR_U32(ctx, 31, 0x31F738u);
    ctx->pc = 0x31F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F730u;
    // 0x31f734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31F730u, 0x31F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F738u;
label_31f738:
    // 0x31f738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f73c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F73Cu;
    {
        const bool branch_taken_0x31f73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f73c) {
            ctx->pc = 0x31F740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F73Cu;
            // 0x31f740: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F764u;
            goto label_31f764;
        }
    }
    ctx->pc = 0x31F744u;
    // 0x31f744: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x31f744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x31f748: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31f748u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31f74c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31f74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31f750: 0x50530004  beql        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F750u;
    {
        const bool branch_taken_0x31f750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x31f750) {
            ctx->pc = 0x31F754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F750u;
            // 0x31f754: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F764u;
            goto label_31f764;
        }
    }
    ctx->pc = 0x31F758u;
    // 0x31f758: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x31F758u;
    SET_GPR_U32(ctx, 31, 0x31F760u);
    ctx->pc = 0x31F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F758u;
    // 0x31f75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x31F758u, 0x31F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F760u;
label_31f760:
    // 0x31f760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31f764:
    // 0x31f764: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x31f764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31f768: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31F768u;
    {
        const bool branch_taken_0x31f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f768) {
            ctx->pc = 0x31F76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F768u;
            // 0x31f76c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f728;
        }
    }
    ctx->pc = 0x31F770u;
    // 0x31f770: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f774: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31f778: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31F778u;
    SET_GPR_U32(ctx, 31, 0x31F780u);
    ctx->pc = 0x31F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F778u;
    // 0x31f77c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31F778u, 0x31F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F780u;
label_31f780:
    // 0x31f780: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31f780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f784: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31f784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31f788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f78c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31f78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f794: 0x3e00008  jr          $ra
    ctx->pc = 0x31F794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F794u;
        // 0x31f798: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F79Cu;
    // 0x31f79c: 0x0  nop
    ctx->pc = 0x31f79cu;
    // NOP
    ctx->pc = 0x31f7a0u;
}
