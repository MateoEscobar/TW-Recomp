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

// Function: sub_001DF4E0
// Address: 0x1df4e0 - 0x1df5e8
void sub_001DF4E0_0x1df4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF4E0_0x1df4e0");
#endif

    switch (ctx->pc) {
        case 0x1df4e0u: goto label_1df4e0;
        case 0x1df4e4u: goto label_1df4e4;
        case 0x1df4e8u: goto label_1df4e8;
        case 0x1df4ecu: goto label_1df4ec;
        case 0x1df4f0u: goto label_1df4f0;
        case 0x1df4f4u: goto label_1df4f4;
        case 0x1df4f8u: goto label_1df4f8;
        case 0x1df4fcu: goto label_1df4fc;
        case 0x1df500u: goto label_1df500;
        case 0x1df504u: goto label_1df504;
        case 0x1df508u: goto label_1df508;
        case 0x1df50cu: goto label_1df50c;
        case 0x1df510u: goto label_1df510;
        case 0x1df514u: goto label_1df514;
        case 0x1df518u: goto label_1df518;
        case 0x1df51cu: goto label_1df51c;
        case 0x1df520u: goto label_1df520;
        case 0x1df524u: goto label_1df524;
        case 0x1df528u: goto label_1df528;
        case 0x1df52cu: goto label_1df52c;
        case 0x1df530u: goto label_1df530;
        case 0x1df534u: goto label_1df534;
        case 0x1df538u: goto label_1df538;
        case 0x1df53cu: goto label_1df53c;
        case 0x1df540u: goto label_1df540;
        case 0x1df544u: goto label_1df544;
        case 0x1df548u: goto label_1df548;
        case 0x1df54cu: goto label_1df54c;
        case 0x1df550u: goto label_1df550;
        case 0x1df554u: goto label_1df554;
        case 0x1df558u: goto label_1df558;
        case 0x1df55cu: goto label_1df55c;
        case 0x1df560u: goto label_1df560;
        case 0x1df564u: goto label_1df564;
        case 0x1df568u: goto label_1df568;
        case 0x1df56cu: goto label_1df56c;
        case 0x1df570u: goto label_1df570;
        case 0x1df574u: goto label_1df574;
        case 0x1df578u: goto label_1df578;
        case 0x1df57cu: goto label_1df57c;
        case 0x1df580u: goto label_1df580;
        case 0x1df584u: goto label_1df584;
        case 0x1df588u: goto label_1df588;
        case 0x1df58cu: goto label_1df58c;
        case 0x1df590u: goto label_1df590;
        case 0x1df594u: goto label_1df594;
        case 0x1df598u: goto label_1df598;
        case 0x1df59cu: goto label_1df59c;
        case 0x1df5a0u: goto label_1df5a0;
        case 0x1df5a4u: goto label_1df5a4;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5b0u: goto label_1df5b0;
        case 0x1df5b4u: goto label_1df5b4;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df5bcu: goto label_1df5bc;
        case 0x1df5c0u: goto label_1df5c0;
        case 0x1df5c4u: goto label_1df5c4;
        case 0x1df5c8u: goto label_1df5c8;
        case 0x1df5ccu: goto label_1df5cc;
        case 0x1df5d0u: goto label_1df5d0;
        case 0x1df5d4u: goto label_1df5d4;
        case 0x1df5d8u: goto label_1df5d8;
        case 0x1df5dcu: goto label_1df5dc;
        case 0x1df5e0u: goto label_1df5e0;
        case 0x1df5e4u: goto label_1df5e4;
        default: break;
    }

    ctx->pc = 0x1df4e0u;

label_1df4e0:
    // 0x1df4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1df4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1df4e4:
    // 0x1df4e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1df4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1df4e8:
    // 0x1df4e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1df4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1df4ec:
    // 0x1df4ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1df4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1df4f0:
    // 0x1df4f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1df4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df4f4:
    // 0x1df4f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1df4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1df4f8:
    // 0x1df4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1df4fc:
    // 0x1df4fc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1df4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1df500:
    // 0x1df500: 0x8e500790  lw          $s0, 0x790($s2)
    ctx->pc = 0x1df500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1936)));
