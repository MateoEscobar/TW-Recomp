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

// Function: sub_003A00B8
// Address: 0x3a00b8 - 0x3a0400
void sub_003A00B8_0x3a00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A00B8_0x3a00b8");
#endif

    switch (ctx->pc) {
        case 0x3a00ecu: goto label_3a00ec;
        case 0x3a0130u: goto label_3a0130;
        case 0x3a013cu: goto label_3a013c;
        case 0x3a0148u: goto label_3a0148;
        case 0x3a0150u: goto label_3a0150;
        case 0x3a0158u: goto label_3a0158;
        case 0x3a016cu: goto label_3a016c;
        case 0x3a0178u: goto label_3a0178;
        case 0x3a0188u: goto label_3a0188;
        case 0x3a0190u: goto label_3a0190;
        case 0x3a019cu: goto label_3a019c;
        case 0x3a0200u: goto label_3a0200;
        case 0x3a0280u: goto label_3a0280;
        case 0x3a0314u: goto label_3a0314;
        case 0x3a0350u: goto label_3a0350;
        default: break;
    }

    ctx->pc = 0x3a00b8u;

    // 0x3a00b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a00b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a00bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3a00c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3a00c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3a00c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a00c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3a00c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3a00cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a00ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a00d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3a00d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a00d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a00dc: 0x122000bf  beqz        $s1, . + 4 + (0xBF << 2)
    ctx->pc = 0x3A00DCu;
    {
        const bool branch_taken_0x3a00dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00DCu;
        // 0x3a00e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00dc) {
            ctx->pc = 0x3A03DCu;
            goto label_3a03dc;
        }
    }
    ctx->pc = 0x3A00E4u;
    // 0x3a00e4: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x3A00E4u;
    SET_GPR_U32(ctx, 31, 0x3A00ECu);
    ctx->pc = 0x3A00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00E4u;
    // 0x3a00e8: 0x8e240280  lw          $a0, 0x280($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x3A00E4u, 0x3A00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00ECu;
label_3a00ec:
    // 0x3a00ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a00ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a00f4: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x3A00F4u;
    {
        const bool branch_taken_0x3a00f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00F4u;
        // 0x3a00f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00f4) {
            ctx->pc = 0x3A03E0u;
            goto label_3a03e0;
        }
    }
    ctx->pc = 0x3A00FCu;
    // 0x3a00fc: 0x5660002f  bnel        $s3, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A00FCu;
    {
        const bool branch_taken_0x3a00fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a00fc) {
            ctx->pc = 0x3A0100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A00FCu;
            // 0x3a0100: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A01BCu;
            goto label_3a01bc;
        }
    }
    ctx->pc = 0x3A0104u;
    // 0x3a0104: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3a0104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a0108: 0x904300e4  lbu         $v1, 0xE4($v0)
    ctx->pc = 0x3a0108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x3a010c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A010Cu;
    {
        const bool branch_taken_0x3a010c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a010c) {
            ctx->pc = 0x3A0110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A010Cu;
            // 0x3a0110: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0120u;
            goto label_3a0120;
        }
    }
    ctx->pc = 0x3A0114u;
    // 0x3a0114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a0118: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x3a0118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
    // 0x3a011c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x3a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_3a0120:
    // 0x3a0120: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A0120u;
    {
        const bool branch_taken_0x3a0120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0120u;
        // 0x3a0124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0120) {
            ctx->pc = 0x3A0148u;
            goto label_3a0148;
        }
    }
    ctx->pc = 0x3A0128u;
    // 0x3a0128: 0xc0899a2  jal         func_226688
    ctx->pc = 0x3A0128u;
    SET_GPR_U32(ctx, 31, 0x3A0130u);
    ctx->pc = 0x3A012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0128u;
    // 0x3a012c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x3A0128u, 0x3A0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0130u;
label_3a0130:
    // 0x3a0130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0134: 0xc089988  jal         func_226620
    ctx->pc = 0x3A0134u;
    SET_GPR_U32(ctx, 31, 0x3A013Cu);
    ctx->pc = 0x3A0138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0134u;
    // 0x3a0138: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x3A0134u, 0x3A013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A013Cu;
