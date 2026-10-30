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

// Function: sub_00156540
// Address: 0x156540 - 0x156658
void sub_00156540_0x156540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156540_0x156540");
#endif

    switch (ctx->pc) {
        case 0x156540u: goto label_156540;
        case 0x156544u: goto label_156544;
        case 0x156548u: goto label_156548;
        case 0x15654cu: goto label_15654c;
        case 0x156550u: goto label_156550;
        case 0x156554u: goto label_156554;
        case 0x156558u: goto label_156558;
        case 0x15655cu: goto label_15655c;
        case 0x156560u: goto label_156560;
        case 0x156564u: goto label_156564;
        case 0x156568u: goto label_156568;
        case 0x15656cu: goto label_15656c;
        case 0x156570u: goto label_156570;
        case 0x156574u: goto label_156574;
        case 0x156578u: goto label_156578;
        case 0x15657cu: goto label_15657c;
        case 0x156580u: goto label_156580;
        case 0x156584u: goto label_156584;
        case 0x156588u: goto label_156588;
        case 0x15658cu: goto label_15658c;
        case 0x156590u: goto label_156590;
        case 0x156594u: goto label_156594;
        case 0x156598u: goto label_156598;
        case 0x15659cu: goto label_15659c;
        case 0x1565a0u: goto label_1565a0;
        case 0x1565a4u: goto label_1565a4;
        case 0x1565a8u: goto label_1565a8;
        case 0x1565acu: goto label_1565ac;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b4u: goto label_1565b4;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565bcu: goto label_1565bc;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c4u: goto label_1565c4;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565ccu: goto label_1565cc;
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        case 0x156640u: goto label_156640;
        case 0x156644u: goto label_156644;
        case 0x156648u: goto label_156648;
        case 0x15664cu: goto label_15664c;
        case 0x156650u: goto label_156650;
        case 0x156654u: goto label_156654;
        default: break;
    }

    ctx->pc = 0x156540u;

label_156540:
    // 0x156540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_156544:
    // 0x156544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_156548:
    // 0x156548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15654c:
    // 0x15654c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_156550:
    // 0x156550: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x156550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_156554:
    // 0x156554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_156558:
    // 0x156558: 0xc047ab8  jal         func_11EAE0
label_15655c:
    if (ctx->pc == 0x15655Cu) {
        ctx->pc = 0x15655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156558u;
        // 0x15655c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156560u;
        goto label_156560;
    }
    ctx->pc = 0x156558u;
    SET_GPR_U32(ctx, 31, 0x156560u);
    ctx->pc = 0x15655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156558u;
    // 0x15655c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x156558u, 0x156560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156560u;
label_156560:
    // 0x156560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x156560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156564:
    // 0x156564: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
label_156568:
    if (ctx->pc == 0x156568u) {
        ctx->pc = 0x156568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156564u;
        // 0x156568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15656Cu;
        goto label_15656c;
    }
    ctx->pc = 0x156564u;
    {
        const bool branch_taken_0x156564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x156564) {
            ctx->pc = 0x156568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156564u;
            // 0x156568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1565CCu;
            goto label_1565cc;
        }
    }
    ctx->pc = 0x15656Cu;
label_15656c:
    // 0x15656c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15656cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_156570:
    // 0x156570: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x156570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_156574:
    // 0x156574: 0x0  nop
    ctx->pc = 0x156574u;
    // NOP
label_156578:
    // 0x156578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15657c:
    // 0x15657c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_156580:
    // 0x156580: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_156584:
    // 0x156584: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x156584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_156588:
    // 0x156588: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x156588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_15658c:
    // 0x15658c: 0x40f809  jalr        $v0
label_156590:
    if (ctx->pc == 0x156590u) {
        ctx->pc = 0x156590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15658Cu;
        // 0x156590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156594u;
        goto label_156594;
    }
    ctx->pc = 0x15658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156594u);
        ctx->pc = 0x156590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15658Cu;
        // 0x156590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15658Cu, 0x156594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156594u;