label_1df504:
    // 0x1df504: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1df504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1df508:
    // 0x1df508: 0x26102710  addiu       $s0, $s0, 0x2710
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10000));
label_1df50c:
    // 0x1df50c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1df50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1df510:
    // 0x1df510: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1df510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1df514:
    // 0x1df514: 0x40f809  jalr        $v0
label_1df518:
    if (ctx->pc == 0x1DF518u) {
        ctx->pc = 0x1DF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF514u;
        // 0x1df518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF51Cu;
        goto label_1df51c;
    }
    ctx->pc = 0x1DF514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF51Cu);
        ctx->pc = 0x1DF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF514u;
        // 0x1df518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF514u, 0x1DF51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF51Cu;
label_1df51c:
    // 0x1df51c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1df51cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df520:
    // 0x1df520: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_1df524:
    if (ctx->pc == 0x1DF524u) {
        ctx->pc = 0x1DF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF520u;
        // 0x1df524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF528u;
        goto label_1df528;
    }
    ctx->pc = 0x1DF520u;
    {
        const bool branch_taken_0x1df520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF520u;
        // 0x1df524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df520) {
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF528u;
label_1df528:
    // 0x1df528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1df528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df52c:
    // 0x1df52c: 0x26502af0  addiu       $s0, $s2, 0x2AF0
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
label_1df530:
    // 0x1df530: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df534:
    // 0x1df534: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1df538:
    // 0x1df538: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1df538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1df53c:
    // 0x1df53c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1df53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1df540:
    // 0x1df540: 0x40f809  jalr        $v0
label_1df544:
    if (ctx->pc == 0x1DF544u) {
        ctx->pc = 0x1DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF540u;
        // 0x1df544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF548u;
        goto label_1df548;
    }
    ctx->pc = 0x1DF540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF548u);
        ctx->pc = 0x1DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF540u;
        // 0x1df544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF540u, 0x1DF548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF548u;
label_1df548:
    // 0x1df548: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1df54c:
    if (ctx->pc == 0x1DF54Cu) {
        ctx->pc = 0x1DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF548u;
        // 0x1df54c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF550u;
        goto label_1df550;
    }
    ctx->pc = 0x1DF548u;
    {
        const bool branch_taken_0x1df548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF548u;
        // 0x1df54c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df548) {
            ctx->pc = 0x1DF578u;
            goto label_1df578;
        }
    }
    ctx->pc = 0x1DF550u;
label_1df550:
    // 0x1df550: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1df550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1df554:
    // 0x1df554: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1df558:
    if (ctx->pc == 0x1DF558u) {
        ctx->pc = 0x1DF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF554u;
        // 0x1df558: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF55Cu;
        goto label_1df55c;
    }
    ctx->pc = 0x1DF554u;
    {
        const bool branch_taken_0x1df554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF554u;
        // 0x1df558: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df554) {
            ctx->pc = 0x1DF530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df530;
        }
    }
    ctx->pc = 0x1DF55Cu;
label_1df55c:
    // 0x1df55c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1df55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1df560:
    // 0x1df560: 0x8e453b54  lw          $a1, 0x3B54($s2)
    ctx->pc = 0x1df560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15188)));
label_1df564:
    // 0x1df564: 0xc0616ac  jal         func_185AB0
label_1df568:
    if (ctx->pc == 0x1DF568u) {
        ctx->pc = 0x1DF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF564u;
        // 0x1df568: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF56Cu;
        goto label_1df56c;
    }
    ctx->pc = 0x1DF564u;
    SET_GPR_U32(ctx, 31, 0x1DF56Cu);
    ctx->pc = 0x1DF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF564u;
    // 0x1df568: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1DF564u, 0x1DF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF56Cu;
label_1df56c:
    // 0x1df56c: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x1df56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_1df570:
    // 0x1df570: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1df574:
    if (ctx->pc == 0x1DF574u) {
        ctx->pc = 0x1DF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF570u;
        // 0x1df574: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF578u;
        goto label_1df578;
    }
    ctx->pc = 0x1DF570u;
    {
        const bool branch_taken_0x1df570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF570u;
        // 0x1df574: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df570) {
            ctx->pc = 0x1DF580u;
            goto label_1df580;
        }
    }
    ctx->pc = 0x1DF578u;
