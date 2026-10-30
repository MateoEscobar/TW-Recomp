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

// Function: sub_00354558
// Address: 0x354558 - 0x3546a0
void sub_00354558_0x354558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354558_0x354558");
#endif

    switch (ctx->pc) {
        case 0x354558u: goto label_354558;
        case 0x35455cu: goto label_35455c;
        case 0x354560u: goto label_354560;
        case 0x354564u: goto label_354564;
        case 0x354568u: goto label_354568;
        case 0x35456cu: goto label_35456c;
        case 0x354570u: goto label_354570;
        case 0x354574u: goto label_354574;
        case 0x354578u: goto label_354578;
        case 0x35457cu: goto label_35457c;
        case 0x354580u: goto label_354580;
        case 0x354584u: goto label_354584;
        case 0x354588u: goto label_354588;
        case 0x35458cu: goto label_35458c;
        case 0x354590u: goto label_354590;
        case 0x354594u: goto label_354594;
        case 0x354598u: goto label_354598;
        case 0x35459cu: goto label_35459c;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545a4u: goto label_3545a4;
        case 0x3545a8u: goto label_3545a8;
        case 0x3545acu: goto label_3545ac;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545b4u: goto label_3545b4;
        case 0x3545b8u: goto label_3545b8;
        case 0x3545bcu: goto label_3545bc;
        case 0x3545c0u: goto label_3545c0;
        case 0x3545c4u: goto label_3545c4;
        case 0x3545c8u: goto label_3545c8;
        case 0x3545ccu: goto label_3545cc;
        case 0x3545d0u: goto label_3545d0;
        case 0x3545d4u: goto label_3545d4;
        case 0x3545d8u: goto label_3545d8;
        case 0x3545dcu: goto label_3545dc;
        case 0x3545e0u: goto label_3545e0;
        case 0x3545e4u: goto label_3545e4;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545ecu: goto label_3545ec;
        case 0x3545f0u: goto label_3545f0;
        case 0x3545f4u: goto label_3545f4;
        case 0x3545f8u: goto label_3545f8;
        case 0x3545fcu: goto label_3545fc;
        case 0x354600u: goto label_354600;
        case 0x354604u: goto label_354604;
        case 0x354608u: goto label_354608;
        case 0x35460cu: goto label_35460c;
        case 0x354610u: goto label_354610;
        case 0x354614u: goto label_354614;
        case 0x354618u: goto label_354618;
        case 0x35461cu: goto label_35461c;
        case 0x354620u: goto label_354620;
        case 0x354624u: goto label_354624;
        case 0x354628u: goto label_354628;
        case 0x35462cu: goto label_35462c;
        case 0x354630u: goto label_354630;
        case 0x354634u: goto label_354634;
        case 0x354638u: goto label_354638;
        case 0x35463cu: goto label_35463c;
        case 0x354640u: goto label_354640;
        case 0x354644u: goto label_354644;
        case 0x354648u: goto label_354648;
        case 0x35464cu: goto label_35464c;
        case 0x354650u: goto label_354650;
        case 0x354654u: goto label_354654;
        case 0x354658u: goto label_354658;
        case 0x35465cu: goto label_35465c;
        case 0x354660u: goto label_354660;
        case 0x354664u: goto label_354664;
        case 0x354668u: goto label_354668;
        case 0x35466cu: goto label_35466c;
        case 0x354670u: goto label_354670;
        case 0x354674u: goto label_354674;
        case 0x354678u: goto label_354678;
        case 0x35467cu: goto label_35467c;
        case 0x354680u: goto label_354680;
        case 0x354684u: goto label_354684;
        case 0x354688u: goto label_354688;
        case 0x35468cu: goto label_35468c;
        case 0x354690u: goto label_354690;
        case 0x354694u: goto label_354694;
        case 0x354698u: goto label_354698;
        case 0x35469cu: goto label_35469c;
        default: break;
    }

    ctx->pc = 0x354558u;

