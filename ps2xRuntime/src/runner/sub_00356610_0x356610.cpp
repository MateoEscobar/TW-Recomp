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

// Function: sub_00356610
// Address: 0x356610 - 0x3566d8
void sub_00356610_0x356610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356610_0x356610");
#endif

    switch (ctx->pc) {
        case 0x356610u: goto label_356610;
        case 0x356614u: goto label_356614;
        case 0x356618u: goto label_356618;
        case 0x35661cu: goto label_35661c;
        case 0x356620u: goto label_356620;
        case 0x356624u: goto label_356624;
        case 0x356628u: goto label_356628;
        case 0x35662cu: goto label_35662c;
        case 0x356630u: goto label_356630;
        case 0x356634u: goto label_356634;
        case 0x356638u: goto label_356638;
        case 0x35663cu: goto label_35663c;
        case 0x356640u: goto label_356640;
        case 0x356644u: goto label_356644;
        case 0x356648u: goto label_356648;
        case 0x35664cu: goto label_35664c;
        case 0x356650u: goto label_356650;
        case 0x356654u: goto label_356654;
        case 0x356658u: goto label_356658;
        case 0x35665cu: goto label_35665c;
        case 0x356660u: goto label_356660;
        case 0x356664u: goto label_356664;
        case 0x356668u: goto label_356668;
        case 0x35666cu: goto label_35666c;
        case 0x356670u: goto label_356670;
        case 0x356674u: goto label_356674;
        case 0x356678u: goto label_356678;
        case 0x35667cu: goto label_35667c;
        case 0x356680u: goto label_356680;
        case 0x356684u: goto label_356684;
        case 0x356688u: goto label_356688;
        case 0x35668cu: goto label_35668c;
        case 0x356690u: goto label_356690;
        case 0x356694u: goto label_356694;
        case 0x356698u: goto label_356698;
        case 0x35669cu: goto label_35669c;
        case 0x3566a0u: goto label_3566a0;
        case 0x3566a4u: goto label_3566a4;
        case 0x3566a8u: goto label_3566a8;
        case 0x3566acu: goto label_3566ac;
        case 0x3566b0u: goto label_3566b0;
        case 0x3566b4u: goto label_3566b4;
        case 0x3566b8u: goto label_3566b8;
        case 0x3566bcu: goto label_3566bc;
        case 0x3566c0u: goto label_3566c0;
        case 0x3566c4u: goto label_3566c4;
        case 0x3566c8u: goto label_3566c8;
        case 0x3566ccu: goto label_3566cc;
        case 0x3566d0u: goto label_3566d0;
        case 0x3566d4u: goto label_3566d4;
        default: break;
    }

    ctx->pc = 0x356610u;

label_356610:
    // 0x356610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_356614:
    // 0x356614: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x356614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_356618:
    // 0x356618: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x356618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_35661c:
    // 0x35661c: 0x244249b8  addiu       $v0, $v0, 0x49B8
    ctx->pc = 0x35661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18872));
label_356620:
    // 0x356620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356624:
    // 0x356624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356628:
    // 0x356628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35662c:
    // 0x35662c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_356630:
    // 0x356630: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x356630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_356634:
    // 0x356634: 0xc0e0fcc  jal         func_383F30
label_356638:
    if (ctx->pc == 0x356638u) {
        ctx->pc = 0x356638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356634u;
        // 0x356638: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35663Cu;
        goto label_35663c;
    }
    ctx->pc = 0x356634u;
    SET_GPR_U32(ctx, 31, 0x35663Cu);
    ctx->pc = 0x356638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356634u;
    // 0x356638: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383F30u, 0x356634u, 0x35663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35663Cu;
label_35663c:
    // 0x35663c: 0xc0cbde0  jal         func_32F780
label_356640:
    if (ctx->pc == 0x356640u) {
        ctx->pc = 0x356640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35663Cu;
        // 0x356640: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356644u;
        goto label_356644;
    }
    ctx->pc = 0x35663Cu;
    SET_GPR_U32(ctx, 31, 0x356644u);
    ctx->pc = 0x356640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35663Cu;
    // 0x356640: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F780u, 0x35663Cu, 0x356644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356644u;
