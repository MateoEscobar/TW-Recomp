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

// Function: sub_001F7538
// Address: 0x1f7538 - 0x1f76a0
void sub_001F7538_0x1f7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7538_0x1f7538");
#endif

    switch (ctx->pc) {
        case 0x1f7538u: goto label_1f7538;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7540u: goto label_1f7540;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7548u: goto label_1f7548;
        case 0x1f754cu: goto label_1f754c;
        case 0x1f7550u: goto label_1f7550;
        case 0x1f7554u: goto label_1f7554;
        case 0x1f7558u: goto label_1f7558;
        case 0x1f755cu: goto label_1f755c;
        case 0x1f7560u: goto label_1f7560;
        case 0x1f7564u: goto label_1f7564;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f756cu: goto label_1f756c;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7584u: goto label_1f7584;
        case 0x1f7588u: goto label_1f7588;
        case 0x1f758cu: goto label_1f758c;
        case 0x1f7590u: goto label_1f7590;
        case 0x1f7594u: goto label_1f7594;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75a0u: goto label_1f75a0;
        case 0x1f75a4u: goto label_1f75a4;
        case 0x1f75a8u: goto label_1f75a8;
        case 0x1f75acu: goto label_1f75ac;
        case 0x1f75b0u: goto label_1f75b0;
        case 0x1f75b4u: goto label_1f75b4;
        case 0x1f75b8u: goto label_1f75b8;
        case 0x1f75bcu: goto label_1f75bc;
        case 0x1f75c0u: goto label_1f75c0;
        case 0x1f75c4u: goto label_1f75c4;
        case 0x1f75c8u: goto label_1f75c8;
        case 0x1f75ccu: goto label_1f75cc;
        case 0x1f75d0u: goto label_1f75d0;
        case 0x1f75d4u: goto label_1f75d4;
        case 0x1f75d8u: goto label_1f75d8;
        case 0x1f75dcu: goto label_1f75dc;
        case 0x1f75e0u: goto label_1f75e0;
        case 0x1f75e4u: goto label_1f75e4;
        case 0x1f75e8u: goto label_1f75e8;
        case 0x1f75ecu: goto label_1f75ec;
        case 0x1f75f0u: goto label_1f75f0;
        case 0x1f75f4u: goto label_1f75f4;
        case 0x1f75f8u: goto label_1f75f8;
        case 0x1f75fcu: goto label_1f75fc;
        case 0x1f7600u: goto label_1f7600;
        case 0x1f7604u: goto label_1f7604;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f760cu: goto label_1f760c;
        case 0x1f7610u: goto label_1f7610;
        case 0x1f7614u: goto label_1f7614;
        case 0x1f7618u: goto label_1f7618;
        case 0x1f761cu: goto label_1f761c;
        case 0x1f7620u: goto label_1f7620;
        case 0x1f7624u: goto label_1f7624;
        case 0x1f7628u: goto label_1f7628;
        case 0x1f762cu: goto label_1f762c;
        case 0x1f7630u: goto label_1f7630;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7638u: goto label_1f7638;
        case 0x1f763cu: goto label_1f763c;
        case 0x1f7640u: goto label_1f7640;
        case 0x1f7644u: goto label_1f7644;
        case 0x1f7648u: goto label_1f7648;
        case 0x1f764cu: goto label_1f764c;
        case 0x1f7650u: goto label_1f7650;
        case 0x1f7654u: goto label_1f7654;
        case 0x1f7658u: goto label_1f7658;
        case 0x1f765cu: goto label_1f765c;
        case 0x1f7660u: goto label_1f7660;
        case 0x1f7664u: goto label_1f7664;
        case 0x1f7668u: goto label_1f7668;
        case 0x1f766cu: goto label_1f766c;
        case 0x1f7670u: goto label_1f7670;
        case 0x1f7674u: goto label_1f7674;
        case 0x1f7678u: goto label_1f7678;
        case 0x1f767cu: goto label_1f767c;
        case 0x1f7680u: goto label_1f7680;
        case 0x1f7684u: goto label_1f7684;
        case 0x1f7688u: goto label_1f7688;
        case 0x1f768cu: goto label_1f768c;
        case 0x1f7690u: goto label_1f7690;
        case 0x1f7694u: goto label_1f7694;
        case 0x1f7698u: goto label_1f7698;
        case 0x1f769cu: goto label_1f769c;
        default: break;
    }

    ctx->pc = 0x1f7538u;

