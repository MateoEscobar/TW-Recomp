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

// Function: sub_003BF548
// Address: 0x3bf548 - 0x3bf698
void sub_003BF548_0x3bf548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF548_0x3bf548");
#endif

    switch (ctx->pc) {
        case 0x3bf548u: goto label_3bf548;
        case 0x3bf54cu: goto label_3bf54c;
        case 0x3bf550u: goto label_3bf550;
        case 0x3bf554u: goto label_3bf554;
        case 0x3bf558u: goto label_3bf558;
        case 0x3bf55cu: goto label_3bf55c;
        case 0x3bf560u: goto label_3bf560;
        case 0x3bf564u: goto label_3bf564;
        case 0x3bf568u: goto label_3bf568;
        case 0x3bf56cu: goto label_3bf56c;
        case 0x3bf570u: goto label_3bf570;
        case 0x3bf574u: goto label_3bf574;
        case 0x3bf578u: goto label_3bf578;
        case 0x3bf57cu: goto label_3bf57c;
        case 0x3bf580u: goto label_3bf580;
        case 0x3bf584u: goto label_3bf584;
        case 0x3bf588u: goto label_3bf588;
        case 0x3bf58cu: goto label_3bf58c;
        case 0x3bf590u: goto label_3bf590;
        case 0x3bf594u: goto label_3bf594;
        case 0x3bf598u: goto label_3bf598;
        case 0x3bf59cu: goto label_3bf59c;
        case 0x3bf5a0u: goto label_3bf5a0;
        case 0x3bf5a4u: goto label_3bf5a4;
        case 0x3bf5a8u: goto label_3bf5a8;
        case 0x3bf5acu: goto label_3bf5ac;
        case 0x3bf5b0u: goto label_3bf5b0;
        case 0x3bf5b4u: goto label_3bf5b4;
        case 0x3bf5b8u: goto label_3bf5b8;
        case 0x3bf5bcu: goto label_3bf5bc;
        case 0x3bf5c0u: goto label_3bf5c0;
        case 0x3bf5c4u: goto label_3bf5c4;
        case 0x3bf5c8u: goto label_3bf5c8;
        case 0x3bf5ccu: goto label_3bf5cc;
        case 0x3bf5d0u: goto label_3bf5d0;
        case 0x3bf5d4u: goto label_3bf5d4;
        case 0x3bf5d8u: goto label_3bf5d8;
        case 0x3bf5dcu: goto label_3bf5dc;
        case 0x3bf5e0u: goto label_3bf5e0;
        case 0x3bf5e4u: goto label_3bf5e4;
        case 0x3bf5e8u: goto label_3bf5e8;
        case 0x3bf5ecu: goto label_3bf5ec;
        case 0x3bf5f0u: goto label_3bf5f0;
        case 0x3bf5f4u: goto label_3bf5f4;
        case 0x3bf5f8u: goto label_3bf5f8;
        case 0x3bf5fcu: goto label_3bf5fc;
        case 0x3bf600u: goto label_3bf600;
        case 0x3bf604u: goto label_3bf604;
        case 0x3bf608u: goto label_3bf608;
        case 0x3bf60cu: goto label_3bf60c;
        case 0x3bf610u: goto label_3bf610;
        case 0x3bf614u: goto label_3bf614;
        case 0x3bf618u: goto label_3bf618;
        case 0x3bf61cu: goto label_3bf61c;
        case 0x3bf620u: goto label_3bf620;
        case 0x3bf624u: goto label_3bf624;
        case 0x3bf628u: goto label_3bf628;
        case 0x3bf62cu: goto label_3bf62c;
        case 0x3bf630u: goto label_3bf630;
        case 0x3bf634u: goto label_3bf634;
        case 0x3bf638u: goto label_3bf638;
        case 0x3bf63cu: goto label_3bf63c;
        case 0x3bf640u: goto label_3bf640;
        case 0x3bf644u: goto label_3bf644;
        case 0x3bf648u: goto label_3bf648;
        case 0x3bf64cu: goto label_3bf64c;
        case 0x3bf650u: goto label_3bf650;
        case 0x3bf654u: goto label_3bf654;
        case 0x3bf658u: goto label_3bf658;
        case 0x3bf65cu: goto label_3bf65c;
        case 0x3bf660u: goto label_3bf660;
        case 0x3bf664u: goto label_3bf664;
        case 0x3bf668u: goto label_3bf668;
        case 0x3bf66cu: goto label_3bf66c;
        case 0x3bf670u: goto label_3bf670;
        case 0x3bf674u: goto label_3bf674;
        case 0x3bf678u: goto label_3bf678;
        case 0x3bf67cu: goto label_3bf67c;
        case 0x3bf680u: goto label_3bf680;
        case 0x3bf684u: goto label_3bf684;
        case 0x3bf688u: goto label_3bf688;
        case 0x3bf68cu: goto label_3bf68c;
        case 0x3bf690u: goto label_3bf690;
        case 0x3bf694u: goto label_3bf694;
        default: break;
    }

    ctx->pc = 0x3bf548u;