label_1df578:
    // 0x1df578: 0x10000015  b           . + 4 + (0x15 << 2)
label_1df57c:
    if (ctx->pc == 0x1DF57Cu) {
        ctx->pc = 0x1DF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF578u;
        // 0x1df57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF580u;
        goto label_1df580;
    }
    ctx->pc = 0x1DF578u;
    {
        const bool branch_taken_0x1df578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF578u;
        // 0x1df57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df578) {
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF580u;
label_1df580:
    // 0x1df580: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1df584:
    // 0x1df584: 0xc0e409a  jal         func_390268
label_1df588:
    if (ctx->pc == 0x1DF588u) {
        ctx->pc = 0x1DF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF584u;
        // 0x1df588: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF58Cu;
        goto label_1df58c;
    }
    ctx->pc = 0x1DF584u;
    SET_GPR_U32(ctx, 31, 0x1DF58Cu);
    ctx->pc = 0x1DF588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF584u;
    // 0x1df588: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1DF584u, 0x1DF58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF58Cu;
label_1df58c:
    // 0x1df58c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1df590:
    if (ctx->pc == 0x1DF590u) {
        ctx->pc = 0x1DF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF58Cu;
        // 0x1df590: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF594u;
        goto label_1df594;
    }
    ctx->pc = 0x1DF58Cu;
    {
        const bool branch_taken_0x1df58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF58Cu;
        // 0x1df590: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df58c) {
            ctx->pc = 0x1DF5CCu;
            goto label_1df5cc;
        }
    }
    ctx->pc = 0x1DF594u;
label_1df594:
    // 0x1df594: 0xdc4200e0  ld          $v0, 0xE0($v0)
    ctx->pc = 0x1df594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 224)));
label_1df598:
    // 0x1df598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1df598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1df59c:
    // 0x1df59c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df5a0:
    // 0x1df5a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1df5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1df5a4:
    // 0x1df5a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1df5a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1df5a8:
    // 0x1df5a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1df5ac:
    if (ctx->pc == 0x1DF5ACu) {
        ctx->pc = 0x1DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5A8u;
        // 0x1df5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5B0u;
        goto label_1df5b0;
    }
    ctx->pc = 0x1DF5A8u;
    {
        const bool branch_taken_0x1df5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df5a8) {
            ctx->pc = 0x1DF5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF5A8u;
            // 0x1df5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF5B0u;
label_1df5b0:
    // 0x1df5b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1df5b4:
    // 0x1df5b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1df5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1df5b8:
    // 0x1df5b8: 0x8c46deb8  lw          $a2, -0x2148($v0)
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_1df5bc:
    // 0x1df5bc: 0x8ca4d260  lw          $a0, -0x2DA0($a1)
    ctx->pc = 0x1df5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955616)));
label_1df5c0:
    // 0x1df5c0: 0x8cc301bc  lw          $v1, 0x1BC($a2)
    ctx->pc = 0x1df5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 444)));
label_1df5c4:
    // 0x1df5c4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_1df5c8:
    if (ctx->pc == 0x1DF5C8u) {
        ctx->pc = 0x1DF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5C4u;
        // 0x1df5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5CCu;
        goto label_1df5cc;
    }
    ctx->pc = 0x1DF5C4u;
    {
        const bool branch_taken_0x1df5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5C4u;
        // 0x1df5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5c4) {
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF5CCu;
label_1df5cc:
    // 0x1df5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df5d0:
    // 0x1df5d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1df5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1df5d4:
    // 0x1df5d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1df5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1df5d8:
    // 0x1df5d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1df5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df5dc:
    // 0x1df5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df5e0:
    // 0x1df5e0: 0x3e00008  jr          $ra
label_1df5e4:
    if (ctx->pc == 0x1DF5E4u) {
        ctx->pc = 0x1DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5E0u;
        // 0x1df5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5E8u;
        goto label_fallthrough_0x1df5e0;
    }
    ctx->pc = 0x1DF5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5E0u;
        // 0x1df5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df5e0:
    ctx->pc = 0x1DF5E8u;
}