label_356644:
    // 0x356644: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x356644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_356648:
    // 0x356648: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x356648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_35664c:
    // 0x35664c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x35664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_356650:
    // 0x356650: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x356650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_356654:
    // 0x356654: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_356658:
    if (ctx->pc == 0x356658u) {
        ctx->pc = 0x356658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356654u;
        // 0x356658: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35665Cu;
        goto label_35665c;
    }
    ctx->pc = 0x356654u;
    {
        const bool branch_taken_0x356654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356654) {
            ctx->pc = 0x356658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356654u;
            // 0x356658: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35667Cu;
            goto label_35667c;
        }
    }
    ctx->pc = 0x35665Cu;
label_35665c:
    // 0x35665c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_356660:
    // 0x356660: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x356660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_356664:
    // 0x356664: 0x0  nop
    ctx->pc = 0x356664u;
    // NOP
label_356668:
    // 0x356668: 0x0  nop
    ctx->pc = 0x356668u;
    // NOP
label_35666c:
    // 0x35666c: 0x0  nop
    ctx->pc = 0x35666cu;
    // NOP
label_356670:
    // 0x356670: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_356674:
    if (ctx->pc == 0x356674u) {
        ctx->pc = 0x356674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356670u;
        // 0x356674: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356678u;
        goto label_356678;
    }
    ctx->pc = 0x356670u;
    {
        const bool branch_taken_0x356670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356670u;
        // 0x356674: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356670) {
            ctx->pc = 0x356660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356660;
        }
    }
    ctx->pc = 0x356678u;
label_356678:
    // 0x356678: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35667c:
    // 0x35667c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_356680:
    if (ctx->pc == 0x356680u) {
        ctx->pc = 0x356680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35667Cu;
        // 0x356680: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356684u;
        goto label_356684;
    }
    ctx->pc = 0x35667Cu;
    {
        const bool branch_taken_0x35667c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x356680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35667Cu;
        // 0x356680: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35667c) {
            ctx->pc = 0x3566A8u;
            goto label_3566a8;
        }
    }
    ctx->pc = 0x356684u;
label_356684:
    // 0x356684: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_356688:
    // 0x356688: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x356688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_35668c:
    // 0x35668c: 0x24c68fd8  addiu       $a2, $a2, -0x7028
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938584));
label_356690:
    // 0x356690: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_356694:
    // 0x356694: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_356698:
    // 0x356698: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_35669c:
    // 0x35669c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3566a0:
    // 0x3566a0: 0x60f809  jalr        $v1
label_3566a4:
    if (ctx->pc == 0x3566A4u) {
        ctx->pc = 0x3566A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566A0u;
        // 0x3566a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3566A8u;
        goto label_3566a8;
    }
    ctx->pc = 0x3566A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3566A8u);
        ctx->pc = 0x3566A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566A0u;
        // 0x3566a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3566A0u, 0x3566A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3566A8u;
label_3566a8:
    // 0x3566a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3566ac:
    // 0x3566ac: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x3566acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3566b0:
    // 0x3566b0: 0x24424aa8  addiu       $v0, $v0, 0x4AA8
    ctx->pc = 0x3566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19112));
label_3566b4:
    // 0x3566b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3566b8:
    if (ctx->pc == 0x3566B8u) {
        ctx->pc = 0x3566B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566B4u;
        // 0x3566b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3566BCu;
        goto label_3566bc;
    }
    ctx->pc = 0x3566B4u;
    {
        const bool branch_taken_0x3566b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3566B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566B4u;
        // 0x3566b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566b4) {
            ctx->pc = 0x3566C4u;
            goto label_3566c4;
        }
    }
    ctx->pc = 0x3566BCu;
label_3566bc:
    // 0x3566bc: 0xc10b208  jal         func_42C820
label_3566c0:
    if (ctx->pc == 0x3566C0u) {
        ctx->pc = 0x3566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566BCu;
        // 0x3566c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3566C4u;
        goto label_3566c4;
    }
    ctx->pc = 0x3566BCu;
    SET_GPR_U32(ctx, 31, 0x3566C4u);
    ctx->pc = 0x3566C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566BCu;
    // 0x3566c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x3566BCu, 0x3566C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566C4u;
label_3566c4:
    // 0x3566c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3566c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3566c8:
    // 0x3566c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3566c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3566cc:
    // 0x3566cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3566ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3566d0:
    // 0x3566d0: 0x3e00008  jr          $ra
label_3566d4:
    if (ctx->pc == 0x3566D4u) {
        ctx->pc = 0x3566D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566D0u;
        // 0x3566d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3566D8u;
        goto label_fallthrough_0x3566d0;
    }
    ctx->pc = 0x3566D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3566D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566D0u;
        // 0x3566d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3566D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3566d0:
    ctx->pc = 0x3566D8u;
}
