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

// Function: sub_00183510
// Address: 0x183510 - 0x1835d8
void sub_00183510_0x183510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183510_0x183510");
#endif

    switch (ctx->pc) {
        case 0x183510u: goto label_183510;
        case 0x183514u: goto label_183514;
        case 0x183518u: goto label_183518;
        case 0x18351cu: goto label_18351c;
        case 0x183520u: goto label_183520;
        case 0x183524u: goto label_183524;
        case 0x183528u: goto label_183528;
        case 0x18352cu: goto label_18352c;
        case 0x183530u: goto label_183530;
        case 0x183534u: goto label_183534;
        case 0x183538u: goto label_183538;
        case 0x18353cu: goto label_18353c;
        case 0x183540u: goto label_183540;
        case 0x183544u: goto label_183544;
        case 0x183548u: goto label_183548;
        case 0x18354cu: goto label_18354c;
        case 0x183550u: goto label_183550;
        case 0x183554u: goto label_183554;
        case 0x183558u: goto label_183558;
        case 0x18355cu: goto label_18355c;
        case 0x183560u: goto label_183560;
        case 0x183564u: goto label_183564;
        case 0x183568u: goto label_183568;
        case 0x18356cu: goto label_18356c;
        case 0x183570u: goto label_183570;
        case 0x183574u: goto label_183574;
        case 0x183578u: goto label_183578;
        case 0x18357cu: goto label_18357c;
        case 0x183580u: goto label_183580;
        case 0x183584u: goto label_183584;
        case 0x183588u: goto label_183588;
        case 0x18358cu: goto label_18358c;
        case 0x183590u: goto label_183590;
        case 0x183594u: goto label_183594;
        case 0x183598u: goto label_183598;
        case 0x18359cu: goto label_18359c;
        case 0x1835a0u: goto label_1835a0;
        case 0x1835a4u: goto label_1835a4;
        case 0x1835a8u: goto label_1835a8;
        case 0x1835acu: goto label_1835ac;
        case 0x1835b0u: goto label_1835b0;
        case 0x1835b4u: goto label_1835b4;
        case 0x1835b8u: goto label_1835b8;
        case 0x1835bcu: goto label_1835bc;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c4u: goto label_1835c4;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835ccu: goto label_1835cc;
        case 0x1835d0u: goto label_1835d0;
        case 0x1835d4u: goto label_1835d4;
        default: break;
    }

    ctx->pc = 0x183510u;

label_183510:
    // 0x183510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_183514:
    // 0x183514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x183514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_183518:
    // 0x183518: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_18351c:
    // 0x18351c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183520:
    // 0x183520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_183524:
    // 0x183524: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x183524u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_183528:
    // 0x183528: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18352c:
    // 0x18352c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_183530:
    // 0x183530: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_183534:
    // 0x183534: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_183538:
    // 0x183538: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x183538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18353c:
    // 0x18353c: 0x60f809  jalr        $v1
label_183540:
    if (ctx->pc == 0x183540u) {
        ctx->pc = 0x183540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18353Cu;
        // 0x183540: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183544u;
        goto label_183544;
    }
    ctx->pc = 0x18353Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x183544u);
        ctx->pc = 0x183540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18353Cu;
        // 0x183540: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18353Cu, 0x183544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183544u;
label_183544:
    // 0x183544: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_183548:
    // 0x183548: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x183548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18354c:
    // 0x18354c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_183550:
    // 0x183550: 0x24a52908  addiu       $a1, $a1, 0x2908
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10504));
label_183554:
    // 0x183554: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_183558:
    // 0x183558: 0x25082918  addiu       $t0, $t0, 0x2918
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10520));
label_18355c:
    // 0x18355c: 0x24066430  addiu       $a2, $zero, 0x6430
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25648));
label_183560:
    // 0x183560: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_183564:
    // 0x183564: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_183568:
    // 0x183568: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x183568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_18356c:
    // 0x18356c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_183570:
    // 0x183570: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x183570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183574:
    // 0x183574: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_183578:
    // 0x183578: 0x40f809  jalr        $v0
label_18357c:
    if (ctx->pc == 0x18357Cu) {
        ctx->pc = 0x18357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183578u;
        // 0x18357c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183580u;
        goto label_183580;
    }
    ctx->pc = 0x183578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183580u);
        ctx->pc = 0x18357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183578u;
        // 0x18357c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183578u, 0x183580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183580u;
label_183580:
    // 0x183580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_183584:
    // 0x183584: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_183588:
    if (ctx->pc == 0x183588u) {
        ctx->pc = 0x183588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183584u;
        // 0x183588: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18358Cu;
        goto label_18358c;
    }
    ctx->pc = 0x183584u;
    {
        const bool branch_taken_0x183584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183584u;
        // 0x183588: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183584) {
            ctx->pc = 0x18359Cu;
            goto label_18359c;
        }
    }
    ctx->pc = 0x18358Cu;
label_18358c:
    // 0x18358c: 0xc060d76  jal         func_1835D8
label_183590:
    if (ctx->pc == 0x183590u) {
        ctx->pc = 0x183594u;
        goto label_183594;
    }
    ctx->pc = 0x18358Cu;
    SET_GPR_U32(ctx, 31, 0x183594u);
    ctx->pc = 0x1835D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1835D8u, 0x18358Cu, 0x183594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183594u;
label_183594:
    // 0x183594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_183598:
    // 0x183598: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18359c:
    // 0x18359c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x18359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_1835a0:
    // 0x1835a0: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1835a4:
    // 0x1835a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1835a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1835a8:
    // 0x1835a8: 0xac4471a8  sw          $a0, 0x71A8($v0)
    ctx->pc = 0x1835a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29096), GPR_U32(ctx, 4));
label_1835ac:
    // 0x1835ac: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1835b0:
    // 0x1835b0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1835b4:
    // 0x1835b4: 0x40f809  jalr        $v0
label_1835b8:
    if (ctx->pc == 0x1835B8u) {
        ctx->pc = 0x1835B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B4u;
        // 0x1835b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835BCu;
        goto label_1835bc;
    }
    ctx->pc = 0x1835B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1835BCu);
        ctx->pc = 0x1835B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B4u;
        // 0x1835b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1835B4u, 0x1835BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1835BCu;
label_1835bc:
    // 0x1835bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1835bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1835c0:
    // 0x1835c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1835c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1835c4:
    // 0x1835c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1835c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1835c8:
    // 0x1835c8: 0x3e00008  jr          $ra
label_1835cc:
    if (ctx->pc == 0x1835CCu) {
        ctx->pc = 0x1835CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835C8u;
        // 0x1835cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835D0u;
        goto label_1835d0;
    }
    ctx->pc = 0x1835C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835C8u;
        // 0x1835cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1835C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1835D0u;
label_1835d0:
    // 0x1835d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1835d4:
    // 0x1835d4: 0x0  nop
    ctx->pc = 0x1835d4u;
    // NOP
    ctx->pc = 0x1835d8u;
}
