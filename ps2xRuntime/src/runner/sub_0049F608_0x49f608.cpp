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

// Function: sub_0049F608
// Address: 0x49f608 - 0x49f718
void sub_0049F608_0x49f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F608_0x49f608");
#endif

    switch (ctx->pc) {
        case 0x49f648u: goto label_49f648;
        case 0x49f680u: goto label_49f680;
        case 0x49f6b4u: goto label_49f6b4;
        case 0x49f6c4u: goto label_49f6c4;
        case 0x49f6e8u: goto label_49f6e8;
        case 0x49f6f8u: goto label_49f6f8;
        default: break;
    }

    ctx->pc = 0x49f608u;

    // 0x49f608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49f60c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49f610: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49f614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49f614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49f61c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49f61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f620: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49f624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f628: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x49f628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x49f62c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x49f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x49f630: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x49f630u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49f634: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x49F634u;
    {
        const bool branch_taken_0x49f634 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F634u;
        // 0x49f638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f634) {
            ctx->pc = 0x49F650u;
            goto label_49f650;
        }
    }
    ctx->pc = 0x49F63Cu;
    // 0x49f63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49f63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f640: 0xc121902  jal         func_486408
    ctx->pc = 0x49F640u;
    SET_GPR_U32(ctx, 31, 0x49F648u);
    ctx->pc = 0x49F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F640u;
    // 0x49f644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49F640u, 0x49F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F648u;
label_49f648:
    // 0x49f648: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x49F648u;
    {
        const bool branch_taken_0x49f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F648u;
        // 0x49f64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f648) {
            ctx->pc = 0x49F6FCu;
            goto label_49f6fc;
        }
    }
    ctx->pc = 0x49F650u;
label_49f650:
    // 0x49f650: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x49f650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x49f654: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49f654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49f658: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x49F658u;
    {
        const bool branch_taken_0x49f658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f658) {
            ctx->pc = 0x49F65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F658u;
            // 0x49f65c: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F690u;
            goto label_49f690;
        }
    }
    ctx->pc = 0x49F660u;
    // 0x49f660: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x49f660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x49f664: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x49f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49f668: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x49f668u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49f66c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x49F66Cu;
    {
        const bool branch_taken_0x49f66c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f66c) {
            ctx->pc = 0x49F670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F66Cu;
            // 0x49f670: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F690u;
            goto label_49f690;
        }
    }
    ctx->pc = 0x49F674u;
    // 0x49f674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49f674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f678: 0xc121922  jal         func_486488
    ctx->pc = 0x49F678u;
    SET_GPR_U32(ctx, 31, 0x49F680u);
    ctx->pc = 0x49F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F678u;
    // 0x49f67c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486488u, 0x49F678u, 0x49F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F680u;
label_49f680:
    // 0x49f680: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F680u;
    {
        const bool branch_taken_0x49f680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f680) {
            ctx->pc = 0x49F684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F680u;
            // 0x49f684: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F690u;
            goto label_49f690;
        }
    }
    ctx->pc = 0x49F688u;
    // 0x49f688: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x49F688u;
    {
        const bool branch_taken_0x49f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F688u;
        // 0x49f68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f688) {
            ctx->pc = 0x49F6FCu;
            goto label_49f6fc;
        }
    }
    ctx->pc = 0x49F690u;
label_49f690:
    // 0x49f690: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x49f690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49f694: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x49f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49f698: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F698u;
    {
        const bool branch_taken_0x49f698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x49F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F698u;
        // 0x49f69c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f698) {
            ctx->pc = 0x49F6A8u;
            goto label_49f6a8;
        }
    }
    ctx->pc = 0x49F6A0u;
    // 0x49f6a0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49F6A0u;
    {
        const bool branch_taken_0x49f6a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x49F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F6A0u;
        // 0x49f6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f6a0) {
            ctx->pc = 0x49F6BCu;
            goto label_49f6bc;
        }
    }
    ctx->pc = 0x49F6A8u;
label_49f6a8:
    // 0x49f6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49f6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f6ac: 0xc127b36  jal         func_49ECD8
    ctx->pc = 0x49F6ACu;
    SET_GPR_U32(ctx, 31, 0x49F6B4u);
    ctx->pc = 0x49F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F6ACu;
    // 0x49f6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ECD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ECD8u, 0x49F6ACu, 0x49F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6B4u;
label_49f6b4:
    // 0x49f6b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49F6B4u;
    {
        const bool branch_taken_0x49f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F6B4u;
        // 0x49f6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f6b4) {
            ctx->pc = 0x49F6C8u;
            goto label_49f6c8;
        }
    }
    ctx->pc = 0x49F6BCu;
label_49f6bc:
    // 0x49f6bc: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x49F6BCu;
    SET_GPR_U32(ctx, 31, 0x49F6C4u);
    ctx->pc = 0x49F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F6BCu;
    // 0x49f6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x49F6BCu, 0x49F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6C4u;
label_49f6c4:
    // 0x49f6c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49f6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f6c8:
    // 0x49f6c8: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x49f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x49f6cc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49f6d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F6D0u;
    {
        const bool branch_taken_0x49f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f6d0) {
            ctx->pc = 0x49F6E8u;
            goto label_49f6e8;
        }
    }
    ctx->pc = 0x49F6D8u;
    // 0x49f6d8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F6D8u;
    {
        const bool branch_taken_0x49f6d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f6d8) {
            ctx->pc = 0x49F6E8u;
            goto label_49f6e8;
        }
    }
    ctx->pc = 0x49F6E0u;
    // 0x49f6e0: 0xc121930  jal         func_4864C0
    ctx->pc = 0x49F6E0u;
    SET_GPR_U32(ctx, 31, 0x49F6E8u);
    ctx->pc = 0x49F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F6E0u;
    // 0x49f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4864C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4864C0u, 0x49F6E0u, 0x49F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6E8u;
label_49f6e8:
    // 0x49f6e8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F6E8u;
    {
        const bool branch_taken_0x49f6e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F6E8u;
        // 0x49f6ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f6e8) {
            ctx->pc = 0x49F6FCu;
            goto label_49f6fc;
        }
    }
    ctx->pc = 0x49F6F0u;
    // 0x49f6f0: 0xc121912  jal         func_486448
    ctx->pc = 0x49F6F0u;
    SET_GPR_U32(ctx, 31, 0x49F6F8u);
    ctx->pc = 0x49F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F6F0u;
    // 0x49f6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49F6F0u, 0x49F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F6F8u;
label_49f6f8:
    // 0x49f6f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49f6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f6fc:
    // 0x49f6fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49f6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49f700: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49f700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49f704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49f704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f708: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49f708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f710: 0x3e00008  jr          $ra
    ctx->pc = 0x49F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F710u;
        // 0x49f714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F718u;
}
