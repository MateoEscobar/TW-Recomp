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

// Function: sub_00310768
// Address: 0x310768 - 0x3108a8
void sub_00310768_0x310768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310768_0x310768");
#endif

    switch (ctx->pc) {
        case 0x31078cu: goto label_31078c;
        case 0x3107a0u: goto label_3107a0;
        case 0x3107b8u: goto label_3107b8;
        case 0x3107e8u: goto label_3107e8;
        case 0x310800u: goto label_310800;
        case 0x310838u: goto label_310838;
        case 0x310840u: goto label_310840;
        case 0x310848u: goto label_310848;
        case 0x310860u: goto label_310860;
        case 0x310868u: goto label_310868;
        default: break;
    }

    ctx->pc = 0x310768u;

    // 0x310768: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31076c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x310770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x310774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x310778: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x310778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31077c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x310780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310784: 0xc0e409a  jal         func_390268
    ctx->pc = 0x310784u;
    SET_GPR_U32(ctx, 31, 0x31078Cu);
    ctx->pc = 0x310788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310784u;
    // 0x310788: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310784u, 0x31078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31078Cu;
label_31078c:
    // 0x31078c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31078cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310790: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x310790u;
    {
        const bool branch_taken_0x310790 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x310794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310790u;
        // 0x310794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310790) {
            ctx->pc = 0x3107A8u;
            goto label_3107a8;
        }
    }
    ctx->pc = 0x310798u;
    // 0x310798: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x310798u;
    SET_GPR_U32(ctx, 31, 0x3107A0u);
    ctx->pc = 0x31079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310798u;
    // 0x31079c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x310798u, 0x3107A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107A0u;
label_3107a0:
    // 0x3107a0: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3107A0u;
    {
        const bool branch_taken_0x3107a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3107a0) {
            ctx->pc = 0x3107B0u;
            goto label_3107b0;
        }
    }
    ctx->pc = 0x3107A8u;
label_3107a8:
    // 0x3107a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3107A8u;
    {
        const bool branch_taken_0x3107a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107A8u;
        // 0x3107ac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107a8) {
            ctx->pc = 0x310888u;
            goto label_310888;
        }
    }
    ctx->pc = 0x3107B0u;
label_3107b0:
    // 0x3107b0: 0xc05959e  jal         func_165678
    ctx->pc = 0x3107B0u;
    SET_GPR_U32(ctx, 31, 0x3107B8u);
    ctx->pc = 0x3107B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107B0u;
    // 0x3107b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3107B0u, 0x3107B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107B8u;
label_3107b8:
    // 0x3107b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3107b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3107bc: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x3107bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x3107c0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3107C0u;
    {
        const bool branch_taken_0x3107c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3107c0) {
            ctx->pc = 0x3107C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3107C0u;
            // 0x3107c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31080Cu;
            goto label_31080c;
        }
    }
    ctx->pc = 0x3107C8u;
    // 0x3107c8: 0x92110034  lbu         $s1, 0x34($s0)
    ctx->pc = 0x3107c8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3107cc: 0x1633000d  bne         $s1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x3107CCu;
    {
        const bool branch_taken_0x3107cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x3107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107CCu;
        // 0x3107d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107cc) {
            ctx->pc = 0x310804u;
            goto label_310804;
        }
    }
    ctx->pc = 0x3107D4u;
    // 0x3107d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3107D4u;
    {
        const bool branch_taken_0x3107d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107D4u;
        // 0x3107d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107d4) {
            ctx->pc = 0x3107F4u;
            goto label_3107f4;
        }
    }
    ctx->pc = 0x3107DCu;
    // 0x3107dc: 0x8c620178  lw          $v0, 0x178($v1)
    ctx->pc = 0x3107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x3107e0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3107E0u;
    SET_GPR_U32(ctx, 31, 0x3107E8u);
    ctx->pc = 0x3107E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107E0u;
    // 0x3107e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3107E0u, 0x3107E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107E8u;
