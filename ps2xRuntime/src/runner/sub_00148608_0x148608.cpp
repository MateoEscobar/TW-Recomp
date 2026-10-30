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

// Function: sub_00148608
// Address: 0x148608 - 0x1486c0
void sub_00148608_0x148608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148608_0x148608");
#endif

    switch (ctx->pc) {
        case 0x148608u: goto label_148608;
        case 0x14860cu: goto label_14860c;
        case 0x148610u: goto label_148610;
        case 0x148614u: goto label_148614;
        case 0x148618u: goto label_148618;
        case 0x14861cu: goto label_14861c;
        case 0x148620u: goto label_148620;
        case 0x148624u: goto label_148624;
        case 0x148628u: goto label_148628;
        case 0x14862cu: goto label_14862c;
        case 0x148630u: goto label_148630;
        case 0x148634u: goto label_148634;
        case 0x148638u: goto label_148638;
        case 0x14863cu: goto label_14863c;
        case 0x148640u: goto label_148640;
        case 0x148644u: goto label_148644;
        case 0x148648u: goto label_148648;
        case 0x14864cu: goto label_14864c;
        case 0x148650u: goto label_148650;
        case 0x148654u: goto label_148654;
        case 0x148658u: goto label_148658;
        case 0x14865cu: goto label_14865c;
        case 0x148660u: goto label_148660;
        case 0x148664u: goto label_148664;
        case 0x148668u: goto label_148668;
        case 0x14866cu: goto label_14866c;
        case 0x148670u: goto label_148670;
        case 0x148674u: goto label_148674;
        case 0x148678u: goto label_148678;
        case 0x14867cu: goto label_14867c;
        case 0x148680u: goto label_148680;
        case 0x148684u: goto label_148684;
        case 0x148688u: goto label_148688;
        case 0x14868cu: goto label_14868c;
        case 0x148690u: goto label_148690;
        case 0x148694u: goto label_148694;
        case 0x148698u: goto label_148698;
        case 0x14869cu: goto label_14869c;
        case 0x1486a0u: goto label_1486a0;
        case 0x1486a4u: goto label_1486a4;
        case 0x1486a8u: goto label_1486a8;
        case 0x1486acu: goto label_1486ac;
        case 0x1486b0u: goto label_1486b0;
        case 0x1486b4u: goto label_1486b4;
        case 0x1486b8u: goto label_1486b8;
        case 0x1486bcu: goto label_1486bc;
        default: break;
    }

    ctx->pc = 0x148608u;

label_148608:
    // 0x148608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_14860c:
    // 0x14860c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_148610:
    // 0x148610: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x148610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_148614:
    // 0x148614: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x148614u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_148618:
    // 0x148618: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x148618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_14861c:
    // 0x14861c: 0x2508a120  addiu       $t0, $t0, -0x5EE0
    ctx->pc = 0x14861cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943008));
label_148620:
    // 0x148620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_148624:
    // 0x148624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x148624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_148628:
    // 0x148628: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x148628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_14862c:
    // 0x14862c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14862cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148630:
    // 0x148630: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x148630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_148634:
    // 0x148634: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x148634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_148638:
    // 0x148638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14863c:
    // 0x14863c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14863cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_148640:
    // 0x148640: 0x24a5a0f0  addiu       $a1, $a1, -0x5F10
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942960));
label_148644:
    // 0x148644: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x148644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_148648:
    // 0x148648: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_14864c:
    // 0x14864c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x14864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_148650:
    // 0x148650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x148650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148654:
    // 0x148654: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x148654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148658:
    // 0x148658: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14865c:
    // 0x14865c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x14865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_148660:
    // 0x148660: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_148664:
    // 0x148664: 0x40f809  jalr        $v0
label_148668:
    if (ctx->pc == 0x148668u) {
        ctx->pc = 0x148668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148664u;
        // 0x148668: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14866Cu;
        goto label_14866c;
    }
    ctx->pc = 0x148664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14866Cu);
        ctx->pc = 0x148668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148664u;
        // 0x148668: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148664u, 0x14866Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14866Cu;
label_14866c:
    // 0x14866c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148670:
    // 0x148670: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_148674:
    if (ctx->pc == 0x148674u) {
        ctx->pc = 0x148674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148670u;
        // 0x148674: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148678u;
        goto label_148678;
    }
    ctx->pc = 0x148670u;
    {
        const bool branch_taken_0x148670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x148674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148670u;
        // 0x148674: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148670) {
            ctx->pc = 0x148680u;
            goto label_148680;
        }
    }
    ctx->pc = 0x148678u;
label_148678:
    // 0x148678: 0x24427ef8  addiu       $v0, $v0, 0x7EF8
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32504));
label_14867c:
    // 0x14867c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_148680:
    // 0x148680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_148684:
    // 0x148684: 0xc0521c2  jal         func_148708
label_148688:
    if (ctx->pc == 0x148688u) {
        ctx->pc = 0x148688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148684u;
        // 0x148688: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14868Cu;
        goto label_14868c;
    }
    ctx->pc = 0x148684u;
    SET_GPR_U32(ctx, 31, 0x14868Cu);
    ctx->pc = 0x148688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148684u;
    // 0x148688: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148708u, 0x148684u, 0x14868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14868Cu;
label_14868c:
    // 0x14868c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14868cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148690:
    // 0x148690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148694:
    // 0x148694: 0xc052492  jal         func_149248
label_148698:
    if (ctx->pc == 0x148698u) {
        ctx->pc = 0x148698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148694u;
        // 0x148698: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14869Cu;
        goto label_14869c;
    }
    ctx->pc = 0x148694u;
    SET_GPR_U32(ctx, 31, 0x14869Cu);
    ctx->pc = 0x148698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148694u;
    // 0x148698: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149248u, 0x148694u, 0x14869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14869Cu;
label_14869c:
    // 0x14869c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14869cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1486a0:
    // 0x1486a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1486a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1486a4:
    // 0x1486a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1486a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1486a8:
    // 0x1486a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1486a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1486ac:
    // 0x1486ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1486acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1486b0:
    // 0x1486b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1486b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1486b4:
    // 0x1486b4: 0x3e00008  jr          $ra
label_1486b8:
    if (ctx->pc == 0x1486B8u) {
        ctx->pc = 0x1486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486B4u;
        // 0x1486b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1486BCu;
        goto label_1486bc;
    }
    ctx->pc = 0x1486B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486B4u;
        // 0x1486b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1486BCu;
label_1486bc:
    // 0x1486bc: 0x0  nop
    ctx->pc = 0x1486bcu;
    // NOP
    ctx->pc = 0x1486c0u;
}