label_156594:
    // 0x156594: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x156594u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_156598:
    // 0x156598: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_15659c:
    if (ctx->pc == 0x15659Cu) {
        ctx->pc = 0x15659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156598u;
        // 0x15659c: 0x8e46cdb4  lw          $a2, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565A0u;
        goto label_1565a0;
    }
    ctx->pc = 0x156598u;
    {
        const bool branch_taken_0x156598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156598u;
        // 0x15659c: 0x8e46cdb4  lw          $a2, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156598) {
            ctx->pc = 0x156578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156578;
        }
    }
    ctx->pc = 0x1565A0u;
label_1565a0:
    // 0x1565a0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1565a4:
    if (ctx->pc == 0x1565A4u) {
        ctx->pc = 0x1565A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565A0u;
        // 0x1565a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565A8u;
        goto label_1565a8;
    }
    ctx->pc = 0x1565A0u;
    {
        const bool branch_taken_0x1565a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565A0u;
        // 0x1565a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565a0) {
            ctx->pc = 0x1565CCu;
            goto label_1565cc;
        }
    }
    ctx->pc = 0x1565A8u;
label_1565a8:
    // 0x1565a8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1565a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1565ac:
    // 0x1565ac: 0x8e4247c4  lw          $v0, 0x47C4($s2)
    ctx->pc = 0x1565acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_1565b0:
    // 0x1565b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1565b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1565b4:
    // 0x1565b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1565b8:
    // 0x1565b8: 0xc10342a  jal         func_40D0A8
label_1565bc:
    if (ctx->pc == 0x1565BCu) {
        ctx->pc = 0x1565BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565B8u;
        // 0x1565bc: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565C0u;
        goto label_1565c0;
    }
    ctx->pc = 0x1565B8u;
    SET_GPR_U32(ctx, 31, 0x1565C0u);
    ctx->pc = 0x1565BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565B8u;
    // 0x1565bc: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D0A8u, 0x1565B8u, 0x1565C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565C0u;
label_1565c0:
    // 0x1565c0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1565c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1565c4:
    // 0x1565c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1565c8:
    if (ctx->pc == 0x1565C8u) {
        ctx->pc = 0x1565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565C4u;
        // 0x1565c8: 0x8e4247c4  lw          $v0, 0x47C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565CCu;
        goto label_1565cc;
    }
    ctx->pc = 0x1565C4u;
    {
        const bool branch_taken_0x1565c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565C4u;
        // 0x1565c8: 0x8e4247c4  lw          $v0, 0x47C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565c4) {
            ctx->pc = 0x1565B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1565b0;
        }
    }
    ctx->pc = 0x1565CCu;
label_1565cc:
    // 0x1565cc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_1565d0:
    if (ctx->pc == 0x1565D0u) {
        ctx->pc = 0x1565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565CCu;
        // 0x1565d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565D4u;
        goto label_1565d4;
    }
    ctx->pc = 0x1565CCu;
    {
        const bool branch_taken_0x1565cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565CCu;
        // 0x1565d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565cc) {
            ctx->pc = 0x156604u;
            goto label_156604;
        }
    }
    ctx->pc = 0x1565D4u;
label_1565d4:
    // 0x1565d4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1565d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1565d8:
    // 0x1565d8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1565dc:
    // 0x1565dc: 0x8e64cce4  lw          $a0, -0x331C($s3)
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
label_1565e0:
    // 0x1565e0: 0xc05fa98  jal         func_17EA60
label_1565e4:
    if (ctx->pc == 0x1565E4u) {
        ctx->pc = 0x1565E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565E0u;
        // 0x1565e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565E8u;
        goto label_1565e8;
    }
    ctx->pc = 0x1565E0u;
    SET_GPR_U32(ctx, 31, 0x1565E8u);
    ctx->pc = 0x1565E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565E0u;
    // 0x1565e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA60u, 0x1565E0u, 0x1565E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565E8u;