label_3107e8:
    // 0x3107e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3107e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3107ec: 0x10510026  beq         $v0, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3107ECu;
    {
        const bool branch_taken_0x3107ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3107F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107ECu;
        // 0x3107f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107ec) {
            ctx->pc = 0x310888u;
            goto label_310888;
        }
    }
    ctx->pc = 0x3107F4u;
label_3107f4:
    // 0x3107f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3107f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3107f8: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x3107F8u;
    SET_GPR_U32(ctx, 31, 0x310800u);
    ctx->pc = 0x3107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107F8u;
    // 0x3107fc: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x3107F8u, 0x310800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310800u;
label_310800:
    // 0x310800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310804:
    // 0x310804: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x310804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x310808: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x310808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31080c:
    // 0x31080c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x31080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x310810: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x310810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x310814: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x310814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x310818: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x310818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31081c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x31081Cu;
    {
        const bool branch_taken_0x31081c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31081Cu;
        // 0x310820: 0x244205dc  addiu       $v0, $v0, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31081c) {
            ctx->pc = 0x310884u;
            goto label_310884;
        }
    }
    ctx->pc = 0x310824u;
    // 0x310824: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x310828: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x310828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x31082c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31082cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310830: 0x24710048  addiu       $s1, $v1, 0x48
    ctx->pc = 0x310830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x310834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310838:
    // 0x310838: 0xc137826  jal         func_4DE098
    ctx->pc = 0x310838u;
    SET_GPR_U32(ctx, 31, 0x310840u);
    ctx->pc = 0x31083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310838u;
    // 0x31083c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310838u, 0x310840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310840u;
label_310840:
    // 0x310840: 0xc0e409a  jal         func_390268
    ctx->pc = 0x310840u;
    SET_GPR_U32(ctx, 31, 0x310848u);
    ctx->pc = 0x310844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310840u;
    // 0x310844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310840u, 0x310848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310848u;
label_310848:
    // 0x310848: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x310848u;
    {
        const bool branch_taken_0x310848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310848) {
            ctx->pc = 0x31084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310848u;
            // 0x31084c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310870u;
            goto label_310870;
        }
    }
    ctx->pc = 0x310850u;
    // 0x310850: 0x50520007  beql        $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x310850u;
    {
        const bool branch_taken_0x310850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x310850) {
            ctx->pc = 0x310854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310850u;
            // 0x310854: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310870u;
            goto label_310870;
        }
    }
    ctx->pc = 0x310858u;
    // 0x310858: 0xc087502  jal         func_21D408
    ctx->pc = 0x310858u;
    SET_GPR_U32(ctx, 31, 0x310860u);
    ctx->pc = 0x31085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310858u;
    // 0x31085c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310858u, 0x310860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310860u;
label_310860:
    // 0x310860: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x310860u;
    SET_GPR_U32(ctx, 31, 0x310868u);
    ctx->pc = 0x310864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310860u;
    // 0x310864: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x310860u, 0x310868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310868u;
label_310868:
    // 0x310868: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310868u;
    {
        const bool branch_taken_0x310868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310868u;
        // 0x31086c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310868) {
            ctx->pc = 0x310884u;
            goto label_310884;
        }
    }
    ctx->pc = 0x310870u;
label_310870:
    // 0x310870: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x310870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x310874: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x310874u;
    {
        const bool branch_taken_0x310874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310874u;
        // 0x310878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310874) {
            ctx->pc = 0x310838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310838;
        }
    }
    ctx->pc = 0x31087Cu;
    // 0x31087c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31087Cu;
    {
        const bool branch_taken_0x31087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31087Cu;
        // 0x310880: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31087c) {
            ctx->pc = 0x310888u;
            goto label_310888;
        }
    }
    ctx->pc = 0x310884u;
label_310884:
    // 0x310884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310888:
    // 0x310888: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x310888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31088c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31088cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310890: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x310890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310894: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x310894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31089c: 0x3e00008  jr          $ra
    ctx->pc = 0x31089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3108A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31089Cu;
        // 0x3108a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3108A4u;
    // 0x3108a4: 0x0  nop
    ctx->pc = 0x3108a4u;
    // NOP
    ctx->pc = 0x3108a8u;
}