label_3bf548:
    // 0x3bf548: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x3bf548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_3bf54c:
    // 0x3bf54c: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x3bf54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
label_3bf550:
    // 0x3bf550: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x3bf550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
label_3bf554:
    // 0x3bf554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf558:
    // 0x3bf558: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x3bf558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
label_3bf55c:
    // 0x3bf55c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3bf55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3bf560:
    // 0x3bf560: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bf560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bf564:
    // 0x3bf564: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bf564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bf568:
    // 0x3bf568: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bf56c:
    // 0x3bf56c: 0x40f809  jalr        $v0
label_3bf570:
    if (ctx->pc == 0x3BF570u) {
        ctx->pc = 0x3BF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF56Cu;
        // 0x3bf570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF574u;
        goto label_3bf574;
    }
    ctx->pc = 0x3BF56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF574u);
        ctx->pc = 0x3BF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF56Cu;
        // 0x3bf570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF56Cu, 0x3BF574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF574u;
label_3bf574:
    // 0x3bf574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bf574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf578:
    // 0x3bf578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bf578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf57c:
    // 0x3bf57c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bf580:
    // 0x3bf580: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3bf584:
    if (ctx->pc == 0x3BF584u) {
        ctx->pc = 0x3BF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF580u;
        // 0x3bf584: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF588u;
        goto label_3bf588;
    }
    ctx->pc = 0x3BF580u;
    {
        const bool branch_taken_0x3bf580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf580) {
            ctx->pc = 0x3BF584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF580u;
            // 0x3bf584: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF590u;
            goto label_3bf590;
        }
    }
    ctx->pc = 0x3BF588u;
label_3bf588:
    // 0x3bf588: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3bf58c:
    if (ctx->pc == 0x3BF58Cu) {
        ctx->pc = 0x3BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF588u;
        // 0x3bf58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF590u;
        goto label_3bf590;
    }
    ctx->pc = 0x3BF588u;
    {
        const bool branch_taken_0x3bf588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF588u;
        // 0x3bf58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf588) {
            ctx->pc = 0x3BF680u;
            goto label_3bf680;
        }
    }
    ctx->pc = 0x3BF590u;
label_3bf590:
    // 0x3bf590: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3bf590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3bf594:
    // 0x3bf594: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3bf594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3bf598:
    // 0x3bf598: 0x40f809  jalr        $v0
label_3bf59c:
    if (ctx->pc == 0x3BF59Cu) {
        ctx->pc = 0x3BF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF598u;
        // 0x3bf59c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5A0u;
        goto label_3bf5a0;
    }
    ctx->pc = 0x3BF598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF5A0u);
        ctx->pc = 0x3BF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF598u;
        // 0x3bf59c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF598u, 0x3BF5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF5A0u;
label_3bf5a0:
    // 0x3bf5a0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3bf5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3bf5a4:
    // 0x3bf5a4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3bf5a8:
    if (ctx->pc == 0x3BF5A8u) {
        ctx->pc = 0x3BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5A4u;
        // 0x3bf5a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5ACu;
        goto label_3bf5ac;
    }
    ctx->pc = 0x3BF5A4u;
    {
        const bool branch_taken_0x3bf5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5A4u;
        // 0x3bf5a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf5a4) {
            ctx->pc = 0x3BF670u;
            goto label_3bf670;
        }
    }
    ctx->pc = 0x3BF5ACu;
