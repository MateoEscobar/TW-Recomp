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

// Function: sub_0047E4E8
// Address: 0x47e4e8 - 0x47e610
void sub_0047E4E8_0x47e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E4E8_0x47e4e8");
#endif

    switch (ctx->pc) {
        case 0x47e4e8u: goto label_47e4e8;
        case 0x47e4ecu: goto label_47e4ec;
        case 0x47e4f0u: goto label_47e4f0;
        case 0x47e4f4u: goto label_47e4f4;
        case 0x47e4f8u: goto label_47e4f8;
        case 0x47e4fcu: goto label_47e4fc;
        case 0x47e500u: goto label_47e500;
        case 0x47e504u: goto label_47e504;
        case 0x47e508u: goto label_47e508;
        case 0x47e50cu: goto label_47e50c;
        case 0x47e510u: goto label_47e510;
        case 0x47e514u: goto label_47e514;
        case 0x47e518u: goto label_47e518;
        case 0x47e51cu: goto label_47e51c;
        case 0x47e520u: goto label_47e520;
        case 0x47e524u: goto label_47e524;
        case 0x47e528u: goto label_47e528;
        case 0x47e52cu: goto label_47e52c;
        case 0x47e530u: goto label_47e530;
        case 0x47e534u: goto label_47e534;
        case 0x47e538u: goto label_47e538;
        case 0x47e53cu: goto label_47e53c;
        case 0x47e540u: goto label_47e540;
        case 0x47e544u: goto label_47e544;
        case 0x47e548u: goto label_47e548;
        case 0x47e54cu: goto label_47e54c;
        case 0x47e550u: goto label_47e550;
        case 0x47e554u: goto label_47e554;
        case 0x47e558u: goto label_47e558;
        case 0x47e55cu: goto label_47e55c;
        case 0x47e560u: goto label_47e560;
        case 0x47e564u: goto label_47e564;
        case 0x47e568u: goto label_47e568;
        case 0x47e56cu: goto label_47e56c;
        case 0x47e570u: goto label_47e570;
        case 0x47e574u: goto label_47e574;
        case 0x47e578u: goto label_47e578;
        case 0x47e57cu: goto label_47e57c;
        case 0x47e580u: goto label_47e580;
        case 0x47e584u: goto label_47e584;
        case 0x47e588u: goto label_47e588;
        case 0x47e58cu: goto label_47e58c;
        case 0x47e590u: goto label_47e590;
        case 0x47e594u: goto label_47e594;
        case 0x47e598u: goto label_47e598;
        case 0x47e59cu: goto label_47e59c;
        case 0x47e5a0u: goto label_47e5a0;
        case 0x47e5a4u: goto label_47e5a4;
        case 0x47e5a8u: goto label_47e5a8;
        case 0x47e5acu: goto label_47e5ac;
        case 0x47e5b0u: goto label_47e5b0;
        case 0x47e5b4u: goto label_47e5b4;
        case 0x47e5b8u: goto label_47e5b8;
        case 0x47e5bcu: goto label_47e5bc;
        case 0x47e5c0u: goto label_47e5c0;
        case 0x47e5c4u: goto label_47e5c4;
        case 0x47e5c8u: goto label_47e5c8;
        case 0x47e5ccu: goto label_47e5cc;
        case 0x47e5d0u: goto label_47e5d0;
        case 0x47e5d4u: goto label_47e5d4;
        case 0x47e5d8u: goto label_47e5d8;
        case 0x47e5dcu: goto label_47e5dc;
        case 0x47e5e0u: goto label_47e5e0;
        case 0x47e5e4u: goto label_47e5e4;
        case 0x47e5e8u: goto label_47e5e8;
        case 0x47e5ecu: goto label_47e5ec;
        case 0x47e5f0u: goto label_47e5f0;
        case 0x47e5f4u: goto label_47e5f4;
        case 0x47e5f8u: goto label_47e5f8;
        case 0x47e5fcu: goto label_47e5fc;
        case 0x47e600u: goto label_47e600;
        case 0x47e604u: goto label_47e604;
        case 0x47e608u: goto label_47e608;
        case 0x47e60cu: goto label_47e60c;
        default: break;
    }

    ctx->pc = 0x47e4e8u;

