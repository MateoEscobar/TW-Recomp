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

// Function: sub_0039A580
// Address: 0x39a580 - 0x39a6b0
void sub_0039A580_0x39a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A580_0x39a580");
#endif

    switch (ctx->pc) {
        case 0x39a5e8u: goto label_39a5e8;
        case 0x39a61cu: goto label_39a61c;
        case 0x39a624u: goto label_39a624;
        case 0x39a66cu: goto label_39a66c;
        default: break;
    }

    ctx->pc = 0x39a580u;

    // 0x39a580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39a584: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x39a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x39a588: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39a588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a58c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x39a590: 0x151942  srl         $v1, $s5, 5
    ctx->pc = 0x39a590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x39a594: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x39a598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a59c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x39a5a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39a5a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39a5a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x39a5ac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x39a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x39a5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a5b4: 0x32a4001f  andi        $a0, $s5, 0x1F
    ctx->pc = 0x39a5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x39a5b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a5bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x39a5c0: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x39a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x39a5c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x39a5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x39a5c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39a5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39a5cc: 0x1445002e  bne         $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x39A5CCu;
    {
        const bool branch_taken_0x39a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x39A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5CCu;
        // 0x39a5d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5cc) {
            ctx->pc = 0x39A688u;
            goto label_39a688;
        }
    }
    ctx->pc = 0x39A5D4u;
    // 0x39a5d4: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x39a5d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x39a5d8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x39A5D8u;
    {
        const bool branch_taken_0x39a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D8u;
        // 0x39a5dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5d8) {
            ctx->pc = 0x39A688u;
            goto label_39a688;
        }
    }
    ctx->pc = 0x39A5E0u;
    // 0x39a5e0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x39a5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a5e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a5e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a5e8:
    // 0x39a5e8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x39a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x39a5ec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x39a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x39a5f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x39a5f4: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x39a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
    // 0x39a5f8: 0x5455001f  bnel        $v0, $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x39A5F8u;
    {
        const bool branch_taken_0x39a5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x39a5f8) {
            ctx->pc = 0x39A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A5F8u;
            // 0x39a5fc: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A678u;
            goto label_39a678;
        }
    }
    ctx->pc = 0x39A600u;
    // 0x39a600: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x39a604: 0x21482  srl         $v0, $v0, 18
    ctx->pc = 0x39a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
    // 0x39a608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39a60c: 0x5054001a  beql        $v0, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x39A60Cu;
    {
        const bool branch_taken_0x39a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x39a60c) {
            ctx->pc = 0x39A610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A60Cu;
            // 0x39a610: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A678u;
            goto label_39a678;
        }
    }
    ctx->pc = 0x39A614u;
    // 0x39a614: 0xc0e404c  jal         func_390130
    ctx->pc = 0x39A614u;
    SET_GPR_U32(ctx, 31, 0x39A61Cu);
    ctx->pc = 0x39A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A614u;
    // 0x39a618: 0x84640024  lh          $a0, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x39A614u, 0x39A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A61Cu;
label_39a61c:
    // 0x39a61c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x39A61Cu;
    SET_GPR_U32(ctx, 31, 0x39A624u);
    ctx->pc = 0x39A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A61Cu;
    // 0x39a620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39A61Cu, 0x39A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A624u;
label_39a624:
    // 0x39a624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a628: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x39A628u;
    {
        const bool branch_taken_0x39a628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a628) {
            ctx->pc = 0x39A654u;
            goto label_39a654;
        }
    }
    ctx->pc = 0x39A630u;
    // 0x39a630: 0x9082010d  lbu         $v0, 0x10D($a0)
    ctx->pc = 0x39a630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
    // 0x39a634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A634u;
    {
        const bool branch_taken_0x39a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A634u;
        // 0x39a638: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a634) {
            ctx->pc = 0x39A648u;
            goto label_39a648;
        }
    }
    ctx->pc = 0x39A63Cu;
    // 0x39a63c: 0x9082010e  lbu         $v0, 0x10E($a0)
    ctx->pc = 0x39a63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 270)));
    // 0x39a640: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39A640u;
    {
        const bool branch_taken_0x39a640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a640) {
            ctx->pc = 0x39A64Cu;
            goto label_39a64c;
        }
    }
    ctx->pc = 0x39A648u;
label_39a648:
    // 0x39a648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a64c:
    // 0x39a64c: 0x5074000a  beql        $v1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x39A64Cu;
    {
        const bool branch_taken_0x39a64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x39a64c) {
            ctx->pc = 0x39A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A64Cu;
            // 0x39a650: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A678u;
            goto label_39a678;
        }
    }
    ctx->pc = 0x39A654u;
label_39a654:
    // 0x39a654: 0x1654000d  bne         $s2, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x39A654u;
    {
        const bool branch_taken_0x39a654 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x39A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A654u;
        // 0x39a658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a654) {
            ctx->pc = 0x39A68Cu;
            goto label_39a68c;
        }
    }
    ctx->pc = 0x39A65Cu;
    // 0x39a65c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x39A65Cu;
    {
        const bool branch_taken_0x39a65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a65c) {
            ctx->pc = 0x39A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A65Cu;
            // 0x39a660: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A690u;
            goto label_39a690;
        }
    }
    ctx->pc = 0x39A664u;
    // 0x39a664: 0xc0e53c8  jal         func_394F20
    ctx->pc = 0x39A664u;
    SET_GPR_U32(ctx, 31, 0x39A66Cu);
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x39A664u, 0x39A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A66Cu;
label_39a66c:
    // 0x39a66c: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A66Cu;
    {
        const bool branch_taken_0x39a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x39A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A66Cu;
        // 0x39a670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a66c) {
            ctx->pc = 0x39A68Cu;
            goto label_39a68c;
        }
    }
    ctx->pc = 0x39A674u;
    // 0x39a674: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x39a674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_39a678:
    // 0x39a678: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39a678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39a67c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x39a67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39a680: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x39A680u;
    {
        const bool branch_taken_0x39a680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A680u;
        // 0x39a684: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a680) {
            ctx->pc = 0x39A5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a5e8;
        }
    }
    ctx->pc = 0x39A688u;
label_39a688:
    // 0x39a688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39a688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a68c:
    // 0x39a68c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a690:
    // 0x39a690: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39a690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39a694: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39a694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39a698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39a69c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39a69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a6a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x39a6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6A8u;
        // 0x39a6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A6B0u;
}