label_1565e8:
    // 0x1565e8: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x1565e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_1565ec:
    // 0x1565ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1565ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1565f0:
    // 0x1565f0: 0xc103a36  jal         func_40E8D8
label_1565f4:
    if (ctx->pc == 0x1565F4u) {
        ctx->pc = 0x1565F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565F0u;
        // 0x1565f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565F8u;
        goto label_1565f8;
    }
    ctx->pc = 0x1565F0u;
    SET_GPR_U32(ctx, 31, 0x1565F8u);
    ctx->pc = 0x1565F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565F0u;
    // 0x1565f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D8u, 0x1565F0u, 0x1565F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565F8u;
label_1565f8:
    // 0x1565f8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1565f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1565fc:
    // 0x1565fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_156600:
    if (ctx->pc == 0x156600u) {
        ctx->pc = 0x156600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565FCu;
        // 0x156600: 0x8e64cce4  lw          $a0, -0x331C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156604u;
        goto label_156604;
    }
    ctx->pc = 0x1565FCu;
    {
        const bool branch_taken_0x1565fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565FCu;
        // 0x156600: 0x8e64cce4  lw          $a0, -0x331C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565fc) {
            ctx->pc = 0x1565E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1565e0;
        }
    }
    ctx->pc = 0x156604u;
label_156604:
    // 0x156604: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_156608:
    if (ctx->pc == 0x156608u) {
        ctx->pc = 0x156608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156604u;
        // 0x156608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15660Cu;
        goto label_15660c;
    }
    ctx->pc = 0x156604u;
    {
        const bool branch_taken_0x156604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x156608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156604u;
        // 0x156608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156604) {
            ctx->pc = 0x156630u;
            goto label_156630;
        }
    }
    ctx->pc = 0x15660Cu;
label_15660c:
    // 0x15660c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15660cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_156610:
    // 0x156610: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
label_156614:
    // 0x156614: 0x0  nop
    ctx->pc = 0x156614u;
    // NOP
label_156618:
    // 0x156618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15661c:
    // 0x15661c: 0xc0616ce  jal         func_185B38
label_156620:
    if (ctx->pc == 0x156620u) {
        ctx->pc = 0x156620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15661Cu;
        // 0x156620: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156624u;
        goto label_156624;
    }
    ctx->pc = 0x15661Cu;
    SET_GPR_U32(ctx, 31, 0x156624u);
    ctx->pc = 0x156620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15661Cu;
    // 0x156620: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185B38u, 0x15661Cu, 0x156624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156624u;
label_156624:
    // 0x156624: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_156628:
    // 0x156628: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_15662c:
    if (ctx->pc == 0x15662Cu) {
        ctx->pc = 0x15662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156628u;
        // 0x15662c: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156630u;
        goto label_156630;
    }
    ctx->pc = 0x156628u;
    {
        const bool branch_taken_0x156628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156628u;
        // 0x15662c: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156628) {
            ctx->pc = 0x156618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156618;
        }
    }
    ctx->pc = 0x156630u;
label_156630:
    // 0x156630: 0xc05ecb8  jal         func_17B2E0
label_156634:
    if (ctx->pc == 0x156634u) {
        ctx->pc = 0x156638u;
        goto label_156638;
    }
    ctx->pc = 0x156630u;
    SET_GPR_U32(ctx, 31, 0x156638u);
    ctx->pc = 0x17B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B2E0u, 0x156630u, 0x156638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156638u;
label_156638:
    // 0x156638: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x156638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15663c:
    // 0x15663c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156640:
    // 0x156640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156644:
    // 0x156644: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x156644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156648:
    // 0x156648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15664c:
    // 0x15664c: 0x3e00008  jr          $ra
label_156650:
    if (ctx->pc == 0x156650u) {
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15664Cu;
        // 0x156650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156654u;
        goto label_156654;
    }
    ctx->pc = 0x15664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15664Cu;
        // 0x156650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156654u;
label_156654:
    // 0x156654: 0x0  nop
    ctx->pc = 0x156654u;
    // NOP
    ctx->pc = 0x156658u;
}
