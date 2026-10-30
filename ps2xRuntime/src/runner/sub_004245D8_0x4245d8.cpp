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

// Function: sub_004245D8
// Address: 0x4245d8 - 0x4247d0
void sub_004245D8_0x4245d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004245D8_0x4245d8");
#endif

    switch (ctx->pc) {
        case 0x424644u: goto label_424644;
        case 0x424658u: goto label_424658;
        case 0x424660u: goto label_424660;
        case 0x4246d4u: goto label_4246d4;
        case 0x424770u: goto label_424770;
        default: break;
    }

    ctx->pc = 0x4245d8u;

    // 0x4245d8: 0x340c9ce0  ori         $t4, $zero, 0x9CE0
    ctx->pc = 0x4245d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40160);
    // 0x4245dc: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x4245dcu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x4245e0: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x4245e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x4245e4: 0x7dbeff70  sq          $fp, -0x90($t5)
    ctx->pc = 0x4245e4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_VEC(ctx, 30));
    // 0x4245e8: 0x7db2ffd0  sq          $s2, -0x30($t5)
    ctx->pc = 0x4245e8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967248), GPR_VEC(ctx, 18));
    // 0x4245ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x4245ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4245f0: 0x7db3ffc0  sq          $s3, -0x40($t5)
    ctx->pc = 0x4245f0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_VEC(ctx, 19));
    // 0x4245f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4245f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4245f8: 0x7db5ffa0  sq          $s5, -0x60($t5)
    ctx->pc = 0x4245f8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_VEC(ctx, 21));
    // 0x4245fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4245fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424600: 0x7db6ff90  sq          $s6, -0x70($t5)
    ctx->pc = 0x424600u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_VEC(ctx, 22));
    // 0x424604: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x424604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424608: 0x7db7ff80  sq          $s7, -0x80($t5)
    ctx->pc = 0x424608u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_VEC(ctx, 23));
    // 0x42460c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x42460cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424610: 0x7db0fff0  sq          $s0, -0x10($t5)
    ctx->pc = 0x424610u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967280), GPR_VEC(ctx, 16));
    // 0x424614: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x424614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424618: 0x7db1ffe0  sq          $s1, -0x20($t5)
    ctx->pc = 0x424618u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967264), GPR_VEC(ctx, 17));
    // 0x42461c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424620: 0x7db4ffb0  sq          $s4, -0x50($t5)
    ctx->pc = 0x424620u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_VEC(ctx, 20));
    // 0x424624: 0x34069c40  ori         $a2, $zero, 0x9C40
    ctx->pc = 0x424624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x424628: 0xfdbfff60  sd          $ra, -0xA0($t5)
    ctx->pc = 0x424628u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967136), GPR_U64(ctx, 31));
    // 0x42462c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42462cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424630: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x424630u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x424634: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x424634u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x424638: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x424638u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x42463c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x42463Cu;
    SET_GPR_U32(ctx, 31, 0x424644u);
    ctx->pc = 0x424640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42463Cu;
    // 0x424640: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x42463Cu, 0x424644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424644u;
label_424644:
    // 0x424644: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x424644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x424648: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x424648u;
    {
        const bool branch_taken_0x424648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424648u;
        // 0x42464c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424648) {
            ctx->pc = 0x424798u;
            goto label_424798;
        }
    }
    ctx->pc = 0x424650u;
    // 0x424650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x424650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424654: 0x0  nop
    ctx->pc = 0x424654u;
    // NOP
label_424658:
    // 0x424658: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424658u;
    SET_GPR_U32(ctx, 31, 0x424660u);
    ctx->pc = 0x42465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424658u;
    // 0x42465c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424658u, 0x424660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424660u;
