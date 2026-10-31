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

// Function: sub_0030C510
// Address: 0x30c510 - 0x30c5e0
void sub_0030C510_0x30c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C510_0x30c510");
#endif

    switch (ctx->pc) {
        case 0x30c510u: goto label_30c510;
        case 0x30c514u: goto label_30c514;
        case 0x30c518u: goto label_30c518;
        case 0x30c51cu: goto label_30c51c;
        case 0x30c520u: goto label_30c520;
        case 0x30c524u: goto label_30c524;
        case 0x30c528u: goto label_30c528;
        case 0x30c52cu: goto label_30c52c;
        case 0x30c530u: goto label_30c530;
        case 0x30c534u: goto label_30c534;
        case 0x30c538u: goto label_30c538;
        case 0x30c53cu: goto label_30c53c;
        case 0x30c540u: goto label_30c540;
        case 0x30c544u: goto label_30c544;
        case 0x30c548u: goto label_30c548;
        case 0x30c54cu: goto label_30c54c;
        case 0x30c550u: goto label_30c550;
        case 0x30c554u: goto label_30c554;
        case 0x30c558u: goto label_30c558;
        case 0x30c55cu: goto label_30c55c;
        case 0x30c560u: goto label_30c560;
        case 0x30c564u: goto label_30c564;
        case 0x30c568u: goto label_30c568;
        case 0x30c56cu: goto label_30c56c;
        case 0x30c570u: goto label_30c570;
        case 0x30c574u: goto label_30c574;
        case 0x30c578u: goto label_30c578;
        case 0x30c57cu: goto label_30c57c;
        case 0x30c580u: goto label_30c580;
        case 0x30c584u: goto label_30c584;
        case 0x30c588u: goto label_30c588;
        case 0x30c58cu: goto label_30c58c;
        case 0x30c590u: goto label_30c590;
        case 0x30c594u: goto label_30c594;
        case 0x30c598u: goto label_30c598;
        case 0x30c59cu: goto label_30c59c;
        case 0x30c5a0u: goto label_30c5a0;
        case 0x30c5a4u: goto label_30c5a4;
        case 0x30c5a8u: goto label_30c5a8;
        case 0x30c5acu: goto label_30c5ac;
        case 0x30c5b0u: goto label_30c5b0;
        case 0x30c5b4u: goto label_30c5b4;
        case 0x30c5b8u: goto label_30c5b8;
        case 0x30c5bcu: goto label_30c5bc;
        case 0x30c5c0u: goto label_30c5c0;
        case 0x30c5c4u: goto label_30c5c4;
        case 0x30c5c8u: goto label_30c5c8;
        case 0x30c5ccu: goto label_30c5cc;
        case 0x30c5d0u: goto label_30c5d0;
        case 0x30c5d4u: goto label_30c5d4;
        case 0x30c5d8u: goto label_30c5d8;
        case 0x30c5dcu: goto label_30c5dc;
        default: break;
    }

    ctx->pc = 0x30c510u;

label_30c510:
    // 0x30c510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30c514:
    // 0x30c514: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30c518:
    // 0x30c518: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30c51c:
    // 0x30c51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30c520:
    // 0x30c520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c524:
    // 0x30c524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30c528:
    // 0x30c528: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_30c52c:
    // 0x30c52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c530:
    // 0x30c530: 0xc087502  jal         func_21D408
label_30c534:
    if (ctx->pc == 0x30C534u) {
        ctx->pc = 0x30C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C530u;
        // 0x30c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C538u;
        goto label_30c538;
    }
    ctx->pc = 0x30C530u;
    SET_GPR_U32(ctx, 31, 0x30C538u);
    ctx->pc = 0x30C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C530u;
    // 0x30c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30C530u, 0x30C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C538u;
label_30c538:
    // 0x30c538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30c53c:
    // 0x30c53c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30c53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c540:
    // 0x30c540: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30c540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30c544:
    // 0x30c544: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30c548:
    // 0x30c548: 0x40f809  jalr        $v0
label_30c54c:
    if (ctx->pc == 0x30C54Cu) {
        ctx->pc = 0x30C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C548u;
        // 0x30c54c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C550u;
        goto label_30c550;
    }
    ctx->pc = 0x30C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30C550u);
        ctx->pc = 0x30C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C548u;
        // 0x30c54c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C548u, 0x30C550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C550u;
label_30c550:
    // 0x30c550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c554:
    // 0x30c554: 0xc0a3630  jal         func_28D8C0
label_30c558:
    if (ctx->pc == 0x30C558u) {
        ctx->pc = 0x30C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C554u;
        // 0x30c558: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C55Cu;
        goto label_30c55c;
    }
    ctx->pc = 0x30C554u;
    SET_GPR_U32(ctx, 31, 0x30C55Cu);
    ctx->pc = 0x30C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C554u;
    // 0x30c558: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30C554u, 0x30C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C55Cu;
label_30c55c:
    // 0x30c55c: 0xc0a3628  jal         func_28D8A0
label_30c560:
    if (ctx->pc == 0x30C560u) {
        ctx->pc = 0x30C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C55Cu;
        // 0x30c560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C564u;
        goto label_30c564;
    }
    ctx->pc = 0x30C55Cu;
    SET_GPR_U32(ctx, 31, 0x30C564u);
    ctx->pc = 0x30C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C55Cu;
    // 0x30c560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30C55Cu, 0x30C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C564u;
