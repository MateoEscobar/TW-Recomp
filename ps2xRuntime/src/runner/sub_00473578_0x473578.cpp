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

// Function: sub_00473578
// Address: 0x473578 - 0x473648
void sub_00473578_0x473578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473578_0x473578");
#endif

    switch (ctx->pc) {
        case 0x473578u: goto label_473578;
        case 0x47357cu: goto label_47357c;
        case 0x473580u: goto label_473580;
        case 0x473584u: goto label_473584;
        case 0x473588u: goto label_473588;
        case 0x47358cu: goto label_47358c;
        case 0x473590u: goto label_473590;
        case 0x473594u: goto label_473594;
        case 0x473598u: goto label_473598;
        case 0x47359cu: goto label_47359c;
        case 0x4735a0u: goto label_4735a0;
        case 0x4735a4u: goto label_4735a4;
        case 0x4735a8u: goto label_4735a8;
        case 0x4735acu: goto label_4735ac;
        case 0x4735b0u: goto label_4735b0;
        case 0x4735b4u: goto label_4735b4;
        case 0x4735b8u: goto label_4735b8;
        case 0x4735bcu: goto label_4735bc;
        case 0x4735c0u: goto label_4735c0;
        case 0x4735c4u: goto label_4735c4;
        case 0x4735c8u: goto label_4735c8;
        case 0x4735ccu: goto label_4735cc;
        case 0x4735d0u: goto label_4735d0;
        case 0x4735d4u: goto label_4735d4;
        case 0x4735d8u: goto label_4735d8;
        case 0x4735dcu: goto label_4735dc;
        case 0x4735e0u: goto label_4735e0;
        case 0x4735e4u: goto label_4735e4;
        case 0x4735e8u: goto label_4735e8;
        case 0x4735ecu: goto label_4735ec;
        case 0x4735f0u: goto label_4735f0;
        case 0x4735f4u: goto label_4735f4;
        case 0x4735f8u: goto label_4735f8;
        case 0x4735fcu: goto label_4735fc;
        case 0x473600u: goto label_473600;
        case 0x473604u: goto label_473604;
        case 0x473608u: goto label_473608;
        case 0x47360cu: goto label_47360c;
        case 0x473610u: goto label_473610;
        case 0x473614u: goto label_473614;
        case 0x473618u: goto label_473618;
        case 0x47361cu: goto label_47361c;
        case 0x473620u: goto label_473620;
        case 0x473624u: goto label_473624;
        case 0x473628u: goto label_473628;
        case 0x47362cu: goto label_47362c;
        case 0x473630u: goto label_473630;
        case 0x473634u: goto label_473634;
        case 0x473638u: goto label_473638;
        case 0x47363cu: goto label_47363c;
        case 0x473640u: goto label_473640;
        case 0x473644u: goto label_473644;
        default: break;
    }

    ctx->pc = 0x473578u;

label_473578:
    // 0x473578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x473578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47357c:
    // 0x47357c: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x47357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
label_473580:
    // 0x473580: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x473580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_473584:
    // 0x473584: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x473584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_473588:
    // 0x473588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x473588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47358c:
    // 0x47358c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x47358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_473590:
    // 0x473590: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x473590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_473594:
    // 0x473594: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x473594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_473598:
    // 0x473598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47359c:
    // 0x47359c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4735a0:
    // 0x4735a0: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x4735a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_4735a4:
    // 0x4735a4: 0x1212001d  beq         $s0, $s2, . + 4 + (0x1D << 2)
label_4735a8:
    if (ctx->pc == 0x4735A8u) {
        ctx->pc = 0x4735A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735A4u;
        // 0x4735a8: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4735ACu;
        goto label_4735ac;
    }
    ctx->pc = 0x4735A4u;
    {
        const bool branch_taken_0x4735a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4735A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735A4u;
        // 0x4735a8: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4735a4) {
            ctx->pc = 0x47361Cu;
            goto label_47361c;
        }
    }
    ctx->pc = 0x4735ACu;