label_354558:
    // 0x354558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35455c:
    // 0x35455c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x35455cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_354560:
    // 0x354560: 0x24a58b30  addiu       $a1, $a1, -0x74D0
    ctx->pc = 0x354560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937392));
label_354564:
    // 0x354564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_354568:
    // 0x354568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35456c:
    // 0x35456c: 0xc04786c  jal         func_11E1B0
label_354570:
    if (ctx->pc == 0x354570u) {
        ctx->pc = 0x354570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35456Cu;
        // 0x354570: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354574u;
        goto label_354574;
    }
    ctx->pc = 0x35456Cu;
    SET_GPR_U32(ctx, 31, 0x354574u);
    ctx->pc = 0x354570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35456Cu;
    // 0x354570: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x35456Cu, 0x354574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354574u;
label_354574:
    // 0x354574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354578:
    // 0x354578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35457c:
    // 0x35457c: 0xc0e8556  jal         func_3A1558
label_354580:
    if (ctx->pc == 0x354580u) {
        ctx->pc = 0x354580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35457Cu;
        // 0x354580: 0xac4301e0  sw          $v1, 0x1E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354584u;
        goto label_354584;
    }
    ctx->pc = 0x35457Cu;
    SET_GPR_U32(ctx, 31, 0x354584u);
    ctx->pc = 0x354580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35457Cu;
    // 0x354580: 0xac4301e0  sw          $v1, 0x1E0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1558u, 0x35457Cu, 0x354584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354584u;
label_354584:
    // 0x354584: 0xc047e72  jal         func_11F9C8
label_354588:
    if (ctx->pc == 0x354588u) {
        ctx->pc = 0x354588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354584u;
        // 0x354588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35458Cu;
        goto label_35458c;
    }
    ctx->pc = 0x354584u;
    SET_GPR_U32(ctx, 31, 0x35458Cu);
    ctx->pc = 0x354588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354584u;
    // 0x354588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x354584u, 0x35458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35458Cu;
label_35458c:
    // 0x35458c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_354590:
    // 0x354590: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x354590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_354594:
    // 0x354594: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x354594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_354598:
    // 0x354598: 0xa0f809  jalr        $a1
label_35459c:
    if (ctx->pc == 0x35459Cu) {
        ctx->pc = 0x35459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354598u;
        // 0x35459c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545A0u;
        goto label_3545a0;
    }
    ctx->pc = 0x354598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3545A0u);
        ctx->pc = 0x35459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354598u;
        // 0x35459c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354598u, 0x3545A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3545A0u;
label_3545a0:
    // 0x3545a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3545a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3545a4:
    // 0x3545a4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3545a8:
    if (ctx->pc == 0x3545A8u) {
        ctx->pc = 0x3545ACu;
        goto label_3545ac;
    }
    ctx->pc = 0x3545A4u;
    {
        const bool branch_taken_0x3545a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3545a4) {
            ctx->pc = 0x3545C4u;
            goto label_3545c4;
        }
    }
    ctx->pc = 0x3545ACu;
label_3545ac:
    // 0x3545ac: 0xc047e72  jal         func_11F9C8
label_3545b0:
    if (ctx->pc == 0x3545B0u) {
        ctx->pc = 0x3545B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545ACu;
        // 0x3545b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545B4u;
        goto label_3545b4;
    }
    ctx->pc = 0x3545ACu;
    SET_GPR_U32(ctx, 31, 0x3545B4u);
    ctx->pc = 0x3545B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545ACu;
    // 0x3545b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x3545ACu, 0x3545B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545B4u;
label_3545b4:
    // 0x3545b4: 0xc048114  jal         func_120450
