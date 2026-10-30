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

// Function: sub_00392520
// Address: 0x392520 - 0x3925b0
void sub_00392520_0x392520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392520_0x392520");
#endif

    switch (ctx->pc) {
        case 0x392520u: goto label_392520;
        case 0x392524u: goto label_392524;
        case 0x392528u: goto label_392528;
        case 0x39252cu: goto label_39252c;
        case 0x392530u: goto label_392530;
        case 0x392534u: goto label_392534;
        case 0x392538u: goto label_392538;
        case 0x39253cu: goto label_39253c;
        case 0x392540u: goto label_392540;
        case 0x392544u: goto label_392544;
        case 0x392548u: goto label_392548;
        case 0x39254cu: goto label_39254c;
        case 0x392550u: goto label_392550;
        case 0x392554u: goto label_392554;
        case 0x392558u: goto label_392558;
        case 0x39255cu: goto label_39255c;
        case 0x392560u: goto label_392560;
        case 0x392564u: goto label_392564;
        case 0x392568u: goto label_392568;
        case 0x39256cu: goto label_39256c;
        case 0x392570u: goto label_392570;
        case 0x392574u: goto label_392574;
        case 0x392578u: goto label_392578;
        case 0x39257cu: goto label_39257c;
        case 0x392580u: goto label_392580;
        case 0x392584u: goto label_392584;
        case 0x392588u: goto label_392588;
        case 0x39258cu: goto label_39258c;
        case 0x392590u: goto label_392590;
        case 0x392594u: goto label_392594;
        case 0x392598u: goto label_392598;
        case 0x39259cu: goto label_39259c;
        case 0x3925a0u: goto label_3925a0;
        case 0x3925a4u: goto label_3925a4;
        case 0x3925a8u: goto label_3925a8;
        case 0x3925acu: goto label_3925ac;
        default: break;
    }

    ctx->pc = 0x392520u;

label_392520:
    // 0x392520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x392520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_392524:
    // 0x392524: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x392524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_392528:
    // 0x392528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x392528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39252c:
    // 0x39252c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_392530:
    // 0x392530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x392530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392534:
    // 0x392534: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x392534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_392538:
    // 0x392538: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x392538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39253c:
    // 0x39253c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_392540:
    // 0x392540: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x392540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_392544:
    // 0x392544: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x392544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392548:
    // 0x392548: 0x8cb00840  lw          $s0, 0x840($a1)
    ctx->pc = 0x392548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_39254c:
    // 0x39254c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39254cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_392550:
    // 0x392550: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x392550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_392554:
    // 0x392554: 0x40f809  jalr        $v0
label_392558:
    if (ctx->pc == 0x392558u) {
        ctx->pc = 0x392558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392554u;
        // 0x392558: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39255Cu;
        goto label_39255c;
    }
    ctx->pc = 0x392554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39255Cu);
        ctx->pc = 0x392558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392554u;
        // 0x392558: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392554u, 0x39255Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39255Cu;
label_39255c:
    // 0x39255c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392560:
    // 0x392560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392564:
    // 0x392564: 0xc0e60a8  jal         func_3982A0
label_392568:
    if (ctx->pc == 0x392568u) {
        ctx->pc = 0x392568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392564u;
        // 0x392568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39256Cu;
        goto label_39256c;
    }
    ctx->pc = 0x392564u;
    SET_GPR_U32(ctx, 31, 0x39256Cu);
    ctx->pc = 0x392568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392564u;
    // 0x392568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3982A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3982A0u, 0x392564u, 0x39256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39256Cu;
label_39256c:
    // 0x39256c: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x39256cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_392570:
    // 0x392570: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
label_392574:
    if (ctx->pc == 0x392574u) {
        ctx->pc = 0x392574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392570u;
        // 0x392574: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392578u;
        goto label_392578;
    }
    ctx->pc = 0x392570u;
    {
        const bool branch_taken_0x392570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x392570) {
            ctx->pc = 0x392574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392570u;
            // 0x392574: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392580u;
            goto label_392580;
        }
    }
    ctx->pc = 0x392578u;
label_392578:
    // 0x392578: 0x10000006  b           . + 4 + (0x6 << 2)
label_39257c:
    if (ctx->pc == 0x39257Cu) {
        ctx->pc = 0x39257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392578u;
        // 0x39257c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392580u;
        goto label_392580;
    }
    ctx->pc = 0x392578u;
    {
        const bool branch_taken_0x392578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392578u;
        // 0x39257c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392578) {
            ctx->pc = 0x392594u;
            goto label_392594;
        }
    }
    ctx->pc = 0x392580u;
label_392580:
    // 0x392580: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392584:
    // 0x392584: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x392584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_392588:
    // 0x392588: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x392588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_39258c:
    // 0x39258c: 0x40f809  jalr        $v0
label_392590:
    if (ctx->pc == 0x392590u) {
        ctx->pc = 0x392590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39258Cu;
        // 0x392590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392594u;
        goto label_392594;
    }
    ctx->pc = 0x39258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392594u);
        ctx->pc = 0x392590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39258Cu;
        // 0x392590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39258Cu, 0x392594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392594u;
label_392594:
    // 0x392594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x392594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_392598:
    // 0x392598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x392598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39259c:
    // 0x39259c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39259cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3925a0:
    // 0x3925a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3925a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3925a4:
    // 0x3925a4: 0x3e00008  jr          $ra
label_3925a8:
    if (ctx->pc == 0x3925A8u) {
        ctx->pc = 0x3925A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925A4u;
        // 0x3925a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925ACu;
        goto label_3925ac;
    }
    ctx->pc = 0x3925A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3925A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925A4u;
        // 0x3925a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3925A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3925ACu;
label_3925ac:
    // 0x3925ac: 0x0  nop
    ctx->pc = 0x3925acu;
    // NOP
    ctx->pc = 0x3925b0u;
}
