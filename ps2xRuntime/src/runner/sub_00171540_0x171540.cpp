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

// Function: sub_00171540
// Address: 0x171540 - 0x171608
void sub_00171540_0x171540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171540_0x171540");
#endif

    switch (ctx->pc) {
        case 0x171540u: goto label_171540;
        case 0x171544u: goto label_171544;
        case 0x171548u: goto label_171548;
        case 0x17154cu: goto label_17154c;
        case 0x171550u: goto label_171550;
        case 0x171554u: goto label_171554;
        case 0x171558u: goto label_171558;
        case 0x17155cu: goto label_17155c;
        case 0x171560u: goto label_171560;
        case 0x171564u: goto label_171564;
        case 0x171568u: goto label_171568;
        case 0x17156cu: goto label_17156c;
        case 0x171570u: goto label_171570;
        case 0x171574u: goto label_171574;
        case 0x171578u: goto label_171578;
        case 0x17157cu: goto label_17157c;
        case 0x171580u: goto label_171580;
        case 0x171584u: goto label_171584;
        case 0x171588u: goto label_171588;
        case 0x17158cu: goto label_17158c;
        case 0x171590u: goto label_171590;
        case 0x171594u: goto label_171594;
        case 0x171598u: goto label_171598;
        case 0x17159cu: goto label_17159c;
        case 0x1715a0u: goto label_1715a0;
        case 0x1715a4u: goto label_1715a4;
        case 0x1715a8u: goto label_1715a8;
        case 0x1715acu: goto label_1715ac;
        case 0x1715b0u: goto label_1715b0;
        case 0x1715b4u: goto label_1715b4;
        case 0x1715b8u: goto label_1715b8;
        case 0x1715bcu: goto label_1715bc;
        case 0x1715c0u: goto label_1715c0;
        case 0x1715c4u: goto label_1715c4;
        case 0x1715c8u: goto label_1715c8;
        case 0x1715ccu: goto label_1715cc;
        case 0x1715d0u: goto label_1715d0;
        case 0x1715d4u: goto label_1715d4;
        case 0x1715d8u: goto label_1715d8;
        case 0x1715dcu: goto label_1715dc;
        case 0x1715e0u: goto label_1715e0;
        case 0x1715e4u: goto label_1715e4;
        case 0x1715e8u: goto label_1715e8;
        case 0x1715ecu: goto label_1715ec;
        case 0x1715f0u: goto label_1715f0;
        case 0x1715f4u: goto label_1715f4;
        case 0x1715f8u: goto label_1715f8;
        case 0x1715fcu: goto label_1715fc;
        case 0x171600u: goto label_171600;
        case 0x171604u: goto label_171604;
        default: break;
    }

    ctx->pc = 0x171540u;

label_171540:
    // 0x171540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_171544:
    // 0x171544: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_171548:
    // 0x171548: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x171548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_17154c:
    // 0x17154c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171550:
    // 0x171550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171554:
    // 0x171554: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_171558:
    // 0x171558: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17155c:
    // 0x17155c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_171560:
    // 0x171560: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x171560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_171564:
    // 0x171564: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x171564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_171568:
    // 0x171568: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_17156c:
    // 0x17156c: 0x60f809  jalr        $v1
label_171570:
    if (ctx->pc == 0x171570u) {
        ctx->pc = 0x171570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17156Cu;
        // 0x171570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171574u;
        goto label_171574;
    }
    ctx->pc = 0x17156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171574u);
        ctx->pc = 0x171570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17156Cu;
        // 0x171570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17156Cu, 0x171574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171574u;
label_171574:
    // 0x171574: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x171574u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171578:
    // 0x171578: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_17157c:
    // 0x17157c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_171580:
    // 0x171580: 0x24a51a88  addiu       $a1, $a1, 0x1A88
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6792));
label_171584:
    // 0x171584: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_171588:
    // 0x171588: 0x25081aa0  addiu       $t0, $t0, 0x1AA0
    ctx->pc = 0x171588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6816));
label_17158c:
    // 0x17158c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_171590:
    // 0x171590: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x171590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_171594:
    // 0x171594: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_171598:
    // 0x171598: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x171598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_17159c:
    // 0x17159c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1715a0:
    // 0x1715a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1715a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1715a4:
    // 0x1715a4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1715a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1715a8:
    // 0x1715a8: 0x40f809  jalr        $v0
label_1715ac:
    if (ctx->pc == 0x1715ACu) {
        ctx->pc = 0x1715ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715A8u;
        // 0x1715ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715B0u;
        goto label_1715b0;
    }
    ctx->pc = 0x1715A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1715B0u);
        ctx->pc = 0x1715ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715A8u;
        // 0x1715ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715A8u, 0x1715B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1715B0u;
label_1715b0:
    // 0x1715b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1715b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1715b4:
    // 0x1715b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1715b8:
    if (ctx->pc == 0x1715B8u) {
        ctx->pc = 0x1715B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715B4u;
        // 0x1715b8: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715BCu;
        goto label_1715bc;
    }
    ctx->pc = 0x1715B4u;
    {
        const bool branch_taken_0x1715b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715B4u;
        // 0x1715b8: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715b4) {
            ctx->pc = 0x1715CCu;
            goto label_1715cc;
        }
    }
    ctx->pc = 0x1715BCu;
label_1715bc:
    // 0x1715bc: 0xc05c642  jal         func_171908
label_1715c0:
    if (ctx->pc == 0x1715C0u) {
        ctx->pc = 0x1715C4u;
        goto label_1715c4;
    }
    ctx->pc = 0x1715BCu;
    SET_GPR_U32(ctx, 31, 0x1715C4u);
    ctx->pc = 0x171908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171908u, 0x1715BCu, 0x1715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715C4u;
label_1715c4:
    // 0x1715c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1715c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1715c8:
    // 0x1715c8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1715c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1715cc:
    // 0x1715cc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1715ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_1715d0:
    // 0x1715d0: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1715d4:
    // 0x1715d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1715d8:
    // 0x1715d8: 0xac4471a4  sw          $a0, 0x71A4($v0)
    ctx->pc = 0x1715d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29092), GPR_U32(ctx, 4));
label_1715dc:
    // 0x1715dc: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1715dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1715e0:
    // 0x1715e0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1715e4:
    // 0x1715e4: 0x40f809  jalr        $v0
label_1715e8:
    if (ctx->pc == 0x1715E8u) {
        ctx->pc = 0x1715E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715E4u;
        // 0x1715e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715ECu;
        goto label_1715ec;
    }
    ctx->pc = 0x1715E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1715ECu);
        ctx->pc = 0x1715E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715E4u;
        // 0x1715e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715E4u, 0x1715ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1715ECu;
label_1715ec:
    // 0x1715ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1715ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1715f0:
    // 0x1715f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1715f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1715f4:
    // 0x1715f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1715f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1715f8:
    // 0x1715f8: 0x3e00008  jr          $ra
label_1715fc:
    if (ctx->pc == 0x1715FCu) {
        ctx->pc = 0x1715FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715F8u;
        // 0x1715fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171600u;
        goto label_171600;
    }
    ctx->pc = 0x1715F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1715FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715F8u;
        // 0x1715fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171600u;
label_171600:
    // 0x171600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x171600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_171604:
    // 0x171604: 0x0  nop
    ctx->pc = 0x171604u;
    // NOP
    ctx->pc = 0x171608u;
}