label_3545b8:
    if (ctx->pc == 0x3545B8u) {
        ctx->pc = 0x3545B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545B4u;
        // 0x3545b8: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545BCu;
        goto label_3545bc;
    }
    ctx->pc = 0x3545B4u;
    SET_GPR_U32(ctx, 31, 0x3545BCu);
    ctx->pc = 0x3545B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545B4u;
    // 0x3545b8: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x3545B4u, 0x3545BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545BCu;
label_3545bc:
    // 0x3545bc: 0x10000036  b           . + 4 + (0x36 << 2)
label_3545c0:
    if (ctx->pc == 0x3545C0u) {
        ctx->pc = 0x3545C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545BCu;
        // 0x3545c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545C4u;
        goto label_3545c4;
    }
    ctx->pc = 0x3545BCu;
    {
        const bool branch_taken_0x3545bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3545C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545BCu;
        // 0x3545c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545bc) {
            ctx->pc = 0x354698u;
            goto label_354698;
        }
    }
    ctx->pc = 0x3545C4u;
label_3545c4:
    // 0x3545c4: 0xc047e72  jal         func_11F9C8
label_3545c8:
    if (ctx->pc == 0x3545C8u) {
        ctx->pc = 0x3545C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545C4u;
        // 0x3545c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545CCu;
        goto label_3545cc;
    }
    ctx->pc = 0x3545C4u;
    SET_GPR_U32(ctx, 31, 0x3545CCu);
    ctx->pc = 0x3545C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545C4u;
    // 0x3545c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x3545C4u, 0x3545CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545CCu;
label_3545cc:
    // 0x3545cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3545ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3545d0:
    // 0x3545d0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_3545d4:
    // 0x3545d4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x3545d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_3545d8:
    // 0x3545d8: 0xa0f809  jalr        $a1
label_3545dc:
    if (ctx->pc == 0x3545DCu) {
        ctx->pc = 0x3545DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545D8u;
        // 0x3545dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545E0u;
        goto label_3545e0;
    }
    ctx->pc = 0x3545D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3545E0u);
        ctx->pc = 0x3545DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545D8u;
        // 0x3545dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3545D8u, 0x3545E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3545E0u;
label_3545e0:
    // 0x3545e0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3545e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3545e4:
    // 0x3545e4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3545e8:
    if (ctx->pc == 0x3545E8u) {
        ctx->pc = 0x3545ECu;
        goto label_3545ec;
    }
    ctx->pc = 0x3545E4u;
    {
        const bool branch_taken_0x3545e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3545e4) {
            ctx->pc = 0x354604u;
            goto label_354604;
        }
    }
    ctx->pc = 0x3545ECu;
label_3545ec:
    // 0x3545ec: 0xc047e72  jal         func_11F9C8
label_3545f0:
    if (ctx->pc == 0x3545F0u) {
        ctx->pc = 0x3545F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545ECu;
        // 0x3545f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545F4u;
        goto label_3545f4;
    }
    ctx->pc = 0x3545ECu;
    SET_GPR_U32(ctx, 31, 0x3545F4u);
    ctx->pc = 0x3545F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545ECu;
    // 0x3545f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x3545ECu, 0x3545F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545F4u;
label_3545f4:
    // 0x3545f4: 0xc048114  jal         func_120450
label_3545f8:
    if (ctx->pc == 0x3545F8u) {
        ctx->pc = 0x3545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545F4u;
        // 0x3545f8: 0x8c440230  lw          $a0, 0x230($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545FCu;
        goto label_3545fc;
    }
    ctx->pc = 0x3545F4u;
    SET_GPR_U32(ctx, 31, 0x3545FCu);
    ctx->pc = 0x3545F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545F4u;
    // 0x3545f8: 0x8c440230  lw          $a0, 0x230($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x3545F4u, 0x3545FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545FCu;
label_3545fc:
    // 0x3545fc: 0x10000026  b           . + 4 + (0x26 << 2)
