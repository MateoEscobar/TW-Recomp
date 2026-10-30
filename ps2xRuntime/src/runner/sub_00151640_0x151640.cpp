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

// Function: sub_00151640
// Address: 0x151640 - 0x151750
void sub_00151640_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151640_0x151640");
#endif

    switch (ctx->pc) {
        case 0x151698u: goto label_151698;
        case 0x1516a0u: goto label_1516a0;
        case 0x1516acu: goto label_1516ac;
        case 0x1516b4u: goto label_1516b4;
        case 0x1516dcu: goto label_1516dc;
        case 0x1516e8u: goto label_1516e8;
        case 0x15171cu: goto label_15171c;
        case 0x15172cu: goto label_15172c;
        default: break;
    }

    ctx->pc = 0x151640u;

    // 0x151640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151644: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15164c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151650: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x151650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x151654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151654u;
    {
        const bool branch_taken_0x151654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151654) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x15165Cu;
    // 0x15165c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x151660: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151660u;
    {
        const bool branch_taken_0x151660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151660u;
        // 0x151664: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151660) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x151668u;
    // 0x151668: 0x16020021  bne         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x151668u;
    {
        const bool branch_taken_0x151668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x15166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151668u;
        // 0x15166c: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151668) {
            ctx->pc = 0x1516F0u;
            goto label_1516f0;
        }
    }
    ctx->pc = 0x151670u;
label_151670:
    // 0x151670: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x151674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151678: 0x245141b0  addiu       $s1, $v0, 0x41B0
    ctx->pc = 0x151678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
    // 0x15167c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E41C4u));
    // 0x151680: 0x54640014  bnel        $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x151680u;
    {
        const bool branch_taken_0x151680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x151680) {
            ctx->pc = 0x151684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151680u;
            // 0x151684: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1516D4u;
            goto label_1516d4;
        }
    }
    ctx->pc = 0x151688u;
    // 0x151688: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x15168c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x15168cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x151690: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x151690u;
    SET_GPR_U32(ctx, 31, 0x151698u);
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x151690u, 0x151698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151698u;
label_151698:
    // 0x151698: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151698u;
    SET_GPR_U32(ctx, 31, 0x1516A0u);
    ctx->pc = 0x15169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151698u;
    // 0x15169c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151698u, 0x1516A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516A0u;
label_1516a0:
    // 0x1516a0: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1516a4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1516A4u;
    SET_GPR_U32(ctx, 31, 0x1516ACu);
    ctx->pc = 0x1516A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516A4u;
    // 0x1516a8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1516A4u, 0x1516ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516ACu;
label_1516ac:
    // 0x1516ac: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1516ACu;
    SET_GPR_U32(ctx, 31, 0x1516B4u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1516ACu, 0x1516B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516B4u;
label_1516b4:
    // 0x1516b4: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x1516b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1516b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1516bc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1516BCu;
    {
        const bool branch_taken_0x1516bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1516bc) {
            ctx->pc = 0x1516C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1516BCu;
            // 0x1516c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151730u;
            goto label_151730;
        }
    }
    ctx->pc = 0x1516C4u;
    // 0x1516c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1516c8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1516c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1516cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1516CCu;
    {
        const bool branch_taken_0x1516cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516CCu;
        // 0x1516d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516cc) {
            ctx->pc = 0x151730u;
            goto label_151730;
        }
    }
    ctx->pc = 0x1516D4u;
label_1516d4:
    // 0x1516d4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1516D4u;
    SET_GPR_U32(ctx, 31, 0x1516DCu);
    ctx->pc = 0x1516D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516D4u;
    // 0x1516d8: 0x2484cab0  addiu       $a0, $a0, -0x3550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1516D4u, 0x1516DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516DCu;
label_1516dc:
    // 0x1516dc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1516e0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1516E0u;
    SET_GPR_U32(ctx, 31, 0x1516E8u);
    ctx->pc = 0x1516E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516E0u;
    // 0x1516e4: 0x2484cad0  addiu       $a0, $a0, -0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1516E0u, 0x1516E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516E8u;
label_1516e8:
    // 0x1516e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1516E8u;
    {
        const bool branch_taken_0x1516e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516E8u;
        // 0x1516ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516e8) {
            ctx->pc = 0x151730u;
            goto label_151730;
        }
    }
    ctx->pc = 0x1516F0u;
label_1516f0:
    // 0x1516f0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1516f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1516f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1516F4u;
    {
        const bool branch_taken_0x1516f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516F4u;
        // 0x1516f8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516f4) {
            ctx->pc = 0x151710u;
            goto label_151710;
        }
    }
    ctx->pc = 0x1516FCu;
    // 0x1516fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1516fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151700: 0x246341b0  addiu       $v1, $v1, 0x41B0
    ctx->pc = 0x151700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16816));
    // 0x151704: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x151704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x151708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151708u;
        // 0x15170c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151708) {
            ctx->pc = 0x151734u;
            goto label_151734;
        }
    }
    ctx->pc = 0x151710u;
label_151710:
    // 0x151710: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151714: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151714u;
    SET_GPR_U32(ctx, 31, 0x15171Cu);
    ctx->pc = 0x151718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151714u;
    // 0x151718: 0x2484cab0  addiu       $a0, $a0, -0x3550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151714u, 0x15171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15171Cu;
label_15171c:
    // 0x15171c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151724: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151724u;
    SET_GPR_U32(ctx, 31, 0x15172Cu);
    ctx->pc = 0x151728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151724u;
    // 0x151728: 0x2484caf0  addiu       $a0, $a0, -0x3510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151724u, 0x15172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15172Cu;
label_15172c:
    // 0x15172c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151730:
    // 0x151730: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151734:
    // 0x151734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15173c: 0x3e00008  jr          $ra
    ctx->pc = 0x15173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15173Cu;
        // 0x151740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x0  nop
    ctx->pc = 0x151744u;
    // NOP
    // 0x151748: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x151748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x15174c: 0x0  nop
    ctx->pc = 0x15174cu;
    // NOP
    ctx->pc = 0x151750u;
}