label_3bf5ac:
    // 0x3bf5ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3bf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3bf5b0:
    // 0x3bf5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bf5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3bf5b4:
    // 0x3bf5b4: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_3bf5b8:
    if (ctx->pc == 0x3BF5B8u) {
        ctx->pc = 0x3BF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5B4u;
        // 0x3bf5b8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5BCu;
        goto label_3bf5bc;
    }
    ctx->pc = 0x3BF5B4u;
    {
        const bool branch_taken_0x3bf5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5B4u;
        // 0x3bf5b8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf5b4) {
            ctx->pc = 0x3BF670u;
            goto label_3bf670;
        }
    }
    ctx->pc = 0x3BF5BCu;
label_3bf5bc:
    // 0x3bf5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf5c0:
    // 0x3bf5c0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3bf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3bf5c4:
    // 0x3bf5c4: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3bf5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3bf5c8:
    // 0x3bf5c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3bf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bf5cc:
    // 0x3bf5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bf5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3bf5d0:
    // 0x3bf5d0: 0x0  nop
    ctx->pc = 0x3bf5d0u;
    // NOP
label_3bf5d4:
    // 0x3bf5d4: 0x0  nop
    ctx->pc = 0x3bf5d4u;
    // NOP
label_3bf5d8:
    // 0x3bf5d8: 0x0  nop
    ctx->pc = 0x3bf5d8u;
    // NOP
label_3bf5dc:
    // 0x3bf5dc: 0x0  nop
    ctx->pc = 0x3bf5dcu;
    // NOP
label_3bf5e0:
    // 0x3bf5e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3bf5e4:
    if (ctx->pc == 0x3BF5E4u) {
        ctx->pc = 0x3BF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5E0u;
        // 0x3bf5e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5E8u;
        goto label_3bf5e8;
    }
    ctx->pc = 0x3BF5E0u;
    {
        const bool branch_taken_0x3bf5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5E0u;
        // 0x3bf5e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf5e0) {
            ctx->pc = 0x3BF5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf5d0;
        }
    }
    ctx->pc = 0x3BF5E8u;
label_3bf5e8:
    // 0x3bf5e8: 0xc138ddc  jal         func_4E3770