label_1f7538:
    // 0x1f7538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f753c:
    // 0x1f753c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f753cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f7540:
    // 0x1f7540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7544:
    // 0x1f7544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f7544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f7548:
    // 0x1f7548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f754c:
    // 0x1f754c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f754cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7550:
    // 0x1f7550: 0xc0750fa  jal         func_1D43E8
label_1f7554:
    if (ctx->pc == 0x1F7554u) {
        ctx->pc = 0x1F7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7550u;
        // 0x1f7554: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7558u;
        goto label_1f7558;
    }
    ctx->pc = 0x1F7550u;
    SET_GPR_U32(ctx, 31, 0x1F7558u);
    ctx->pc = 0x1F7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7550u;
    // 0x1f7554: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1F7550u, 0x1F7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7558u;
label_1f7558:
    // 0x1f7558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f7558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f755c:
    // 0x1f755c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7560:
    // 0x1f7560: 0x5602001a  bnel        $s0, $v0, . + 4 + (0x1A << 2)
label_1f7564:
    if (ctx->pc == 0x1F7564u) {
        ctx->pc = 0x1F7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7560u;
        // 0x1f7564: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7568u;
        goto label_1f7568;
    }
    ctx->pc = 0x1F7560u;
    {
        const bool branch_taken_0x1f7560 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7560) {
            ctx->pc = 0x1F7564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7560u;
            // 0x1f7564: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F75CCu;
            goto label_1f75cc;
        }
    }
    ctx->pc = 0x1F7568u;
label_1f7568:
    // 0x1f7568: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x1f7568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f756c:
    // 0x1f756c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7570:
    // 0x1f7570: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f7570u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1f7574:
    // 0x1f7574: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7578:
    // 0x1f7578: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f757c:
    // 0x1f757c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7580:
    // 0x1f7580: 0x60f809  jalr        $v1
label_1f7584:
    if (ctx->pc == 0x1F7584u) {
        ctx->pc = 0x1F7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7580u;
        // 0x1f7584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7588u;
        goto label_1f7588;
    }
    ctx->pc = 0x1F7580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7588u);
        ctx->pc = 0x1F7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7580u;
        // 0x1f7584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7580u, 0x1F7588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7588u;
label_1f7588:
    // 0x1f7588: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f758c:
    // 0x1f758c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7590:
    // 0x1f7590: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7594:
    // 0x1f7594: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f7598:
    // 0x1f7598: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f7598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f759c:
    // 0x1f759c: 0x60f809  jalr        $v1
label_1f75a0:
    if (ctx->pc == 0x1F75A0u) {
        ctx->pc = 0x1F75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F759Cu;
        // 0x1f75a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75A4u;
        goto label_1f75a4;
    }
    ctx->pc = 0x1F759Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F75A4u);
        ctx->pc = 0x1F75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F759Cu;
        // 0x1f75a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F759Cu, 0x1F75A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F75A4u;
label_1f75a4:
    // 0x1f75a4: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f75a8:
    // 0x1f75a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f75a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f75ac:
    // 0x1f75ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f75b0:
    // 0x1f75b0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f75b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f75b4:
    // 0x1f75b4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f75b8:
    // 0x1f75b8: 0x60f809  jalr        $v1
