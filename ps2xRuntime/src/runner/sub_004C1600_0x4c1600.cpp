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

// Function: sub_004C1600
// Address: 0x4c1600 - 0x4c16c8
void sub_004C1600_0x4c1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1600_0x4c1600");
#endif

    switch (ctx->pc) {
        case 0x4c1634u: goto label_4c1634;
        case 0x4c1648u: goto label_4c1648;
        case 0x4c166cu: goto label_4c166c;
        case 0x4c1688u: goto label_4c1688;
        case 0x4c16a8u: goto label_4c16a8;
        default: break;
    }

    ctx->pc = 0x4c1600u;

    // 0x4c1600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c1604: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4c1604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4c1608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c1608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c160c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4c160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4c1610: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c1610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1614: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4c1614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4c1618: 0x24a56f50  addiu       $a1, $a1, 0x6F50
    ctx->pc = 0x4c1618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28496));
    // 0x4c161c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4c161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4c1620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4c1624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c1628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c162c: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x4C162Cu;
    SET_GPR_U32(ctx, 31, 0x4C1634u);
    ctx->pc = 0x4C1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C162Cu;
    // 0x4c1630: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x4C162Cu, 0x4C1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1634u;
label_4c1634:
    // 0x4c1634: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4c1634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4c1638: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x4c1638u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c163c: 0x24a56f58  addiu       $a1, $a1, 0x6F58
    ctx->pc = 0x4c163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28504));
    // 0x4c1640: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x4C1640u;
    SET_GPR_U32(ctx, 31, 0x4C1648u);
    ctx->pc = 0x4C1644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1640u;
    // 0x4c1644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x4C1640u, 0x4C1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1648u;
label_4c1648:
    // 0x4c1648: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C1648u;
    {
        const bool branch_taken_0x4c1648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1648u;
        // 0x4c164c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1648) {
            ctx->pc = 0x4C1660u;
            goto label_4c1660;
        }
    }
    ctx->pc = 0x4C1650u;
    // 0x4c1650: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C1650u;
    {
        const bool branch_taken_0x4c1650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1650u;
        // 0x4c1654: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1650) {
            ctx->pc = 0x4C1660u;
            goto label_4c1660;
        }
    }
    ctx->pc = 0x4C1658u;
    // 0x4c1658: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x4c1658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c165c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4c165cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4c1660:
    // 0x4c1660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1664: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x4C1664u;
    SET_GPR_U32(ctx, 31, 0x4C166Cu);
    ctx->pc = 0x4C1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1664u;
    // 0x4c1668: 0x24a56f60  addiu       $a1, $a1, 0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x4C1664u, 0x4C166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C166Cu;
label_4c166c:
    // 0x4c166c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C166Cu;
    {
        const bool branch_taken_0x4c166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C166Cu;
        // 0x4c1670: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c166c) {
            ctx->pc = 0x4C167Cu;
            goto label_4c167c;
        }
    }
    ctx->pc = 0x4C1674u;
    // 0x4c1674: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x4c1674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x4c1678: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x4c1678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
label_4c167c:
    // 0x4c167c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1680: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x4C1680u;
    SET_GPR_U32(ctx, 31, 0x4C1688u);
    ctx->pc = 0x4C1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1680u;
    // 0x4c1684: 0x24a56f68  addiu       $a1, $a1, 0x6F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x4C1680u, 0x4C1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1688u;
label_4c1688:
    // 0x4c1688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C1688u;
    {
        const bool branch_taken_0x4c1688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1688u;
        // 0x4c168c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1688) {
            ctx->pc = 0x4C1698u;
            goto label_4c1698;
        }
    }
    ctx->pc = 0x4C1690u;
    // 0x4c1690: 0x3610000a  ori         $s0, $s0, 0xA
    ctx->pc = 0x4c1690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10);
    // 0x4c1694: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x4c1694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
label_4c1698:
    // 0x4c1698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c1698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c169c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c169cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c16a0: 0xc1304d2  jal         func_4C1348
    ctx->pc = 0x4C16A0u;
    SET_GPR_U32(ctx, 31, 0x4C16A8u);
    ctx->pc = 0x4C16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C16A0u;
    // 0x4c16a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1348u, 0x4C16A0u, 0x4C16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C16A8u;
label_4c16a8:
    // 0x4c16a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4c16a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c16ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4c16acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c16b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c16b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c16b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4c16b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c16b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c16b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c16bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C16BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C16BCu;
        // 0x4c16c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C16BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C16C4u;
    // 0x4c16c4: 0x0  nop
    ctx->pc = 0x4c16c4u;
    // NOP
    ctx->pc = 0x4c16c8u;
}