label_424660:
    // 0x424660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x424660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424664: 0x92300003  lbu         $s0, 0x3($s1)
    ctx->pc = 0x424664u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x424668: 0x3a02000a  xori        $v0, $s0, 0xA
    ctx->pc = 0x424668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)10);
    // 0x42466c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x42466Cu;
    {
        const bool branch_taken_0x42466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42466Cu;
        // 0x424670: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42466c) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x424674u;
    // 0x424674: 0x3a020008  xori        $v0, $s0, 0x8
    ctx->pc = 0x424674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)8);
    // 0x424678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x424678u;
    {
        const bool branch_taken_0x424678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424678u;
        // 0x42467c: 0x3a020005  xori        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424678) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x424680u;
    // 0x424680: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x424680u;
    {
        const bool branch_taken_0x424680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424680u;
        // 0x424684: 0x3a02000b  xori        $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424680) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x424688u;
    // 0x424688: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x424688u;
    {
        const bool branch_taken_0x424688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424688) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x424690u;
    // 0x424690: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x424690u;
    {
        const bool branch_taken_0x424690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424690u;
        // 0x424694: 0x3a020007  xori        $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424690) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x424698u;
    // 0x424698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x424698u;
    {
        const bool branch_taken_0x424698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424698u;
        // 0x42469c: 0x3a020009  xori        $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424698) {
            ctx->pc = 0x4246A4u;
            goto label_4246a4;
        }
    }
    ctx->pc = 0x4246A0u;
    // 0x4246a0: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x4246a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_4246a4:
    // 0x4246a4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4246A4u;
    {
        const bool branch_taken_0x4246a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4246a4) {
            ctx->pc = 0x4246A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4246A4u;
            // 0x4246a8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4246ECu;
            goto label_4246ec;
        }
    }
    ctx->pc = 0x4246ACu;
    // 0x4246ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4246acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4246b0: 0x1054000d  beq         $v0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x4246B0u;
    {
        const bool branch_taken_0x4246b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x4246B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4246B0u;
        // 0x4246b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4246b0) {
            ctx->pc = 0x4246E8u;
            goto label_4246e8;
        }
    }
    ctx->pc = 0x4246B8u;
    // 0x4246b8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4246B8u;
    {
        const bool branch_taken_0x4246b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4246BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4246B8u;
        // 0x4246bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4246b8) {
            ctx->pc = 0x4246E8u;
            goto label_4246e8;
        }
    }
    ctx->pc = 0x4246C0u;
    // 0x4246c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4246c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4246c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4246c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4246c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4246c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4246cc: 0xc109026  jal         func_424098
    ctx->pc = 0x4246CCu;
    SET_GPR_U32(ctx, 31, 0x4246D4u);
    ctx->pc = 0x4246D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4246CCu;
    // 0x4246d0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x4246CCu, 0x4246D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4246D4u;
label_4246d4:
    // 0x4246d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4246D4u;
    {
        const bool branch_taken_0x4246d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4246d4) {
            ctx->pc = 0x4246D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4246D4u;
            // 0x4246d8: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4246ECu;
            goto label_4246ec;
        }
    }
    ctx->pc = 0x4246DCu;
    // 0x4246dc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4246dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4246e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4246e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4246e4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4246e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_4246e8:
    // 0x4246e8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x4246e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_4246ec:
    // 0x4246ec: 0x54540026  bnel        $v0, $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x4246ECu;
    {
        const bool branch_taken_0x4246ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x4246ec) {
            ctx->pc = 0x4246F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4246ECu;
            // 0x4246f0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424788u;
            goto label_424788;
        }
    }
    ctx->pc = 0x4246F4u;
    // 0x4246f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4246f8: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4246F8u;
    {
        const bool branch_taken_0x4246f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4246FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4246F8u;
        // 0x4246fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4246f8) {
            ctx->pc = 0x424720u;
            goto label_424720;
        }
    }
    ctx->pc = 0x424700u;
    // 0x424700: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x424700u;
    {
        const bool branch_taken_0x424700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x424704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424700u;
        // 0x424704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424700) {
            ctx->pc = 0x424720u;
            goto label_424720;
        }
    }
    ctx->pc = 0x424708u;
    // 0x424708: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x424708u;
    {
        const bool branch_taken_0x424708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424708u;
        // 0x42470c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424708) {
            ctx->pc = 0x424720u;
            goto label_424720;
        }
    }
    ctx->pc = 0x424710u;
    // 0x424710: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x424710u;
    {
        const bool branch_taken_0x424710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x424710) {
            ctx->pc = 0x424714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424710u;
            // 0x424714: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424724u;
            goto label_424724;
        }
    }
    ctx->pc = 0x424718u;
    // 0x424718: 0x5614001b  bnel        $s0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x424718u;
    {
        const bool branch_taken_0x424718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x424718) {
            ctx->pc = 0x42471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424718u;
            // 0x42471c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424788u;
            goto label_424788;
        }
    }
    ctx->pc = 0x424720u;