label_3a013c:
    // 0x3a013c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0140: 0xc089974  jal         func_2265D0
    ctx->pc = 0x3A0140u;
    SET_GPR_U32(ctx, 31, 0x3A0148u);
    ctx->pc = 0x3A0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0140u;
    // 0x3a0144: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x3A0140u, 0x3A0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0148u;
label_3a0148:
    // 0x3a0148: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x3A0148u;
    SET_GPR_U32(ctx, 31, 0x3A0150u);
    ctx->pc = 0x3A014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0148u;
    // 0x3a014c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x3A0148u, 0x3A0150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0150u;
label_3a0150:
    // 0x3a0150: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A0150u;
    SET_GPR_U32(ctx, 31, 0x3A0158u);
    ctx->pc = 0x3A0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0150u;
    // 0x3a0154: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A0150u, 0x3A0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0158u;
label_3a0158:
    // 0x3a0158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a0158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a015c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x3A015Cu;
    {
        const bool branch_taken_0x3a015c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A015Cu;
        // 0x3a0160: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a015c) {
            ctx->pc = 0x3A0190u;
            goto label_3a0190;
        }
    }
    ctx->pc = 0x3A0164u;
    // 0x3a0164: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A0164u;
    SET_GPR_U32(ctx, 31, 0x3A016Cu);
    ctx->pc = 0x3A0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0164u;
    // 0x3a0168: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A0164u, 0x3A016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A016Cu;
label_3a016c:
    // 0x3a016c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a016cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a0170: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A0170u;
    SET_GPR_U32(ctx, 31, 0x3A0178u);
    ctx->pc = 0x3A0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0170u;
    // 0x3a0174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A0170u, 0x3A0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0178u;
label_3a0178:
    // 0x3a0178: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a0178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a017c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3a017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a0180: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A0180u;
    SET_GPR_U32(ctx, 31, 0x3A0188u);
    ctx->pc = 0x3A0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0180u;
    // 0x3a0184: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A0180u, 0x3A0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0188u;
label_3a0188:
    // 0x3a0188: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A0188u;
    SET_GPR_U32(ctx, 31, 0x3A0190u);
    ctx->pc = 0x3A018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0188u;
    // 0x3a018c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A0188u, 0x3A0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0190u;
label_3a0190:
    // 0x3a0190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0194: 0xc093508  jal         func_24D420
    ctx->pc = 0x3A0194u;
    SET_GPR_U32(ctx, 31, 0x3A019Cu);
    ctx->pc = 0x3A0198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0194u;
    // 0x3a0198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D420u, 0x3A0194u, 0x3A019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A019Cu;
label_3a019c:
    // 0x3a019c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a01a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3a01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a01a4: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x3a01a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3a01a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a01ac: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x3a01acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a01b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a01b4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3A01B4u;
    {
        const bool branch_taken_0x3a01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01B4u;
        // 0x3a01b8: 0xa465001c  sh          $a1, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01b4) {
            ctx->pc = 0x3A03DCu;
            goto label_3a03dc;
        }
    }
    ctx->pc = 0x3A01BCu;
label_3a01bc:
    // 0x3a01bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3a01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a01c0: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x3a01c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x3a01c4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a01c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3a01c8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3A01C8u;
    {
        const bool branch_taken_0x3a01c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01C8u;
        // 0x3a01cc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01c8) {
            ctx->pc = 0x3A02F8u;
            goto label_3a02f8;
        }
    }
    ctx->pc = 0x3A01D0u;
    // 0x3a01d0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A01D0u;
    {
        const bool branch_taken_0x3a01d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01D0u;
        // 0x3a01d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01d0) {
            ctx->pc = 0x3A02F0u;
            goto label_3a02f0;
        }
    }
    ctx->pc = 0x3A01D8u;
    // 0x3a01d8: 0x90860020  lbu         $a2, 0x20($a0)
    ctx->pc = 0x3a01d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a01dc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A01DCu;
    {
        const bool branch_taken_0x3a01dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01DCu;
        // 0x3a01e0: 0x96480030  lhu         $t0, 0x30($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01dc) {
            ctx->pc = 0x3A0220u;
            goto label_3a0220;
        }
    }
    ctx->pc = 0x3A01E4u;
    // 0x3a01e4: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x3a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x3a01e8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x3a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a01ec: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A01ECu;
    {
        const bool branch_taken_0x3a01ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01ECu;
        // 0x3a01f0: 0x81400  sll         $v0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01ec) {
            ctx->pc = 0x3A0224u;
            goto label_3a0224;
        }
    }
    ctx->pc = 0x3A01F4u;
    // 0x3a01f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a01f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a01f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a01f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a01fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a01fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a0200:
    // 0x3a0200: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x3a0200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3a0204: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0204u;
    {
        const bool branch_taken_0x3a0204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0204u;
        // 0x3a0208: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0204) {
            ctx->pc = 0x3A0220u;
            goto label_3a0220;
        }
    }
    ctx->pc = 0x3A020Cu;
    // 0x3a020c: 0x8ce20090  lw          $v0, 0x90($a3)
    ctx->pc = 0x3a020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x3a0210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0214: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x3a0214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0218: 0x5471fff9  bnel        $v1, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A0218u;
    {
        const bool branch_taken_0x3a0218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3a0218) {
            ctx->pc = 0x3A021Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0218u;
            // 0x3a021c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0200;
        }
    }
    ctx->pc = 0x3A0220u;