label_30c564:
    // 0x30c564: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30c568:
    // 0x30c568: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30c56c:
    // 0x30c56c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_30c570:
    if (ctx->pc == 0x30C570u) {
        ctx->pc = 0x30C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C56Cu;
        // 0x30c570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C574u;
        goto label_30c574;
    }
    ctx->pc = 0x30C56Cu;
    {
        const bool branch_taken_0x30c56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C56Cu;
        // 0x30c570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c56c) {
            ctx->pc = 0x30C5B8u;
            goto label_30c5b8;
        }
    }
    ctx->pc = 0x30C574u;
label_30c574:
    // 0x30c574: 0xc0a4e54  jal         func_293950
label_30c578:
    if (ctx->pc == 0x30C578u) {
        ctx->pc = 0x30C57Cu;
        goto label_30c57c;
    }
    ctx->pc = 0x30C574u;
    SET_GPR_U32(ctx, 31, 0x30C57Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30C574u, 0x30C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C57Cu;
label_30c57c:
    // 0x30c57c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c580:
    // 0x30c580: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_30c584:
    if (ctx->pc == 0x30C584u) {
        ctx->pc = 0x30C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C580u;
        // 0x30c584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C588u;
        goto label_30c588;
    }
    ctx->pc = 0x30C580u;
    {
        const bool branch_taken_0x30c580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C580u;
        // 0x30c584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c580) {
            ctx->pc = 0x30C5A4u;
            goto label_30c5a4;
        }
    }
    ctx->pc = 0x30C588u;
label_30c588:
    // 0x30c588: 0x8628002e  lh          $t0, 0x2E($s1)
    ctx->pc = 0x30c588u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_30c58c:
    // 0x30c58c: 0x92260030  lbu         $a2, 0x30($s1)
    ctx->pc = 0x30c58cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_30c590:
    // 0x30c590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30c590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c594:
    // 0x30c594: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x30c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30c598:
    // 0x30c598: 0xc62d0024  lwc1        $f13, 0x24($s1)
    ctx->pc = 0x30c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_30c59c:
    // 0x30c59c: 0xc0bc4ea  jal         func_2F13A8
label_30c5a0:
    if (ctx->pc == 0x30C5A0u) {
        ctx->pc = 0x30C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C59Cu;
        // 0x30c5a0: 0x9627002c  lhu         $a3, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5A4u;
        goto label_30c5a4;
    }
    ctx->pc = 0x30C59Cu;
    SET_GPR_U32(ctx, 31, 0x30C5A4u);
    ctx->pc = 0x30C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C59Cu;
    // 0x30c5a0: 0x9627002c  lhu         $a3, 0x2C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F13A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F13A8u, 0x30C59Cu, 0x30C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5A4u;
label_30c5a4:
    // 0x30c5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c5a8:
    // 0x30c5a8: 0xc0a35d6  jal         func_28D758
label_30c5ac:
    if (ctx->pc == 0x30C5ACu) {
        ctx->pc = 0x30C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5A8u;
        // 0x30c5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5B0u;
        goto label_30c5b0;
    }
    ctx->pc = 0x30C5A8u;
    SET_GPR_U32(ctx, 31, 0x30C5B0u);
    ctx->pc = 0x30C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5A8u;
    // 0x30c5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30C5A8u, 0x30C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5B0u;
label_30c5b0:
    // 0x30c5b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_30c5b4:
    if (ctx->pc == 0x30C5B4u) {
        ctx->pc = 0x30C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5B0u;
        // 0x30c5b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5B8u;
        goto label_30c5b8;
    }
    ctx->pc = 0x30C5B0u;
    {
        const bool branch_taken_0x30c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5B0u;
        // 0x30c5b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5b0) {
            ctx->pc = 0x30C5C8u;
            goto label_30c5c8;
        }
    }
    ctx->pc = 0x30C5B8u;
label_30c5b8:
    // 0x30c5b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30c5bc:
    // 0x30c5bc: 0xc0ab742  jal         func_2ADD08
label_30c5c0:
    if (ctx->pc == 0x30C5C0u) {
        ctx->pc = 0x30C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5BCu;
        // 0x30c5c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5C4u;
        goto label_30c5c4;
    }
    ctx->pc = 0x30C5BCu;
    SET_GPR_U32(ctx, 31, 0x30C5C4u);
    ctx->pc = 0x30C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5BCu;
    // 0x30c5c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x30C5BCu, 0x30C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5C4u;
label_30c5c4:
    // 0x30c5c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30c5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30c5c8:
    // 0x30c5c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30c5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30c5cc:
    // 0x30c5cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30c5d0:
    // 0x30c5d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30c5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c5d4:
    // 0x30c5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c5d8:
    // 0x30c5d8: 0x3e00008  jr          $ra
label_30c5dc:
    if (ctx->pc == 0x30C5DCu) {
        ctx->pc = 0x30C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D8u;
        // 0x30c5dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5E0u;
        goto label_fallthrough_0x30c5d8;
    }
    ctx->pc = 0x30C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D8u;
        // 0x30c5dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30c5d8:
    ctx->pc = 0x30C5E0u;
}
