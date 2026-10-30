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

// Function: sub_0028C4F8
// Address: 0x28c4f8 - 0x28c5d8
void sub_0028C4F8_0x28c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C4F8_0x28c4f8");
#endif

    switch (ctx->pc) {
        case 0x28c4f8u: goto label_28c4f8;
        case 0x28c4fcu: goto label_28c4fc;
        case 0x28c500u: goto label_28c500;
        case 0x28c504u: goto label_28c504;
        case 0x28c508u: goto label_28c508;
        case 0x28c50cu: goto label_28c50c;
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        default: break;
    }

    ctx->pc = 0x28c4f8u;

label_28c4f8:
    // 0x28c4f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28c4fc:
    // 0x28c4fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x28c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_28c500:
    // 0x28c500: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28c504:
    // 0x28c504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c508:
    // 0x28c508: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x28c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_28c50c:
    // 0x28c50c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x28c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_28c510:
    // 0x28c510: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28c514:
    // 0x28c514: 0xc0a3c90  jal         func_28F240
label_28c518:
    if (ctx->pc == 0x28C518u) {
        ctx->pc = 0x28C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C514u;
        // 0x28c518: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C51Cu;
        goto label_28c51c;
    }
    ctx->pc = 0x28C514u;
    SET_GPR_U32(ctx, 31, 0x28C51Cu);
    ctx->pc = 0x28C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C514u;
    // 0x28c518: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F240u, 0x28C514u, 0x28C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C51Cu;
label_28c51c:
    // 0x28c51c: 0xc0a3644  jal         func_28D910
label_28c520:
    if (ctx->pc == 0x28C520u) {
        ctx->pc = 0x28C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C51Cu;
        // 0x28c520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C524u;
        goto label_28c524;
    }
    ctx->pc = 0x28C51Cu;
    SET_GPR_U32(ctx, 31, 0x28C524u);
    ctx->pc = 0x28C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C51Cu;
    // 0x28c520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x28C51Cu, 0x28C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C524u;
label_28c524:
    // 0x28c524: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x28c524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_28c528:
    // 0x28c528: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_28c52c:
    if (ctx->pc == 0x28C52Cu) {
        ctx->pc = 0x28C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C528u;
        // 0x28c52c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C530u;
        goto label_28c530;
    }
    ctx->pc = 0x28C528u;
    {
        const bool branch_taken_0x28c528 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C528u;
        // 0x28c52c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c528) {
            ctx->pc = 0x28C550u;
            goto label_28c550;
        }
    }
    ctx->pc = 0x28C530u;
label_28c530:
    // 0x28c530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c534:
    // 0x28c534: 0x0  nop
    ctx->pc = 0x28c534u;
    // NOP
label_28c538:
    // 0x28c538: 0xc0a3698  jal         func_28DA60
label_28c53c:
    if (ctx->pc == 0x28C53Cu) {
        ctx->pc = 0x28C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C538u;
        // 0x28c53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C540u;
        goto label_28c540;
    }
    ctx->pc = 0x28C538u;
    SET_GPR_U32(ctx, 31, 0x28C540u);
    ctx->pc = 0x28C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C538u;
    // 0x28c53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x28C538u, 0x28C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C540u;
label_28c540:
    // 0x28c540: 0x8203002e  lb          $v1, 0x2E($s0)
    ctx->pc = 0x28c540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_28c544:
    // 0x28c544: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x28c544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28c548:
    // 0x28c548: 0x5071fffb  beql        $v1, $s1, . + 4 + (-0x5 << 2)
label_28c54c:
    if (ctx->pc == 0x28C54Cu) {
        ctx->pc = 0x28C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C548u;
        // 0x28c54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C550u;
        goto label_28c550;
    }
    ctx->pc = 0x28C548u;
    {
        const bool branch_taken_0x28c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x28c548) {
            ctx->pc = 0x28C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C548u;
            // 0x28c54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c538;
        }
    }
    ctx->pc = 0x28C550u;
label_28c550:
    // 0x28c550: 0xc0a3e7a  jal         func_28F9E8
label_28c554:
    if (ctx->pc == 0x28C554u) {
        ctx->pc = 0x28C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C550u;
        // 0x28c554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C558u;
        goto label_28c558;
    }
    ctx->pc = 0x28C550u;
    SET_GPR_U32(ctx, 31, 0x28C558u);
    ctx->pc = 0x28C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C550u;
    // 0x28c554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x28C550u, 0x28C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C558u;