label_47e4e8:
    // 0x47e4e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47e4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47e4ec:
    // 0x47e4ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47e4f0:
    // 0x47e4f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_47e4f4:
    // 0x47e4f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47e4f8:
    // 0x47e4f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_47e4fc:
    // 0x47e4fc: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x47e4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47e500:
    // 0x47e500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47e504:
    // 0x47e504: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47e504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e508:
    // 0x47e508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47e50c:
    // 0x47e50c: 0xb28021  addu        $s0, $a1, $s2
    ctx->pc = 0x47e50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_47e510:
    // 0x47e510: 0x8e510128  lw          $s1, 0x128($s2)
    ctx->pc = 0x47e510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_47e514:
    // 0x47e514: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_47e518:
    if (ctx->pc == 0x47E518u) {
        ctx->pc = 0x47E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E514u;
        // 0x47e518: 0xaf858938  sw          $a1, -0x76C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E51Cu;
        goto label_47e51c;
    }
    ctx->pc = 0x47E514u;
    {
        const bool branch_taken_0x47e514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E514u;
        // 0x47e518: 0xaf858938  sw          $a1, -0x76C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e514) {
            ctx->pc = 0x47E59Cu;
            goto label_47e59c;
        }
    }
    ctx->pc = 0x47E51Cu;
label_47e51c:
    // 0x47e51c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x47e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_47e520:
    // 0x47e520: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x47e520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_47e524:
    // 0x47e524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47e528:
    // 0x47e528: 0x40f809  jalr        $v0
label_47e52c:
    if (ctx->pc == 0x47E52Cu) {
        ctx->pc = 0x47E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E528u;
        // 0x47e52c: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E530u;
        goto label_47e530;
    }
    ctx->pc = 0x47E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E530u);
        ctx->pc = 0x47E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E528u;
        // 0x47e52c: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E528u, 0x47E530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E530u;
label_47e530:
    // 0x47e530: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_47e534:
    if (ctx->pc == 0x47E534u) {
        ctx->pc = 0x47E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E530u;
        // 0x47e534: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E538u;
        goto label_47e538;
    }
    ctx->pc = 0x47E530u;
    {
        const bool branch_taken_0x47e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E530u;
        // 0x47e534: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e530) {
            ctx->pc = 0x47E550u;
            goto label_47e550;
        }
    }
    ctx->pc = 0x47E538u;
label_47e538:
    // 0x47e538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e53c:
    // 0x47e53c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47e540:
    // 0x47e540: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47e540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47e544:
    // 0x47e544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47e544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47e548:
    // 0x47e548: 0x1000000d  b           . + 4 + (0xD << 2)
label_47e54c:
    if (ctx->pc == 0x47E54Cu) {
        ctx->pc = 0x47E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E548u;
        // 0x47e54c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E550u;
        goto label_47e550;
    }
    ctx->pc = 0x47E548u;
    {
        const bool branch_taken_0x47e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E548u;
        // 0x47e54c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e548) {
            ctx->pc = 0x47E580u;
            goto label_47e580;
        }
    }
    ctx->pc = 0x47E550u;
label_47e550:
    // 0x47e550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e554:
    // 0x47e554: 0xc1201a2  jal         func_480688
label_47e558:
    if (ctx->pc == 0x47E558u) {
        ctx->pc = 0x47E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E554u;
        // 0x47e558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E55Cu;
        goto label_47e55c;
    }
    ctx->pc = 0x47E554u;
    SET_GPR_U32(ctx, 31, 0x47E55Cu);
    ctx->pc = 0x47E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E554u;
    // 0x47e558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480688u, 0x47E554u, 0x47E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E55Cu;
label_47e55c:
    // 0x47e55c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_47e560:
    if (ctx->pc == 0x47E560u) {
        ctx->pc = 0x47E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E55Cu;
        // 0x47e560: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E564u;
        goto label_47e564;
    }
    ctx->pc = 0x47E55Cu;
    {
        const bool branch_taken_0x47e55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E55Cu;
        // 0x47e560: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e55c) {
            ctx->pc = 0x47E5A4u;
            goto label_47e5a4;
        }
    }
    ctx->pc = 0x47E564u;
label_47e564:
    // 0x47e564: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x47e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_47e568:
    // 0x47e568: 0x40f809  jalr        $v0
label_47e56c:
    if (ctx->pc == 0x47E56Cu) {
        ctx->pc = 0x47E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E568u;
        // 0x47e56c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E570u;
        goto label_47e570;
    }
    ctx->pc = 0x47E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E570u);
        ctx->pc = 0x47E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E568u;
        // 0x47e56c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E568u, 0x47E570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E570u;
label_47e570:
    // 0x47e570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47e570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e574:
    // 0x47e574: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x47e574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_47e578:
    // 0x47e578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47e578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e57c:
    // 0x47e57c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x47e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_47e580:
    // 0x47e580: 0xc11eff2  jal         func_47BFC8
