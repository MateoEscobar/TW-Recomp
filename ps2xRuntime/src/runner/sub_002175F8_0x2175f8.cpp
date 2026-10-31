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

// Function: sub_002175F8
// Address: 0x2175f8 - 0x2176b8
void sub_002175F8_0x2175f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175F8_0x2175f8");
#endif

    switch (ctx->pc) {
        case 0x2175f8u: goto label_2175f8;
        case 0x2175fcu: goto label_2175fc;
        case 0x217600u: goto label_217600;
        case 0x217604u: goto label_217604;
        case 0x217608u: goto label_217608;
        case 0x21760cu: goto label_21760c;
        case 0x217610u: goto label_217610;
        case 0x217614u: goto label_217614;
        case 0x217618u: goto label_217618;
        case 0x21761cu: goto label_21761c;
        case 0x217620u: goto label_217620;
        case 0x217624u: goto label_217624;
        case 0x217628u: goto label_217628;
        case 0x21762cu: goto label_21762c;
        case 0x217630u: goto label_217630;
        case 0x217634u: goto label_217634;
        case 0x217638u: goto label_217638;
        case 0x21763cu: goto label_21763c;
        case 0x217640u: goto label_217640;
        case 0x217644u: goto label_217644;
        case 0x217648u: goto label_217648;
        case 0x21764cu: goto label_21764c;
        case 0x217650u: goto label_217650;
        case 0x217654u: goto label_217654;
        case 0x217658u: goto label_217658;
        case 0x21765cu: goto label_21765c;
        case 0x217660u: goto label_217660;
        case 0x217664u: goto label_217664;
        case 0x217668u: goto label_217668;
        case 0x21766cu: goto label_21766c;
        case 0x217670u: goto label_217670;
        case 0x217674u: goto label_217674;
        case 0x217678u: goto label_217678;
        case 0x21767cu: goto label_21767c;
        case 0x217680u: goto label_217680;
        case 0x217684u: goto label_217684;
        case 0x217688u: goto label_217688;
        case 0x21768cu: goto label_21768c;
        case 0x217690u: goto label_217690;
        case 0x217694u: goto label_217694;
        case 0x217698u: goto label_217698;
        case 0x21769cu: goto label_21769c;
        case 0x2176a0u: goto label_2176a0;
        case 0x2176a4u: goto label_2176a4;
        case 0x2176a8u: goto label_2176a8;
        case 0x2176acu: goto label_2176ac;
        case 0x2176b0u: goto label_2176b0;
        case 0x2176b4u: goto label_2176b4;
        default: break;
    }

    ctx->pc = 0x2175f8u;

label_2175f8:
    // 0x2175f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2175f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2175fc:
    // 0x2175fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2175fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_217600:
    // 0x217600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_217604:
    // 0x217604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217608:
    // 0x217608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21760c:
    // 0x21760c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217610:
    // 0x217610: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_217614:
    if (ctx->pc == 0x217614u) {
        ctx->pc = 0x217614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217610u;
        // 0x217614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217618u;
        goto label_217618;
    }
    ctx->pc = 0x217610u;
    {
        const bool branch_taken_0x217610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217610u;
        // 0x217614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217610) {
            ctx->pc = 0x2176A4u;
            goto label_2176a4;
        }
    }
    ctx->pc = 0x217618u;
label_217618:
    // 0x217618: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x217618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_21761c:
    // 0x21761c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217620:
    // 0x217620: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_217624:
    // 0x217624: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x217624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_217628:
    // 0x217628: 0x60f809  jalr        $v1
label_21762c:
    if (ctx->pc == 0x21762Cu) {
        ctx->pc = 0x21762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217628u;
        // 0x21762c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217630u;
        goto label_217630;
    }
    ctx->pc = 0x217628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217630u);
        ctx->pc = 0x21762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217628u;
        // 0x21762c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217628u, 0x217630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217630u;
label_217630:
    // 0x217630: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x217630u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_217634:
    // 0x217634: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x217634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_217638:
    // 0x217638: 0x2610a370  addiu       $s0, $s0, -0x5C90
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943600));
label_21763c:
    // 0x21763c: 0x240600a9  addiu       $a2, $zero, 0xA9
    ctx->pc = 0x21763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_217640:
    // 0x217640: 0xc138e72  jal         func_4E39C8
label_217644:
    if (ctx->pc == 0x217644u) {
        ctx->pc = 0x217644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217640u;
        // 0x217644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217648u;
        goto label_217648;
    }
    ctx->pc = 0x217640u;
    SET_GPR_U32(ctx, 31, 0x217648u);
    ctx->pc = 0x217644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217640u;
    // 0x217644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x217640u, 0x217648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217648u;
label_217648:
    // 0x217648: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x217648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_21764c:
    // 0x21764c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217650:
    // 0x217650: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x217650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_217654:
    // 0x217654: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x217654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_217658:
    // 0x217658: 0x60f809  jalr        $v1
label_21765c:
    if (ctx->pc == 0x21765Cu) {
        ctx->pc = 0x21765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217658u;
        // 0x21765c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217660u;
        goto label_217660;
    }
    ctx->pc = 0x217658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217660u);
        ctx->pc = 0x21765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217658u;
        // 0x21765c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217658u, 0x217660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217660u;
label_217660:
    // 0x217660: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x217660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_217664:
    // 0x217664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217668:
    // 0x217668: 0xc13abae  jal         func_4EAEB8
label_21766c:
    if (ctx->pc == 0x21766Cu) {
        ctx->pc = 0x21766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217668u;
        // 0x21766c: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217670u;
        goto label_217670;
    }
    ctx->pc = 0x217668u;
    SET_GPR_U32(ctx, 31, 0x217670u);
    ctx->pc = 0x21766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217668u;
    // 0x21766c: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAEB8u, 0x217668u, 0x217670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217670u;
label_217670:
    // 0x217670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_217674:
    // 0x217674: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_217678:
    // 0x217678: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x217678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_21767c:
    // 0x21767c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21767cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217680:
    // 0x217680: 0x240700ae  addiu       $a3, $zero, 0xAE
    ctx->pc = 0x217680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_217684:
    // 0x217684: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x217684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_217688:
    // 0x217688: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x217688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_21768c:
    // 0x21768c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_217690:
    // 0x217690: 0x60f809  jalr        $v1
label_217694:
    if (ctx->pc == 0x217694u) {
        ctx->pc = 0x217694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217690u;
        // 0x217694: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217698u;
        goto label_217698;
    }
    ctx->pc = 0x217690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217698u);
        ctx->pc = 0x217694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217690u;
        // 0x217694: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217690u, 0x217698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217698u;
label_217698:
    // 0x217698: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x217698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_21769c:
    // 0x21769c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x21769cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2176a0:
    // 0x2176a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2176a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2176a4:
    // 0x2176a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2176a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2176a8:
    // 0x2176a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2176a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2176ac:
    // 0x2176ac: 0x3e00008  jr          $ra
label_2176b0:
    if (ctx->pc == 0x2176B0u) {
        ctx->pc = 0x2176B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176ACu;
        // 0x2176b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176B4u;
        goto label_2176b4;
    }
    ctx->pc = 0x2176ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2176B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176ACu;
        // 0x2176b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2176ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2176B4u;
label_2176b4:
    // 0x2176b4: 0x0  nop
    ctx->pc = 0x2176b4u;
    // NOP
    ctx->pc = 0x2176b8u;
}