label_28c558:
    // 0x28c558: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x28c558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c55c:
    // 0x28c55c: 0xc089bdc  jal         func_226F70
label_28c560:
    if (ctx->pc == 0x28C560u) {
        ctx->pc = 0x28C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C55Cu;
        // 0x28c560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C564u;
        goto label_28c564;
    }
    ctx->pc = 0x28C55Cu;
    SET_GPR_U32(ctx, 31, 0x28C564u);
    ctx->pc = 0x28C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C55Cu;
    // 0x28c560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x28C55Cu, 0x28C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x8e12020c  lw          $s2, 0x20C($s0)
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_28c568:
    // 0x28c568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c56c:
    // 0x28c56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c570:
    // 0x28c570: 0xc059936  jal         func_1664D8
label_28c574:
    if (ctx->pc == 0x28C574u) {
        ctx->pc = 0x28C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C570u;
        // 0x28c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C578u;
        goto label_28c578;
    }
    ctx->pc = 0x28C570u;
    SET_GPR_U32(ctx, 31, 0x28C578u);
    ctx->pc = 0x28C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C570u;
    // 0x28c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664D8u, 0x28C570u, 0x28C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C578u;
label_28c578:
    // 0x28c578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c57c:
    // 0x28c57c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x28c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_28c580:
    // 0x28c580: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28c580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28c584:
    // 0x28c584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28c584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c588:
    // 0x28c588: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x28c588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_28c58c:
    // 0x28c58c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c590:
    // 0x28c590: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28c590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28c594:
    // 0x28c594: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28c598:
    // 0x28c598: 0x40f809  jalr        $v0
label_28c59c:
    if (ctx->pc == 0x28C59Cu) {
        ctx->pc = 0x28C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C598u;
        // 0x28c59c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5A0u;
        goto label_28c5a0;
    }
    ctx->pc = 0x28C598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C5A0u);
        ctx->pc = 0x28C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C598u;
        // 0x28c59c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C598u, 0x28C5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C5A0u;
label_28c5a0:
    // 0x28c5a0: 0x86050210  lh          $a1, 0x210($s0)
    ctx->pc = 0x28c5a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 528)));
label_28c5a4:
    // 0x28c5a4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_28c5a8:
    if (ctx->pc == 0x28C5A8u) {
        ctx->pc = 0x28C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A4u;
        // 0x28c5a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5ACu;
        goto label_28c5ac;
    }
    ctx->pc = 0x28C5A4u;
    {
        const bool branch_taken_0x28c5a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x28C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5A4u;
        // 0x28c5a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5a4) {
            ctx->pc = 0x28C5BCu;
            goto label_28c5bc;
        }
    }
    ctx->pc = 0x28C5ACu;
label_28c5ac:
    // 0x28c5ac: 0xc059caa  jal         func_1672A8
label_28c5b0:
    if (ctx->pc == 0x28C5B0u) {
        ctx->pc = 0x28C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5ACu;
        // 0x28c5b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5B4u;
        goto label_28c5b4;
    }
    ctx->pc = 0x28C5ACu;
    SET_GPR_U32(ctx, 31, 0x28C5B4u);
    ctx->pc = 0x28C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5ACu;
    // 0x28c5b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672A8u, 0x28C5ACu, 0x28C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5B4u;
label_28c5b4:
    // 0x28c5b4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_28c5b8:
    // 0x28c5b8: 0xa6020210  sh          $v0, 0x210($s0)
    ctx->pc = 0x28c5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 528), (uint16_t)GPR_U32(ctx, 2));
label_28c5bc:
    // 0x28c5bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28c5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c5c0:
    // 0x28c5c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x28c5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c5c4:
    // 0x28c5c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x28c5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c5c8:
    // 0x28c5c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28c5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c5cc:
    // 0x28c5cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28c5d0:
    // 0x28c5d0: 0x3e00008  jr          $ra
label_28c5d4:
    if (ctx->pc == 0x28C5D4u) {
        ctx->pc = 0x28C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5D0u;
        // 0x28c5d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5D8u;
        goto label_fallthrough_0x28c5d0;
    }
    ctx->pc = 0x28C5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5D0u;
        // 0x28c5d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c5d0:
    ctx->pc = 0x28C5D8u;
}