label_3a0220:
    // 0x3a0220: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x3a0220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_3a0224:
    // 0x3a0224: 0x4420020  bltzl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A0224u;
    {
        const bool branch_taken_0x3a0224 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3a0224) {
            ctx->pc = 0x3A0228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0224u;
            // 0x3a0228: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A02A8u;
            goto label_3a02a8;
        }
    }
    ctx->pc = 0x3A022Cu;
    // 0x3a022c: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x3a022cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3a0230: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3a0230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3a0234: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0234u;
    {
        const bool branch_taken_0x3a0234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0234) {
            ctx->pc = 0x3A0238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0234u;
            // 0x3a0238: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A02A8u;
            goto label_3a02a8;
        }
    }
    ctx->pc = 0x3A023Cu;
    // 0x3a023c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x3a023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x3a0240: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a0240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a0244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0248: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x3a0248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x3a024c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a024cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a0250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a0254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a0254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0258: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3a0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3a025c: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x3a025cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a0260: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3a0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0264: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a0264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a0268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a0268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a026c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a026cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a0270: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a0270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a0274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0278: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A0278u;
    SET_GPR_U32(ctx, 31, 0x3A0280u);
    ctx->pc = 0x3A027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0278u;
    // 0x3a027c: 0xa4a30008  sh          $v1, 0x8($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A0278u, 0x3A0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0280u;
label_3a0280:
    // 0x3a0280: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x3a0280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3a0284: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x3a0284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a0288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a0288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a028c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3a028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a0290: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3a0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a0294: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x3a0294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3a0298: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a0298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a029c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a02a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A02A0u;
    {
        const bool branch_taken_0x3a02a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02A0u;
        // 0x3a02a4: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02a0) {
            ctx->pc = 0x3A02E0u;
            goto label_3a02e0;
        }
    }
    ctx->pc = 0x3A02A8u;
label_3a02a8:
    // 0x3a02a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3a02a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a02ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a02acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a02b0: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x3a02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3a02b4: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x3a02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x3a02b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a02bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a02c0: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x3a02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x3a02c4: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x3a02c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3a02c8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3a02c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3a02cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A02CCu;
    {
        const bool branch_taken_0x3a02cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a02cc) {
            ctx->pc = 0x3A02D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A02CCu;
            // 0x3a02d0: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A02E4u;
            goto label_3a02e4;
        }
    }
    ctx->pc = 0x3A02D4u;
    // 0x3a02d4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3a02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3a02d8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a02dc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3a02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3a02e0:
    // 0x3a02e0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3a02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3a02e4:
    // 0x3a02e4: 0x946200f4  lhu         $v0, 0xF4($v1)
    ctx->pc = 0x3a02e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x3a02e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a02ec: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x3a02ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
label_3a02f0:
    // 0x3a02f0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3A02F0u;
    {
        const bool branch_taken_0x3a02f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02F0u;
        // 0x3a02f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02f0) {
            ctx->pc = 0x3A03E0u;
            goto label_3a03e0;
        }
    }
    ctx->pc = 0x3A02F8u;
