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

// Function: sub_0020C510
// Address: 0x20c510 - 0x20c588
void sub_0020C510_0x20c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C510_0x20c510");
#endif

    switch (ctx->pc) {
        case 0x20c510u: goto label_20c510;
        case 0x20c514u: goto label_20c514;
        case 0x20c518u: goto label_20c518;
        case 0x20c51cu: goto label_20c51c;
        case 0x20c520u: goto label_20c520;
        case 0x20c524u: goto label_20c524;
        case 0x20c528u: goto label_20c528;
        case 0x20c52cu: goto label_20c52c;
        case 0x20c530u: goto label_20c530;
        case 0x20c534u: goto label_20c534;
        case 0x20c538u: goto label_20c538;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c540u: goto label_20c540;
        case 0x20c544u: goto label_20c544;
        case 0x20c548u: goto label_20c548;
        case 0x20c54cu: goto label_20c54c;
        case 0x20c550u: goto label_20c550;
        case 0x20c554u: goto label_20c554;
        case 0x20c558u: goto label_20c558;
        case 0x20c55cu: goto label_20c55c;
        case 0x20c560u: goto label_20c560;
        case 0x20c564u: goto label_20c564;
        case 0x20c568u: goto label_20c568;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c570u: goto label_20c570;
        case 0x20c574u: goto label_20c574;
        case 0x20c578u: goto label_20c578;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c580u: goto label_20c580;
        case 0x20c584u: goto label_20c584;
        default: break;
    }

    ctx->pc = 0x20c510u;

label_20c510:
    // 0x20c510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20c514:
    // 0x20c514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20c518:
    // 0x20c518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20c51c:
    // 0x20c51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c520:
    // 0x20c520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c524:
    // 0x20c524: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20c528:
    // 0x20c528: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20c52c:
    if (ctx->pc == 0x20C52Cu) {
        ctx->pc = 0x20C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C528u;
        // 0x20c52c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C530u;
        goto label_20c530;
    }
    ctx->pc = 0x20C528u;
    {
        const bool branch_taken_0x20c528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C528u;
        // 0x20c52c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c528) {
            ctx->pc = 0x20C56Cu;
            goto label_20c56c;
        }
    }
    ctx->pc = 0x20C530u;
label_20c530:
    // 0x20c530: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20c530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20c534:
    // 0x20c534: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c538:
    // 0x20c538: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20c538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20c53c:
    // 0x20c53c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20c540:
    // 0x20c540: 0x40f809  jalr        $v0
label_20c544:
    if (ctx->pc == 0x20C544u) {
        ctx->pc = 0x20C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C540u;
        // 0x20c544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C548u;
        goto label_20c548;
    }
    ctx->pc = 0x20C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C548u);
        ctx->pc = 0x20C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C540u;
        // 0x20c544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C540u, 0x20C548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C548u;
label_20c548:
    // 0x20c548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20c54c:
    if (ctx->pc == 0x20C54Cu) {
        ctx->pc = 0x20C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C548u;
        // 0x20c54c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C550u;
        goto label_20c550;
    }
    ctx->pc = 0x20C548u;
    {
        const bool branch_taken_0x20c548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C548u;
        // 0x20c54c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c548) {
            ctx->pc = 0x20C570u;
            goto label_20c570;
        }
    }
    ctx->pc = 0x20C550u;
label_20c550:
    // 0x20c550: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20c550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20c554:
    // 0x20c554: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c558:
    // 0x20c558: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20c55c:
    // 0x20c55c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20c560:
    // 0x20c560: 0x40f809  jalr        $v0
label_20c564:
    if (ctx->pc == 0x20C564u) {
        ctx->pc = 0x20C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C560u;
        // 0x20c564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C568u;
        goto label_20c568;
    }
    ctx->pc = 0x20C560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C568u);
        ctx->pc = 0x20C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C560u;
        // 0x20c564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C560u, 0x20C568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C568u;
label_20c568:
    // 0x20c568: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20c568u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20c56c:
    // 0x20c56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20c56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c570:
    // 0x20c570: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c574:
    // 0x20c574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c578:
    // 0x20c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c57c:
    // 0x20c57c: 0x3e00008  jr          $ra
label_20c580:
    if (ctx->pc == 0x20C580u) {
        ctx->pc = 0x20C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C57Cu;
        // 0x20c580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C584u;
        goto label_20c584;
    }
    ctx->pc = 0x20C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C57Cu;
        // 0x20c580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C584u;
label_20c584:
    // 0x20c584: 0x0  nop
    ctx->pc = 0x20c584u;
    // NOP
    ctx->pc = 0x20c588u;
}