label_354600:
    if (ctx->pc == 0x354600u) {
        ctx->pc = 0x354600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545FCu;
        // 0x354600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354604u;
        goto label_354604;
    }
    ctx->pc = 0x3545FCu;
    {
        const bool branch_taken_0x3545fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545FCu;
        // 0x354600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545fc) {
            ctx->pc = 0x354698u;
            goto label_354698;
        }
    }
    ctx->pc = 0x354604u;
label_354604:
    // 0x354604: 0xc047e72  jal         func_11F9C8
label_354608:
    if (ctx->pc == 0x354608u) {
        ctx->pc = 0x354608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354604u;
        // 0x354608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35460Cu;
        goto label_35460c;
    }
    ctx->pc = 0x354604u;
    SET_GPR_U32(ctx, 31, 0x35460Cu);
    ctx->pc = 0x354608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354604u;
    // 0x354608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x354604u, 0x35460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35460Cu;
label_35460c:
    // 0x35460c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_354610:
    // 0x354610: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x354610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_354614:
    // 0x354614: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x354614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_354618:
    // 0x354618: 0xa0f809  jalr        $a1
label_35461c:
    if (ctx->pc == 0x35461Cu) {
        ctx->pc = 0x35461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354618u;
        // 0x35461c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354620u;
        goto label_354620;
    }
    ctx->pc = 0x354618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x354620u);
        ctx->pc = 0x35461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354618u;
        // 0x35461c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354618u, 0x354620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354620u;
label_354620:
    // 0x354620: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x354620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_354624:
    // 0x354624: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_354628:
    if (ctx->pc == 0x354628u) {
        ctx->pc = 0x35462Cu;
        goto label_35462c;
    }
    ctx->pc = 0x354624u;
    {
        const bool branch_taken_0x354624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x354624) {
            ctx->pc = 0x354644u;
            goto label_354644;
        }
    }
    ctx->pc = 0x35462Cu;
label_35462c:
    // 0x35462c: 0xc047e72  jal         func_11F9C8
label_354630:
    if (ctx->pc == 0x354630u) {
        ctx->pc = 0x354630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35462Cu;
        // 0x354630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354634u;
        goto label_354634;
    }
    ctx->pc = 0x35462Cu;
    SET_GPR_U32(ctx, 31, 0x354634u);
    ctx->pc = 0x354630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35462Cu;
    // 0x354630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x35462Cu, 0x354634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354634u;
label_354634:
    // 0x354634: 0xc048114  jal         func_120450
label_354638:
    if (ctx->pc == 0x354638u) {
        ctx->pc = 0x354638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354634u;
        // 0x354638: 0x8c440240  lw          $a0, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35463Cu;
        goto label_35463c;
    }
    ctx->pc = 0x354634u;
    SET_GPR_U32(ctx, 31, 0x35463Cu);
    ctx->pc = 0x354638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354634u;
    // 0x354638: 0x8c440240  lw          $a0, 0x240($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x354634u, 0x35463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35463Cu;
label_35463c:
    // 0x35463c: 0x10000016  b           . + 4 + (0x16 << 2)
label_354640:
    if (ctx->pc == 0x354640u) {
        ctx->pc = 0x354640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35463Cu;
        // 0x354640: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354644u;
        goto label_354644;
    }
    ctx->pc = 0x35463Cu;
    {
        const bool branch_taken_0x35463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35463Cu;
        // 0x354640: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35463c) {
            ctx->pc = 0x354698u;
            goto label_354698;
        }
    }
    ctx->pc = 0x354644u;
label_354644:
    // 0x354644: 0xc047e72  jal         func_11F9C8
label_354648:
    if (ctx->pc == 0x354648u) {
        ctx->pc = 0x354648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354644u;
        // 0x354648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35464Cu;
        goto label_35464c;
    }
    ctx->pc = 0x354644u;
    SET_GPR_U32(ctx, 31, 0x35464Cu);
    ctx->pc = 0x354648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354644u;
    // 0x354648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x354644u, 0x35464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35464Cu;