label_4735ac:
    // 0x4735ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4735acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4735b0:
    // 0x4735b0: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x4735b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4735b4:
    // 0x4735b4: 0x2607fff4  addiu       $a3, $s0, -0xC
    ctx->pc = 0x4735b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_4735b8:
    // 0x4735b8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4735b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4735bc:
    // 0x4735bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4735c0:
    if (ctx->pc == 0x4735C0u) {
        ctx->pc = 0x4735C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735BCu;
        // 0x4735c0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4735C4u;
        goto label_4735c4;
    }
    ctx->pc = 0x4735BCu;
    {
        const bool branch_taken_0x4735bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4735C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735BCu;
        // 0x4735c0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4735bc) {
            ctx->pc = 0x473614u;
            goto label_473614;
        }
    }
    ctx->pc = 0x4735C4u;
label_4735c4:
    // 0x4735c4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4735c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_4735c8:
    // 0x4735c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4735cc:
    if (ctx->pc == 0x4735CCu) {
        ctx->pc = 0x4735CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735C8u;
        // 0x4735cc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4735D0u;
        goto label_4735d0;
    }
    ctx->pc = 0x4735C8u;
    {
        const bool branch_taken_0x4735c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4735CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4735C8u;
        // 0x4735cc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4735c8) {
            ctx->pc = 0x473614u;
            goto label_473614;
        }
    }
    ctx->pc = 0x4735D0u;
label_4735d0:
    // 0x4735d0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x4735d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_4735d4:
    // 0x4735d4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4735d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_4735d8:
    // 0x4735d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4735d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4735dc:
    // 0x4735dc: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x4735dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_4735e0:
    // 0x4735e0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4735e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_4735e4:
    // 0x4735e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4735e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4735e8:
    // 0x4735e8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4735e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4735ec:
    // 0x4735ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4735f0:
    // 0x4735f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4735f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4735f4:
    // 0x4735f4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4735f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4735f8:
    // 0x4735f8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4735f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4735fc:
    // 0x4735fc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4735fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_473600:
    // 0x473600: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_473604:
    // 0x473604: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x473604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_473608:
    // 0x473608: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x473608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_47360c:
    // 0x47360c: 0x40f809  jalr        $v0
label_473610:
    if (ctx->pc == 0x473610u) {
        ctx->pc = 0x473610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47360Cu;
        // 0x473610: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473614u;
        goto label_473614;
    }
    ctx->pc = 0x47360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473614u);
        ctx->pc = 0x473610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47360Cu;
        // 0x473610: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47360Cu, 0x473614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473614u;
label_473614:
    // 0x473614: 0x1612ffe8  bne         $s0, $s2, . + 4 + (-0x18 << 2)
label_473618:
    if (ctx->pc == 0x473618u) {
        ctx->pc = 0x473618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473614u;
        // 0x473618: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47361Cu;
        goto label_47361c;
    }
    ctx->pc = 0x473614u;
    {
        const bool branch_taken_0x473614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x473618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473614u;
        // 0x473618: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473614) {
            ctx->pc = 0x4735B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4735b8;
        }
    }
    ctx->pc = 0x47361Cu;
label_47361c:
    // 0x47361c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x47361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_473620:
    // 0x473620: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x473620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473624:
    // 0x473624: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x473624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_473628:
    // 0x473628: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x473628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_47362c:
    // 0x47362c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47362cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_473630:
    // 0x473630: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x473630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473634:
    // 0x473634: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x473634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473638:
    // 0x473638: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x473638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47363c:
    // 0x47363c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47363cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473640:
    // 0x473640: 0x3e00008  jr          $ra
label_473644:
    if (ctx->pc == 0x473644u) {
        ctx->pc = 0x473644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473640u;
        // 0x473644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473648u;
        goto label_fallthrough_0x473640;
    }
    ctx->pc = 0x473640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473640u;
        // 0x473644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x473640:
    ctx->pc = 0x473648u;
}
