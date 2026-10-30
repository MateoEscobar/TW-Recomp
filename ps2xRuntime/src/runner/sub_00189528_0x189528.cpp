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

// Function: sub_00189528
// Address: 0x189528 - 0x189628
void sub_00189528_0x189528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189528_0x189528");
#endif

    switch (ctx->pc) {
        case 0x189528u: goto label_189528;
        case 0x18952cu: goto label_18952c;
        case 0x189530u: goto label_189530;
        case 0x189534u: goto label_189534;
        case 0x189538u: goto label_189538;
        case 0x18953cu: goto label_18953c;
        case 0x189540u: goto label_189540;
        case 0x189544u: goto label_189544;
        case 0x189548u: goto label_189548;
        case 0x18954cu: goto label_18954c;
        case 0x189550u: goto label_189550;
        case 0x189554u: goto label_189554;
        case 0x189558u: goto label_189558;
        case 0x18955cu: goto label_18955c;
        case 0x189560u: goto label_189560;
        case 0x189564u: goto label_189564;
        case 0x189568u: goto label_189568;
        case 0x18956cu: goto label_18956c;
        case 0x189570u: goto label_189570;
        case 0x189574u: goto label_189574;
        case 0x189578u: goto label_189578;
        case 0x18957cu: goto label_18957c;
        case 0x189580u: goto label_189580;
        case 0x189584u: goto label_189584;
        case 0x189588u: goto label_189588;
        case 0x18958cu: goto label_18958c;
        case 0x189590u: goto label_189590;
        case 0x189594u: goto label_189594;
        case 0x189598u: goto label_189598;
        case 0x18959cu: goto label_18959c;
        case 0x1895a0u: goto label_1895a0;
        case 0x1895a4u: goto label_1895a4;
        case 0x1895a8u: goto label_1895a8;
        case 0x1895acu: goto label_1895ac;
        case 0x1895b0u: goto label_1895b0;
        case 0x1895b4u: goto label_1895b4;
        case 0x1895b8u: goto label_1895b8;
        case 0x1895bcu: goto label_1895bc;
        case 0x1895c0u: goto label_1895c0;
        case 0x1895c4u: goto label_1895c4;
        case 0x1895c8u: goto label_1895c8;
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d0u: goto label_1895d0;
        case 0x1895d4u: goto label_1895d4;
        case 0x1895d8u: goto label_1895d8;
        case 0x1895dcu: goto label_1895dc;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        default: break;
    }

    ctx->pc = 0x189528u;

label_189528:
    // 0x189528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18952c:
    // 0x18952c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_189530:
    // 0x189530: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_189534:
    // 0x189534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_189538:
    // 0x189538: 0x8e0447c4  lw          $a0, 0x47C4($s0)
    ctx->pc = 0x189538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
label_18953c:
    // 0x18953c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_189540:
    // 0x189540: 0xc103a34  jal         func_40E8D0
label_189544:
    if (ctx->pc == 0x189544u) {
        ctx->pc = 0x189548u;
        goto label_189548;
    }
    ctx->pc = 0x189540u;
    SET_GPR_U32(ctx, 31, 0x189548u);
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x189540u, 0x189548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189548u;
label_189548:
    // 0x189548: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x189548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
label_18954c:
    // 0x18954c: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x18954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
label_189550:
    // 0x189550: 0x247194f8  addiu       $s1, $v1, -0x6B08
    ctx->pc = 0x189550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939896));
label_189554:
    // 0x189554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189558:
    // 0x189558: 0xc11c72c  jal         func_471CB0
label_18955c:
    if (ctx->pc == 0x18955Cu) {
        ctx->pc = 0x18955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189558u;
        // 0x18955c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189560u;
        goto label_189560;
    }
    ctx->pc = 0x189558u;
    SET_GPR_U32(ctx, 31, 0x189560u);
    ctx->pc = 0x18955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189558u;
    // 0x18955c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x189558u, 0x189560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189560u;
label_189560:
    // 0x189560: 0x8e0347c4  lw          $v1, 0x47C4($s0)
    ctx->pc = 0x189560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18372)));
label_189564:
    // 0x189564: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x189564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_189568:
    // 0x189568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18956c:
    if (ctx->pc == 0x18956Cu) {
        ctx->pc = 0x18956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189568u;
        // 0x18956c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189570u;
        goto label_189570;
    }
    ctx->pc = 0x189568u;
    {
        const bool branch_taken_0x189568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189568u;
        // 0x18956c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189568) {
            ctx->pc = 0x18957Cu;
            goto label_18957c;
        }
    }
    ctx->pc = 0x189570u;
label_189570:
    // 0x189570: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x189570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
label_189574:
    // 0x189574: 0xc11c72c  jal         func_471CB0
label_189578:
    if (ctx->pc == 0x189578u) {
        ctx->pc = 0x189578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189574u;
        // 0x189578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18957Cu;
        goto label_18957c;
    }
    ctx->pc = 0x189574u;
    SET_GPR_U32(ctx, 31, 0x18957Cu);
    ctx->pc = 0x189578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189574u;
    // 0x189578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x189574u, 0x18957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18957Cu;
label_18957c:
    // 0x18957c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_189580:
    // 0x189580: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x189580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189584:
    // 0x189584: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_189588:
    // 0x189588: 0x1000000a  b           . + 4 + (0xA << 2)