label_3a02f8:
    // 0x3a02f8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A02F8u;
    {
        const bool branch_taken_0x3a02f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02F8u;
        // 0x3a02fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02f8) {
            ctx->pc = 0x3A03E0u;
            goto label_3a03e0;
        }
    }
    ctx->pc = 0x3A0300u;
    // 0x3a0300: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x3a0300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3a0304: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A0304u;
    {
        const bool branch_taken_0x3a0304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0304u;
        // 0x3a0308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0304) {
            ctx->pc = 0x3A03E0u;
            goto label_3a03e0;
        }
    }
    ctx->pc = 0x3A030Cu;
    // 0x3a030c: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A030Cu;
    SET_GPR_U32(ctx, 31, 0x3A0314u);
    ctx->pc = 0x3A0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A030Cu;
    // 0x3a0310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A030Cu, 0x3A0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0314u;
label_3a0314:
    // 0x3a0314: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x3a0314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3a0318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a031c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a031cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a0320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a0320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a0324: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3a0324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a0328: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x3a0328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a032c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A032Cu;
    {
        const bool branch_taken_0x3a032c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A032Cu;
        // 0x3a0330: 0x8c48000c  lw          $t0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a032c) {
            ctx->pc = 0x3A0370u;
            goto label_3a0370;
        }
    }
    ctx->pc = 0x3A0334u;
    // 0x3a0334: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x3a0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x3a0338: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x3a0338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a033c: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A033Cu;
    {
        const bool branch_taken_0x3a033c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A033Cu;
        // 0x3a0340: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a033c) {
            ctx->pc = 0x3A0370u;
            goto label_3a0370;
        }
    }
    ctx->pc = 0x3A0344u;
    // 0x3a0344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a0348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a034c: 0x0  nop
    ctx->pc = 0x3a034cu;
    // NOP
label_3a0350:
    // 0x3a0350: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x3a0350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3a0354: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0354u;
    {
        const bool branch_taken_0x3a0354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0354u;
        // 0x3a0358: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0354) {
            ctx->pc = 0x3A0370u;
            goto label_3a0370;
        }
    }
    ctx->pc = 0x3A035Cu;
    // 0x3a035c: 0x8ce20090  lw          $v0, 0x90($a3)
    ctx->pc = 0x3a035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x3a0360: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0364: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x3a0364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3a0368: 0x5471fff9  bnel        $v1, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A0368u;
    {
        const bool branch_taken_0x3a0368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3a0368) {
            ctx->pc = 0x3A036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0368u;
            // 0x3a036c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0350;
        }
    }
    ctx->pc = 0x3A0370u;
label_3a0370:
    // 0x3a0370: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x3a0370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3a0374: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a0374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a0378: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a0378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a037c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a037cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0384: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x3a0384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x3a0388: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a0388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a038c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a038cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0390: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x3a0390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x3a0394: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x3a0394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3a0398: 0x94a40008  lhu         $a0, 0x8($a1)
    ctx->pc = 0x3a0398u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a039c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3a039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a03a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a03a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a03a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a03a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a03a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a03a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a03ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a03acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a03b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a03b4: 0xa4a40008  sh          $a0, 0x8($a1)
    ctx->pc = 0x3a03b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a03b8: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x3a03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3a03bc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3a03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3a03c0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a03c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a03c4: 0xae64001c  sw          $a0, 0x1C($s3)
    ctx->pc = 0x3a03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 4));
    // 0x3a03c8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3a03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a03cc: 0x94a300f4  lhu         $v1, 0xF4($a1)
    ctx->pc = 0x3a03ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x3a03d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a03d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A03D4u;
    {
        const bool branch_taken_0x3a03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03D4u;
        // 0x3a03d8: 0xa4a300f4  sh          $v1, 0xF4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 244), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03d4) {
            ctx->pc = 0x3A03E0u;
            goto label_3a03e0;
        }
    }
    ctx->pc = 0x3A03DCu;
label_3a03dc:
    // 0x3a03dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a03dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a03e0:
    // 0x3a03e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a03e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a03e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a03e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a03e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a03e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a03ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3a03ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a03f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3a03f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a03f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a03f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03F8u;
        // 0x3a03fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A03F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0400u;
}