label_424720:
    // 0x424720: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x424720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_424724:
    // 0x424724: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x424724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x424728: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x424728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x42472c: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x42472cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x424730: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x424730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x424734: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x424734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x424738: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x424738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x42473c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x424740: 0x54800011  bnel        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x424740u;
    {
        const bool branch_taken_0x424740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x424740) {
            ctx->pc = 0x424744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424740u;
            // 0x424744: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424788u;
            goto label_424788;
        }
    }
    ctx->pc = 0x424748u;
    // 0x424748: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x424748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x42474c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x42474cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x424750: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x424750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x424754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x424754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424758: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x424758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x42475c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x42475cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x424760: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x424760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x424764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x424764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424768: 0xc109026  jal         func_424098
    ctx->pc = 0x424768u;
    SET_GPR_U32(ctx, 31, 0x424770u);
    ctx->pc = 0x42476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424768u;
    // 0x42476c: 0xaee60000  sw          $a2, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x424768u, 0x424770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424770u;
label_424770:
    // 0x424770: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x424770u;
    {
        const bool branch_taken_0x424770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424770) {
            ctx->pc = 0x424774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424770u;
            // 0x424774: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424788u;
            goto label_424788;
        }
    }
    ctx->pc = 0x424778u;
    // 0x424778: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x424778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x42477c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x424780: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x424780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x424784: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x424784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_424788:
    // 0x424788: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x424788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x42478c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x42478cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x424790: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x424790u;
    {
        const bool branch_taken_0x424790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424790u;
        // 0x424794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424790) {
            ctx->pc = 0x424658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424658;
        }
    }
    ctx->pc = 0x424798u;
label_424798:
    // 0x424798: 0x340c9ce0  ori         $t4, $zero, 0x9CE0
    ctx->pc = 0x424798u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40160);
    // 0x42479c: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x42479cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x4247a0: 0x79b0fff0  lq          $s0, -0x10($t5)
    ctx->pc = 0x4247a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x4247a4: 0x79b1ffe0  lq          $s1, -0x20($t5)
    ctx->pc = 0x4247a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 13), 4294967264)));
    // 0x4247a8: 0x79b2ffd0  lq          $s2, -0x30($t5)
    ctx->pc = 0x4247a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 4294967248)));
    // 0x4247ac: 0x79b3ffc0  lq          $s3, -0x40($t5)
    ctx->pc = 0x4247acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x4247b0: 0x79b4ffb0  lq          $s4, -0x50($t5)
    ctx->pc = 0x4247b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x4247b4: 0x79b5ffa0  lq          $s5, -0x60($t5)
    ctx->pc = 0x4247b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x4247b8: 0x79b6ff90  lq          $s6, -0x70($t5)
    ctx->pc = 0x4247b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x4247bc: 0x79b7ff80  lq          $s7, -0x80($t5)
    ctx->pc = 0x4247bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x4247c0: 0x79beff70  lq          $fp, -0x90($t5)
    ctx->pc = 0x4247c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x4247c4: 0xddbfff60  ld          $ra, -0xA0($t5)
    ctx->pc = 0x4247c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x4247c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4247C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4247CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4247C8u;
        // 0x4247cc: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4247C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4247D0u;
}