label_1f75bc:
    if (ctx->pc == 0x1F75BCu) {
        ctx->pc = 0x1F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75B8u;
        // 0x1f75bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75C0u;
        goto label_1f75c0;
    }
    ctx->pc = 0x1F75B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F75C0u);
        ctx->pc = 0x1F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75B8u;
        // 0x1f75bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75B8u, 0x1F75C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F75C0u;
label_1f75c0:
    // 0x1f75c0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f75c4:
    // 0x1f75c4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1f75c8:
    if (ctx->pc == 0x1F75C8u) {
        ctx->pc = 0x1F75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75C4u;
        // 0x1f75c8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75CCu;
        goto label_1f75cc;
    }
    ctx->pc = 0x1F75C4u;
    {
        const bool branch_taken_0x1f75c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75C4u;
        // 0x1f75c8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75c4) {
            ctx->pc = 0x1F7668u;
            goto label_1f7668;
        }
    }
    ctx->pc = 0x1F75CCu;
label_1f75cc:
    // 0x1f75cc: 0x1602002f  bne         $s0, $v0, . + 4 + (0x2F << 2)
label_1f75d0:
    if (ctx->pc == 0x1F75D0u) {
        ctx->pc = 0x1F75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75CCu;
        // 0x1f75d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75D4u;
        goto label_1f75d4;
    }
    ctx->pc = 0x1F75CCu;
    {
        const bool branch_taken_0x1f75cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75CCu;
        // 0x1f75d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75cc) {
            ctx->pc = 0x1F768Cu;
            goto label_1f768c;
        }
    }
    ctx->pc = 0x1F75D4u;
label_1f75d4:
    // 0x1f75d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f75d8:
    // 0x1f75d8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1f75dc:
    if (ctx->pc == 0x1F75DCu) {
        ctx->pc = 0x1F75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75D8u;
        // 0x1f75dc: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75E0u;
        goto label_1f75e0;
    }
    ctx->pc = 0x1F75D8u;
    {
        const bool branch_taken_0x1f75d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75D8u;
        // 0x1f75dc: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75d8) {
            ctx->pc = 0x1F763Cu;
            goto label_1f763c;
        }
    }
    ctx->pc = 0x1F75E0u;
label_1f75e0:
    // 0x1f75e0: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f75e4:
    // 0x1f75e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f75e8:
    // 0x1f75e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f75ec:
    // 0x1f75ec: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f75f0:
    // 0x1f75f0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f75f4:
    // 0x1f75f4: 0x60f809  jalr        $v1
label_1f75f8:
    if (ctx->pc == 0x1F75F8u) {
        ctx->pc = 0x1F75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75F4u;
        // 0x1f75f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75FCu;
        goto label_1f75fc;
    }
    ctx->pc = 0x1F75F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F75FCu);
        ctx->pc = 0x1F75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75F4u;
        // 0x1f75f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75F4u, 0x1F75FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F75FCu;
label_1f75fc:
    // 0x1f75fc: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x1f75fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f7600:
    // 0x1f7600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7604:
    // 0x1f7604: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7608:
    // 0x1f7608: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f760c:
    // 0x1f760c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7610:
    // 0x1f7610: 0x60f809  jalr        $v1
label_1f7614:
    if (ctx->pc == 0x1F7614u) {
        ctx->pc = 0x1F7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7610u;
        // 0x1f7614: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7618u;
        goto label_1f7618;
    }
    ctx->pc = 0x1F7610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7618u);
        ctx->pc = 0x1F7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7610u;
        // 0x1f7614: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7610u, 0x1F7618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7618u;
label_1f7618:
    // 0x1f7618: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f761c:
    // 0x1f761c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7620:
    // 0x1f7620: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7624:
    // 0x1f7624: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f7628:
    // 0x1f7628: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f762c:
    // 0x1f762c: 0x60f809  jalr        $v1
