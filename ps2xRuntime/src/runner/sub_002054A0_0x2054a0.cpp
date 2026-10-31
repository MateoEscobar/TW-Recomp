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

// Function: sub_002054A0
// Address: 0x2054a0 - 0x2055b0
void sub_002054A0_0x2054a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002054A0_0x2054a0");
#endif

    switch (ctx->pc) {
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        default: break;
    }

    ctx->pc = 0x2054a0u;

label_2054a0:
    // 0x2054a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2054a4:
    // 0x2054a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2054a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2054a8:
    // 0x2054a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2054a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2054ac:
    // 0x2054ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2054acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2054b0:
    // 0x2054b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2054b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2054b4:
    // 0x2054b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2054b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2054b8:
    // 0x2054b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2054b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2054bc:
    // 0x2054bc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2054bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_2054c0:
    // 0x2054c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2054c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2054c4:
    // 0x2054c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2054c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2054c8:
    // 0x2054c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2054c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2054cc:
    // 0x2054cc: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x2054ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_2054d0:
    // 0x2054d0: 0x8e465024  lw          $a2, 0x5024($s2)
    ctx->pc = 0x2054d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
label_2054d4:
    // 0x2054d4: 0x0  nop
    ctx->pc = 0x2054d4u;
    // NOP
label_2054d8:
    // 0x2054d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2054d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2054dc:
    // 0x2054dc: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_2054e0:
    // 0x2054e0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_2054e4:
    // 0x2054e4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2054e8:
    // 0x2054e8: 0x40f809  jalr        $v0
label_2054ec:
    if (ctx->pc == 0x2054ECu) {
        ctx->pc = 0x2054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054E8u;
        // 0x2054ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054F0u;
        goto label_2054f0;
    }
    ctx->pc = 0x2054E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2054F0u);
        ctx->pc = 0x2054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054E8u;
        // 0x2054ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054E8u, 0x2054F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2054F0u;
label_2054f0:
    // 0x2054f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2054f4:
    if (ctx->pc == 0x2054F4u) {
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0x8e465024  lw          $a2, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054F8u;
        goto label_2054f8;
    }
    ctx->pc = 0x2054F0u;
    {
        const bool branch_taken_0x2054f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0x8e465024  lw          $a2, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054f0) {
            ctx->pc = 0x205524u;
            goto label_205524;
        }
    }
    ctx->pc = 0x2054F8u;
label_2054f8:
    // 0x2054f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2054f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2054fc:
    // 0x2054fc: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x2054fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_205500:
    // 0x205500: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_205504:
    // 0x205504: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x205504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_205508:
    // 0x205508: 0x40f809  jalr        $v0
label_20550c:
    if (ctx->pc == 0x20550Cu) {
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205510u;
        goto label_205510;
    }
    ctx->pc = 0x205508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205510u);
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205508u, 0x205510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205510u;
label_205510:
    // 0x205510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205514:
    // 0x205514: 0xc10c313  jal         func_430C4C
label_205518:
    if (ctx->pc == 0x205518u) {
        ctx->pc = 0x205518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205514u;
        // 0x205518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20551Cu;
        goto label_20551c;
    }
    ctx->pc = 0x205514u;
    SET_GPR_U32(ctx, 31, 0x20551Cu);
    ctx->pc = 0x205518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205514u;
    // 0x205518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x205514u, 0x20551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20551Cu;
label_20551c:
    // 0x20551c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_205520:
    if (ctx->pc == 0x205520u) {
        ctx->pc = 0x205520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20551Cu;
        // 0x205520: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205524u;
        goto label_205524;
    }
    ctx->pc = 0x20551Cu;
    {
        const bool branch_taken_0x20551c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20551c) {
            ctx->pc = 0x205520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20551Cu;
            // 0x205520: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205534u;
            goto label_205534;
        }
    }
    ctx->pc = 0x205524u;
