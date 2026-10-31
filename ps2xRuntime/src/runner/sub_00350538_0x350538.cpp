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

// Function: sub_00350538
// Address: 0x350538 - 0x350688
void sub_00350538_0x350538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350538_0x350538");
#endif

    switch (ctx->pc) {
        case 0x350550u: goto label_350550;
        case 0x350594u: goto label_350594;
        case 0x3505b0u: goto label_3505b0;
        case 0x3505bcu: goto label_3505bc;
        case 0x3505c8u: goto label_3505c8;
        case 0x3505d4u: goto label_3505d4;
        case 0x3505e0u: goto label_3505e0;
        case 0x3505ecu: goto label_3505ec;
        case 0x350600u: goto label_350600;
        case 0x350660u: goto label_350660;
        default: break;
    }

    ctx->pc = 0x350538u;

    // 0x350538: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x350538u;
    {
        const bool branch_taken_0x350538 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350538u;
        // 0x35053c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350538) {
            ctx->pc = 0x350570u;
            goto label_350570;
        }
    }
    ctx->pc = 0x350540u;
    // 0x350540: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x350540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350544: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x350544u;
    {
        const bool branch_taken_0x350544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350544u;
        // 0x350548: 0x90a50008  lbu         $a1, 0x8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350544) {
            ctx->pc = 0x350578u;
            goto label_350578;
        }
    }
    ctx->pc = 0x35054Cu;
    // 0x35054c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350550:
    // 0x350550: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x350550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350554: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350554u;
    {
        const bool branch_taken_0x350554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x350558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350554u;
        // 0x350558: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350554) {
            ctx->pc = 0x350564u;
            goto label_350564;
        }
    }
    ctx->pc = 0x35055Cu;
    // 0x35055c: 0x3e00008  jr          $ra
    ctx->pc = 0x35055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35055Cu;
        // 0x350560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350564u;
label_350564:
    // 0x350564: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x350564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350568: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x350568u;
    {
        const bool branch_taken_0x350568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x350568) {
            ctx->pc = 0x350550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350550;
        }
    }
    ctx->pc = 0x350570u;
label_350570:
    // 0x350570: 0x3e00008  jr          $ra
    ctx->pc = 0x350570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350570u;
        // 0x350574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350578u;
label_350578:
    // 0x350578: 0x3e00008  jr          $ra
    ctx->pc = 0x350578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350580u;
    // 0x350580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350584: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x350584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x350588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35058c: 0xc051048  jal         func_144120
    ctx->pc = 0x35058Cu;
    SET_GPR_U32(ctx, 31, 0x350594u);
    ctx->pc = 0x350590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35058Cu;
    // 0x350590: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x35058Cu, 0x350594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350594u;
label_350594:
    // 0x350594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350598: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350598u;
    {
        const bool branch_taken_0x350598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350598u;
        // 0x35059c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350598) {
            ctx->pc = 0x3505A8u;
            goto label_3505a8;
        }
    }
    ctx->pc = 0x3505A0u;
    // 0x3505a0: 0x244248b0  addiu       $v0, $v0, 0x48B0
    ctx->pc = 0x3505a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18608));
    // 0x3505a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3505a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3505a8:
    // 0x3505a8: 0xc051048  jal         func_144120
    ctx->pc = 0x3505A8u;
    SET_GPR_U32(ctx, 31, 0x3505B0u);
    ctx->pc = 0x3505ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505A8u;
    // 0x3505ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x3505A8u, 0x3505B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505B0u;
label_3505b0:
    // 0x3505b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3505b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3505b4: 0xc051048  jal         func_144120
    ctx->pc = 0x3505B4u;
    SET_GPR_U32(ctx, 31, 0x3505BCu);
    ctx->pc = 0x3505B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505B4u;
    // 0x3505b8: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x3505B4u, 0x3505BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505BCu;
label_3505bc:
    // 0x3505bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3505bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3505c0: 0xc051048  jal         func_144120
    ctx->pc = 0x3505C0u;
    SET_GPR_U32(ctx, 31, 0x3505C8u);
    ctx->pc = 0x3505C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505C0u;
    // 0x3505c4: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x3505C0u, 0x3505C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505C8u;
label_3505c8:
    // 0x3505c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3505c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3505cc: 0xc051048  jal         func_144120
    ctx->pc = 0x3505CCu;
    SET_GPR_U32(ctx, 31, 0x3505D4u);
    ctx->pc = 0x3505D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505CCu;
    // 0x3505d0: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x3505CCu, 0x3505D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505D4u;
label_3505d4:
    // 0x3505d4: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x3505d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3505d8: 0xc051048  jal         func_144120
    ctx->pc = 0x3505D8u;
    SET_GPR_U32(ctx, 31, 0x3505E0u);
    ctx->pc = 0x3505DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505D8u;
    // 0x3505dc: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x3505D8u, 0x3505E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505E0u;
label_3505e0:
    // 0x3505e0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3505e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x3505e4: 0xc051032  jal         func_1440C8
    ctx->pc = 0x3505E4u;
    SET_GPR_U32(ctx, 31, 0x3505ECu);
    ctx->pc = 0x3505E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505E4u;
    // 0x3505e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x3505E4u, 0x3505ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505ECu;
label_3505ec:
    // 0x3505ec: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x3505ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3505f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3505F0u;
    {
        const bool branch_taken_0x3505f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3505F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505F0u;
        // 0x3505f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505f0) {
            ctx->pc = 0x350638u;
            goto label_350638;
        }
    }
    ctx->pc = 0x3505F8u;
    // 0x3505f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3505f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3505fc: 0x0  nop
    ctx->pc = 0x3505fcu;
    // NOP
label_350600:
    // 0x350600: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x350600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x350604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x350604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x350608: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x35060c: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x35060cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x350610: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x350610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x350614: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x350614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350618: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x350618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x35061c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x350620: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x350620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x350624: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x350624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x350628: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x350628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35062c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35062Cu;
    {
        const bool branch_taken_0x35062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35062Cu;
        // 0x350630: 0x24c6000a  addiu       $a2, $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35062c) {
            ctx->pc = 0x350600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350600;
        }
    }
    ctx->pc = 0x350634u;
    // 0x350634: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x350634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
label_350638:
    // 0x350638: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x350638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x35063c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x35063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x350640: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x350640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x350644: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x350644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x350648: 0x30427ff0  andi        $v0, $v0, 0x7FF0
    ctx->pc = 0x350648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32752);
    // 0x35064c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x350650: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350650u;
    {
        const bool branch_taken_0x350650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x350654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350650u;
        // 0x350654: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350650) {
            ctx->pc = 0x35067Cu;
            goto label_35067c;
        }
    }
    ctx->pc = 0x350658u;
    // 0x350658: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x350658u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35065c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35065cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_350660:
    // 0x350660: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x350660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x350664: 0x0  nop
    ctx->pc = 0x350664u;
    // NOP
    // 0x350668: 0x0  nop
    ctx->pc = 0x350668u;
    // NOP
    // 0x35066c: 0x0  nop
    ctx->pc = 0x35066cu;
    // NOP
    // 0x350670: 0x5482fffb  bnel        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x350670u;
    {
        const bool branch_taken_0x350670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x350670) {
            ctx->pc = 0x350674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350670u;
            // 0x350674: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350660;
        }
    }
    ctx->pc = 0x350678u;
    // 0x350678: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x350678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35067c:
    // 0x35067c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350680: 0x3e00008  jr          $ra
    ctx->pc = 0x350680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350680u;
        // 0x350684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350688u;
}