label_47e584:
    if (ctx->pc == 0x47E584u) {
        ctx->pc = 0x47E588u;
        goto label_47e588;
    }
    ctx->pc = 0x47E580u;
    SET_GPR_U32(ctx, 31, 0x47E588u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47E580u, 0x47E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E588u;
label_47e588:
    // 0x47e588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47e58c:
    // 0x47e58c: 0xc11f024  jal         func_47C090
label_47e590:
    if (ctx->pc == 0x47E590u) {
        ctx->pc = 0x47E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E58Cu;
        // 0x47e590: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E594u;
        goto label_47e594;
    }
    ctx->pc = 0x47E58Cu;
    SET_GPR_U32(ctx, 31, 0x47E594u);
    ctx->pc = 0x47E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E58Cu;
    // 0x47e590: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47E58Cu, 0x47E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E594u;
label_47e594:
    // 0x47e594: 0x1000000e  b           . + 4 + (0xE << 2)
label_47e598:
    if (ctx->pc == 0x47E598u) {
        ctx->pc = 0x47E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E594u;
        // 0x47e598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E59Cu;
        goto label_47e59c;
    }
    ctx->pc = 0x47E594u;
    {
        const bool branch_taken_0x47e594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E594u;
        // 0x47e598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e594) {
            ctx->pc = 0x47E5D0u;
            goto label_47e5d0;
        }
    }
    ctx->pc = 0x47E59Cu;
label_47e59c:
    // 0x47e59c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_47e5a0:
    // 0x47e5a0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x47e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47e5a4:
    // 0x47e5a4: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x47e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_47e5a8:
    // 0x47e5a8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x47e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_47e5ac:
    // 0x47e5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e5b0:
    // 0x47e5b0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x47e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_47e5b4:
    // 0x47e5b4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x47e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_47e5b8:
    // 0x47e5b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x47e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_47e5bc:
    // 0x47e5bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x47e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_47e5c0:
    // 0x47e5c0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x47e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_47e5c4:
    // 0x47e5c4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x47e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_47e5c8:
    // 0x47e5c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x47e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_47e5cc:
    // 0x47e5cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x47e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_47e5d0:
    // 0x47e5d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_47e5d4:
    if (ctx->pc == 0x47E5D4u) {
        ctx->pc = 0x47E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E5D0u;
        // 0x47e5d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E5D8u;
        goto label_47e5d8;
    }
    ctx->pc = 0x47E5D0u;
    {
        const bool branch_taken_0x47e5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E5D0u;
        // 0x47e5d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e5d0) {
            ctx->pc = 0x47E5ECu;
            goto label_47e5ec;
        }
    }
    ctx->pc = 0x47E5D8u;
label_47e5d8:
    // 0x47e5d8: 0x8f83893c  lw          $v1, -0x76C4($gp)
    ctx->pc = 0x47e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_47e5dc:
    // 0x47e5dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x47e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_47e5e0:
    // 0x47e5e0: 0xaf83893c  sw          $v1, -0x76C4($gp)
    ctx->pc = 0x47e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 3));
label_47e5e4:
    // 0x47e5e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_47e5e8:
    if (ctx->pc == 0x47E5E8u) {
        ctx->pc = 0x47E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E5E4u;
        // 0x47e5e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E5ECu;
        goto label_47e5ec;
    }
    ctx->pc = 0x47E5E4u;
    {
        const bool branch_taken_0x47e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E5E4u;
        // 0x47e5e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e5e4) {
            ctx->pc = 0x47E5F4u;
            goto label_47e5f4;
        }
    }
    ctx->pc = 0x47E5ECu;
label_47e5ec:
    // 0x47e5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47e5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e5f0:
    // 0x47e5f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47e5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47e5f4:
    // 0x47e5f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47e5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47e5f8:
    // 0x47e5f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47e5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e5fc:
    // 0x47e5fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47e5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e600:
    // 0x47e600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47e600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47e604:
    // 0x47e604: 0x3e00008  jr          $ra
label_47e608:
    if (ctx->pc == 0x47E608u) {
        ctx->pc = 0x47E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E604u;
        // 0x47e608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E60Cu;
        goto label_47e60c;
    }
    ctx->pc = 0x47E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E604u;
        // 0x47e608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E60Cu;
label_47e60c:
    // 0x47e60c: 0x0  nop
    ctx->pc = 0x47e60cu;
    // NOP
    ctx->pc = 0x47e610u;
}