label_35464c:
    // 0x35464c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_354650:
    // 0x354650: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x354650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_354654:
    // 0x354654: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x354654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_354658:
    // 0x354658: 0xa0f809  jalr        $a1
label_35465c:
    if (ctx->pc == 0x35465Cu) {
        ctx->pc = 0x35465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354658u;
        // 0x35465c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354660u;
        goto label_354660;
    }
    ctx->pc = 0x354658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x354660u);
        ctx->pc = 0x35465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354658u;
        // 0x35465c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354658u, 0x354660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354660u;
label_354660:
    // 0x354660: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x354660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_354664:
    // 0x354664: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_354668:
    if (ctx->pc == 0x354668u) {
        ctx->pc = 0x35466Cu;
        goto label_35466c;
    }
    ctx->pc = 0x354664u;
    {
        const bool branch_taken_0x354664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x354664) {
            ctx->pc = 0x354684u;
            goto label_354684;
        }
    }
    ctx->pc = 0x35466Cu;
label_35466c:
    // 0x35466c: 0xc047e72  jal         func_11F9C8
label_354670:
    if (ctx->pc == 0x354670u) {
        ctx->pc = 0x354670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35466Cu;
        // 0x354670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354674u;
        goto label_354674;
    }
    ctx->pc = 0x35466Cu;
    SET_GPR_U32(ctx, 31, 0x354674u);
    ctx->pc = 0x354670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35466Cu;
    // 0x354670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x35466Cu, 0x354674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0xc048114  jal         func_120450
label_354678:
    if (ctx->pc == 0x354678u) {
        ctx->pc = 0x354678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354674u;
        // 0x354678: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35467Cu;
        goto label_35467c;
    }
    ctx->pc = 0x354674u;
    SET_GPR_U32(ctx, 31, 0x35467Cu);
    ctx->pc = 0x354678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354674u;
    // 0x354678: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x354674u, 0x35467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35467Cu;
label_35467c:
    // 0x35467c: 0x10000006  b           . + 4 + (0x6 << 2)
label_354680:
    if (ctx->pc == 0x354680u) {
        ctx->pc = 0x354680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35467Cu;
        // 0x354680: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354684u;
        goto label_354684;
    }
    ctx->pc = 0x35467Cu;
    {
        const bool branch_taken_0x35467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35467Cu;
        // 0x354680: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35467c) {
            ctx->pc = 0x354698u;
            goto label_354698;
        }
    }
    ctx->pc = 0x354684u;
label_354684:
    // 0x354684: 0xc047e72  jal         func_11F9C8
label_354688:
    if (ctx->pc == 0x354688u) {
        ctx->pc = 0x354688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354684u;
        // 0x354688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35468Cu;
        goto label_35468c;
    }
    ctx->pc = 0x354684u;
    SET_GPR_U32(ctx, 31, 0x35468Cu);
    ctx->pc = 0x354688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354684u;
    // 0x354688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x354684u, 0x35468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35468Cu;
label_35468c:
    // 0x35468c: 0xc048114  jal         func_120450
label_354690:
    if (ctx->pc == 0x354690u) {
        ctx->pc = 0x354690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35468Cu;
        // 0x354690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354694u;
        goto label_354694;
    }
    ctx->pc = 0x35468Cu;
    SET_GPR_U32(ctx, 31, 0x354694u);
    ctx->pc = 0x354690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35468Cu;
    // 0x354690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x35468Cu, 0x354694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354694u;
label_354694:
    // 0x354694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_354698:
    // 0x354698: 0x3e00008  jr          $ra
label_35469c:
    if (ctx->pc == 0x35469Cu) {
        ctx->pc = 0x35469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354698u;
        // 0x35469c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3546A0u;
        goto label_fallthrough_0x354698;
    }
    ctx->pc = 0x354698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354698u;
        // 0x35469c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354698:
    ctx->pc = 0x3546A0u;
}