label_205524:
    // 0x205524: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205528:
    // 0x205528: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x205528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_20552c:
    // 0x20552c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_205530:
    if (ctx->pc == 0x205530u) {
        ctx->pc = 0x205530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20552Cu;
        // 0x205530: 0x8e465024  lw          $a2, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205534u;
        goto label_205534;
    }
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20552Cu;
        // 0x205530: 0x8e465024  lw          $a2, 0x5024($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20552c) {
            ctx->pc = 0x2054D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2054d8;
        }
    }
    ctx->pc = 0x205534u;
label_205534:
    // 0x205534: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_205538:
    if (ctx->pc == 0x205538u) {
        ctx->pc = 0x205538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205534u;
        // 0x205538: 0x8e82f5f4  lw          $v0, -0xA0C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20553Cu;
        goto label_20553c;
    }
    ctx->pc = 0x205534u;
    {
        const bool branch_taken_0x205534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205534u;
        // 0x205538: 0x8e82f5f4  lw          $v0, -0xA0C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205534) {
            ctx->pc = 0x205580u;
            goto label_205580;
        }
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_205540:
    // 0x205540: 0x8c510094  lw          $s1, 0x94($v0)
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_205544:
    // 0x205544: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_205548:
    // 0x205548: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x205548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_20554c:
    // 0x20554c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_205550:
    // 0x205550: 0xc067b9c  jal         func_19EE70
label_205554:
    if (ctx->pc == 0x205554u) {
        ctx->pc = 0x205554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205550u;
        // 0x205554: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205558u;
        goto label_205558;
    }
    ctx->pc = 0x205550u;
    SET_GPR_U32(ctx, 31, 0x205558u);
    ctx->pc = 0x205554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205550u;
    // 0x205554: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x205550u, 0x205558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205558u;
label_205558:
    // 0x205558: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20555c:
    // 0x20555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205560:
    // 0x205560: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x205560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_205564:
    // 0x205564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x205564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_205568:
    // 0x205568: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20556c:
    // 0x20556c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205570:
    // 0x205570: 0x60f809  jalr        $v1
label_205574:
    if (ctx->pc == 0x205574u) {
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205578u;
        goto label_205578;
    }
    ctx->pc = 0x205570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205578u);
        ctx->pc = 0x205574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205570u;
        // 0x205574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205570u, 0x205578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205578u;
label_205578:
    // 0x205578: 0x10000006  b           . + 4 + (0x6 << 2)
label_20557c:
    if (ctx->pc == 0x20557Cu) {
        ctx->pc = 0x20557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205578u;
        // 0x20557c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205580u;
        goto label_205580;
    }
    ctx->pc = 0x205578u;
    {
        const bool branch_taken_0x205578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205578u;
        // 0x20557c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205578) {
            ctx->pc = 0x205594u;
            goto label_205594;
        }
    }
    ctx->pc = 0x205580u;
label_205580:
    // 0x205580: 0xc081026  jal         func_204098
label_205584:
    if (ctx->pc == 0x205584u) {
        ctx->pc = 0x205584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205580u;
        // 0x205584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205588u;
        goto label_205588;
    }
    ctx->pc = 0x205580u;
    SET_GPR_U32(ctx, 31, 0x205588u);
    ctx->pc = 0x205584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205580u;
    // 0x205584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204098u, 0x205580u, 0x205588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205588u;
label_205588:
    // 0x205588: 0x8e82f5f4  lw          $v0, -0xA0C($s4)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964724)));
label_20558c:
    // 0x20558c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x20558cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_205590:
    // 0x205590: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x205590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_205594:
    // 0x205594: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x205594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_205598:
    // 0x205598: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x205598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20559c:
    // 0x20559c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20559cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2055a0:
    // 0x2055a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2055a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2055a4:
    // 0x2055a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2055a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2055a8:
    // 0x2055a8: 0x3e00008  jr          $ra
label_2055ac:
    if (ctx->pc == 0x2055ACu) {
        ctx->pc = 0x2055ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A8u;
        // 0x2055ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055B0u;
        goto label_fallthrough_0x2055a8;
    }
    ctx->pc = 0x2055A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2055ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A8u;
        // 0x2055ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2055A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2055a8:
    ctx->pc = 0x2055B0u;
}