label_18958c:
    if (ctx->pc == 0x18958Cu) {
        ctx->pc = 0x18958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189588u;
        // 0x18958c: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189590u;
        goto label_189590;
    }
    ctx->pc = 0x189588u;
    {
        const bool branch_taken_0x189588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189588u;
        // 0x18958c: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189588) {
            ctx->pc = 0x1895B4u;
            goto label_1895b4;
        }
    }
    ctx->pc = 0x189590u;
label_189590:
    // 0x189590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x189590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_189594:
    // 0x189594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_189598:
    // 0x189598: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18959c:
    // 0x18959c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1895a0:
    if (ctx->pc == 0x1895A0u) {
        ctx->pc = 0x1895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18959Cu;
        // 0x1895a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895A4u;
        goto label_1895a4;
    }
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18959c) {
            ctx->pc = 0x1895A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18959Cu;
            // 0x1895a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895B4u;
            goto label_1895b4;
        }
    }
    ctx->pc = 0x1895A4u;
label_1895a4:
    // 0x1895a4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1895a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1895a8:
    // 0x1895a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1895ac:
    if (ctx->pc == 0x1895ACu) {
        ctx->pc = 0x1895ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895A8u;
        // 0x1895ac: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895B0u;
        goto label_1895b0;
    }
    ctx->pc = 0x1895A8u;
    {
        const bool branch_taken_0x1895a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1895a8) {
            ctx->pc = 0x1895ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895A8u;
            // 0x1895ac: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x1895B0u;
label_1895b0:
    // 0x1895b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1895b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1895b4:
    // 0x1895b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1895b8:
    // 0x1895b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1895b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1895bc:
    // 0x1895bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1895c0:
    // 0x1895c0: 0x40f809  jalr        $v0
label_1895c4:
    if (ctx->pc == 0x1895C4u) {
        ctx->pc = 0x1895C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895C0u;
        // 0x1895c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895C8u;
        goto label_1895c8;
    }
    ctx->pc = 0x1895C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1895C8u);
        ctx->pc = 0x1895C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895C0u;
        // 0x1895c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1895C0u, 0x1895C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1895C8u;
label_1895c8:
    // 0x1895c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1895c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1895cc:
    // 0x1895cc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_1895d0:
    if (ctx->pc == 0x1895D0u) {
        ctx->pc = 0x1895D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895CCu;
        // 0x1895d0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895D4u;
        goto label_1895d4;
    }
    ctx->pc = 0x1895CCu;
    {
        const bool branch_taken_0x1895cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1895cc) {
            ctx->pc = 0x1895D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895CCu;
            // 0x1895d0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189590;
        }
    }
    ctx->pc = 0x1895D4u;
label_1895d4:
    // 0x1895d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1895d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1895d8:
    // 0x1895d8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_1895dc:
    // 0x1895dc: 0x0  nop
    ctx->pc = 0x1895dcu;
    // NOP
label_1895e0:
    // 0x1895e0: 0xc0e402c  jal         func_3900B0
label_1895e4:
    if (ctx->pc == 0x1895E4u) {
        ctx->pc = 0x1895E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895E0u;
        // 0x1895e4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895E8u;
        goto label_1895e8;
    }
    ctx->pc = 0x1895E0u;
    SET_GPR_U32(ctx, 31, 0x1895E8u);
    ctx->pc = 0x1895E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E0u;
    // 0x1895e4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x1895E0u, 0x1895E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895E8u;
label_1895e8:
    // 0x1895e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1895ec:
    if (ctx->pc == 0x1895ECu) {
        ctx->pc = 0x1895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895E8u;
        // 0x1895ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895F0u;
        goto label_1895f0;
    }
    ctx->pc = 0x1895E8u;
    {
        const bool branch_taken_0x1895e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895e8) {
            ctx->pc = 0x1895ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895E8u;
            // 0x1895ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189600u;
            goto label_189600;
        }
    }
    ctx->pc = 0x1895F0u;
label_1895f0:
    // 0x1895f0: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x1895f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_1895f4:
    // 0x1895f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1895f8:
    if (ctx->pc == 0x1895F8u) {
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895FCu;
        goto label_1895fc;
    }
    ctx->pc = 0x1895F4u;
    {
        const bool branch_taken_0x1895f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1895f4) {
            ctx->pc = 0x1895F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895F4u;
            // 0x1895f8: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895FCu;
            goto label_1895fc;
        }
    }
    ctx->pc = 0x1895FCu;
label_1895fc:
    // 0x1895fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_189600:
    // 0x189600: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x189600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_189604:
    // 0x189604: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_189608:
    if (ctx->pc == 0x189608u) {
        ctx->pc = 0x189608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189604u;
        // 0x189608: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18960Cu;
        goto label_18960c;
    }
    ctx->pc = 0x189604u;
    {
        const bool branch_taken_0x189604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189604) {
            ctx->pc = 0x189608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189604u;
            // 0x189608: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1895e0;
        }
    }
    ctx->pc = 0x18960Cu;
label_18960c:
    // 0x18960c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189610:
    // 0x189610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189614:
    // 0x189614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189618:
    // 0x189618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18961c:
    // 0x18961c: 0x3e00008  jr          $ra
label_189620:
    if (ctx->pc == 0x189620u) {
        ctx->pc = 0x189620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18961Cu;
        // 0x189620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189624u;
        goto label_189624;
    }
    ctx->pc = 0x18961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18961Cu;
        // 0x189620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18961Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189624u;
label_189624:
    // 0x189624: 0x0  nop
    ctx->pc = 0x189624u;
    // NOP
    ctx->pc = 0x189628u;
}