label_3bf5ec:
    if (ctx->pc == 0x3BF5ECu) {
        ctx->pc = 0x3BF5F0u;
        goto label_3bf5f0;
    }
    ctx->pc = 0x3BF5E8u;
    SET_GPR_U32(ctx, 31, 0x3BF5F0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3BF5E8u, 0x3BF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF5F0u;
label_3bf5f0:
    // 0x3bf5f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf5f4:
    // 0x3bf5f4: 0xc0ea176  jal         func_3A85D8
label_3bf5f8:
    if (ctx->pc == 0x3BF5F8u) {
        ctx->pc = 0x3BF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5F4u;
        // 0x3bf5f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5FCu;
        goto label_3bf5fc;
    }
    ctx->pc = 0x3BF5F4u;
    SET_GPR_U32(ctx, 31, 0x3BF5FCu);
    ctx->pc = 0x3BF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF5F4u;
    // 0x3bf5f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3BF5F4u, 0x3BF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF5FCu;
label_3bf5fc:
    // 0x3bf5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf600:
    // 0x3bf600: 0xc0ea176  jal         func_3A85D8
label_3bf604:
    if (ctx->pc == 0x3BF604u) {
        ctx->pc = 0x3BF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF600u;
        // 0x3bf604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF608u;
        goto label_3bf608;
    }
    ctx->pc = 0x3BF600u;
    SET_GPR_U32(ctx, 31, 0x3BF608u);
    ctx->pc = 0x3BF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF600u;
    // 0x3bf604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3BF600u, 0x3BF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF608u;
label_3bf608:
    // 0x3bf608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf60c:
    // 0x3bf60c: 0xc0ea16a  jal         func_3A85A8
label_3bf610:
    if (ctx->pc == 0x3BF610u) {
        ctx->pc = 0x3BF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF60Cu;
        // 0x3bf610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF614u;
        goto label_3bf614;
    }
    ctx->pc = 0x3BF60Cu;
    SET_GPR_U32(ctx, 31, 0x3BF614u);
    ctx->pc = 0x3BF610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF60Cu;
    // 0x3bf610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3BF60Cu, 0x3BF614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF614u;
label_3bf614:
    // 0x3bf614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf618:
    // 0x3bf618: 0xc0ea16a  jal         func_3A85A8
label_3bf61c:
    if (ctx->pc == 0x3BF61Cu) {
        ctx->pc = 0x3BF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF618u;
        // 0x3bf61c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF620u;
        goto label_3bf620;
    }
    ctx->pc = 0x3BF618u;
    SET_GPR_U32(ctx, 31, 0x3BF620u);
    ctx->pc = 0x3BF61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF618u;
    // 0x3bf61c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3BF618u, 0x3BF620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF620u;
label_3bf620:
    // 0x3bf620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf624:
    // 0x3bf624: 0xc0e90ca  jal         func_3A4328
label_3bf628:
    if (ctx->pc == 0x3BF628u) {
        ctx->pc = 0x3BF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF624u;
        // 0x3bf628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF62Cu;
        goto label_3bf62c;
    }
    ctx->pc = 0x3BF624u;
    SET_GPR_U32(ctx, 31, 0x3BF62Cu);
    ctx->pc = 0x3BF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF624u;
    // 0x3bf628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3BF624u, 0x3BF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF62Cu;
label_3bf62c:
    // 0x3bf62c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf630:
    // 0x3bf630: 0xc0ea158  jal         func_3A8560
label_3bf634:
    if (ctx->pc == 0x3BF634u) {
        ctx->pc = 0x3BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF630u;
        // 0x3bf634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF638u;
        goto label_3bf638;
    }
    ctx->pc = 0x3BF630u;
    SET_GPR_U32(ctx, 31, 0x3BF638u);
    ctx->pc = 0x3BF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF630u;
    // 0x3bf634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3BF630u, 0x3BF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF638u;
label_3bf638:
    // 0x3bf638: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3bf638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3bf63c:
    // 0x3bf63c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bf63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf640:
    // 0x3bf640: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3bf640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3bf644:
    // 0x3bf644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf648:
    // 0x3bf648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bf648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3bf64c:
    // 0x3bf64c: 0xc0ea158  jal         func_3A8560
label_3bf650:
    if (ctx->pc == 0x3BF650u) {
        ctx->pc = 0x3BF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF64Cu;
        // 0x3bf650: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF654u;
        goto label_3bf654;
    }
    ctx->pc = 0x3BF64Cu;
    SET_GPR_U32(ctx, 31, 0x3BF654u);
    ctx->pc = 0x3BF650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF64Cu;
    // 0x3bf650: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3BF64Cu, 0x3BF654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF654u;
label_3bf654:
    // 0x3bf654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bf658:
    // 0x3bf658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bf658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf65c:
    // 0x3bf65c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3bf65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf660:
    // 0x3bf660: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3bf660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3bf664:
    // 0x3bf664: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3bf664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3bf668:
    // 0x3bf668: 0x40f809  jalr        $v0
label_3bf66c:
    if (ctx->pc == 0x3BF66Cu) {
        ctx->pc = 0x3BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF668u;
        // 0x3bf66c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF670u;
        goto label_3bf670;
    }
    ctx->pc = 0x3BF668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF670u);
        ctx->pc = 0x3BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF668u;
        // 0x3bf66c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF668u, 0x3BF670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF670u;
label_3bf670:
    // 0x3bf670: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3bf670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3bf674:
    // 0x3bf674: 0xc0e858c  jal         func_3A1630
label_3bf678:
    if (ctx->pc == 0x3BF678u) {
        ctx->pc = 0x3BF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF674u;
        // 0x3bf678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF67Cu;
        goto label_3bf67c;
    }
    ctx->pc = 0x3BF674u;
    SET_GPR_U32(ctx, 31, 0x3BF67Cu);
    ctx->pc = 0x3BF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF674u;
    // 0x3bf678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3BF674u, 0x3BF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF67Cu;
label_3bf67c:
    // 0x3bf67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bf67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf680:
    // 0x3bf680: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x3bf680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3bf684:
    // 0x3bf684: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x3bf684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3bf688:
    // 0x3bf688: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x3bf688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3bf68c:
    // 0x3bf68c: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3bf68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3bf690:
    // 0x3bf690: 0x3e00008  jr          $ra
label_3bf694:
    if (ctx->pc == 0x3BF694u) {
        ctx->pc = 0x3BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF690u;
        // 0x3bf694: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF698u;
        goto label_fallthrough_0x3bf690;
    }
    ctx->pc = 0x3BF690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF690u;
        // 0x3bf694: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bf690:
    ctx->pc = 0x3BF698u;
}