label_1f7630:
    if (ctx->pc == 0x1F7630u) {
        ctx->pc = 0x1F7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F762Cu;
        // 0x1f7630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7634u;
        goto label_1f7634;
    }
    ctx->pc = 0x1F762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7634u);
        ctx->pc = 0x1F7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F762Cu;
        // 0x1f7630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F762Cu, 0x1F7634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7634u;
label_1f7634:
    // 0x1f7634: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f7638:
    if (ctx->pc == 0x1F7638u) {
        ctx->pc = 0x1F7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7634u;
        // 0x1f7638: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F763Cu;
        goto label_1f763c;
    }
    ctx->pc = 0x1F7634u;
    {
        const bool branch_taken_0x1f7634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7634u;
        // 0x1f7638: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7634) {
            ctx->pc = 0x1F7660u;
            goto label_1f7660;
        }
    }
    ctx->pc = 0x1F763Cu;
label_1f763c:
    // 0x1f763c: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x1f763cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_1f7640:
    // 0x1f7640: 0xc080b0c  jal         func_202C30
label_1f7644:
    if (ctx->pc == 0x1F7644u) {
        ctx->pc = 0x1F7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7640u;
        // 0x1f7644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7648u;
        goto label_1f7648;
    }
    ctx->pc = 0x1F7640u;
    SET_GPR_U32(ctx, 31, 0x1F7648u);
    ctx->pc = 0x1F7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7640u;
    // 0x1f7644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F7640u, 0x1F7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7648u;
label_1f7648:
    // 0x1f7648: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f764c:
    // 0x1f764c: 0xc080ac2  jal         func_202B08
label_1f7650:
    if (ctx->pc == 0x1F7650u) {
        ctx->pc = 0x1F7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F764Cu;
        // 0x1f7650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7654u;
        goto label_1f7654;
    }
    ctx->pc = 0x1F764Cu;
    SET_GPR_U32(ctx, 31, 0x1F7654u);
    ctx->pc = 0x1F7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F764Cu;
    // 0x1f7650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F764Cu, 0x1F7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7654u;
label_1f7654:
    // 0x1f7654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7658:
    // 0x1f7658: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1f7658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1f765c:
    // 0x1f765c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f765cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1f7660:
    // 0x1f7660: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f7664:
    // 0x1f7664: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f7664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f7668:
    // 0x1f7668: 0xc04444c  jal         func_111130
label_1f766c:
    if (ctx->pc == 0x1F766Cu) {
        ctx->pc = 0x1F7670u;
        goto label_1f7670;
    }
    ctx->pc = 0x1F7668u;
    SET_GPR_U32(ctx, 31, 0x1F7670u);
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1F7668u, 0x1F7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7670u;
label_1f7670:
    // 0x1f7670: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1f7674:
    // 0x1f7674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7678:
    // 0x1f7678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f767c:
    // 0x1f767c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f767cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7680:
    // 0x1f7680: 0xc043f36  jal         func_10FCD8
label_1f7684:
    if (ctx->pc == 0x1F7684u) {
        ctx->pc = 0x1F7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7680u;
        // 0x1f7684: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7688u;
        goto label_1f7688;
    }
    ctx->pc = 0x1F7680u;
    SET_GPR_U32(ctx, 31, 0x1F7688u);
    ctx->pc = 0x1F7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7680u;
    // 0x1f7684: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1F7680u, 0x1F7688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7688u;
label_1f7688:
    // 0x1f7688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f768c:
    // 0x1f768c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f768cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7690:
    // 0x1f7690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7694:
    // 0x1f7694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7698:
    // 0x1f7698: 0x3e00008  jr          $ra
label_1f769c:
    if (ctx->pc == 0x1F769Cu) {
        ctx->pc = 0x1F769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7698u;
        // 0x1f769c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76A0u;
        goto label_fallthrough_0x1f7698;
    }
    ctx->pc = 0x1F7698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7698u;
        // 0x1f769c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f7698:
    ctx->pc = 0x1F76A0u;
}
