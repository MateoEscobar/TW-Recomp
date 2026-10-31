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

// Function: sub_004AD850
// Address: 0x4ad850 - 0x4ad948
void sub_004AD850_0x4ad850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD850_0x4ad850");
#endif

    switch (ctx->pc) {
        case 0x4ad870u: goto label_4ad870;
        case 0x4ad8c0u: goto label_4ad8c0;
        case 0x4ad918u: goto label_4ad918;
        default: break;
    }

    ctx->pc = 0x4ad850u;

    // 0x4ad850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad854: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4ad854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ad858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad864: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ad864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad868: 0xc12cadc  jal         func_4B2B70
    ctx->pc = 0x4AD868u;
    SET_GPR_U32(ctx, 31, 0x4AD870u);
    ctx->pc = 0x4AD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD868u;
    // 0x4ad86c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2B70u, 0x4AD868u, 0x4AD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD870u;
label_4ad870:
    // 0x4ad870: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ad870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad874: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD874u;
    {
        const bool branch_taken_0x4ad874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD874u;
        // 0x4ad878: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad874) {
            ctx->pc = 0x4AD890u;
            goto label_4ad890;
        }
    }
    ctx->pc = 0x4AD87Cu;
    // 0x4ad87c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad880: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ad884: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ad888: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ad88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad890:
    // 0x4ad890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad898: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD898u;
        // 0x4ad89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD8A0u;
    // 0x4ad8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad8a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4ad8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ad8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad8ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad8b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad8b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ad8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad8b8: 0xc12cab4  jal         func_4B2AD0
    ctx->pc = 0x4AD8B8u;
    SET_GPR_U32(ctx, 31, 0x4AD8C0u);
    ctx->pc = 0x4AD8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD8B8u;
    // 0x4ad8bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4AD8B8u, 0x4AD8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD8C0u;
label_4ad8c0:
    // 0x4ad8c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ad8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad8c4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD8C4u;
    {
        const bool branch_taken_0x4ad8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8C4u;
        // 0x4ad8c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad8c4) {
            ctx->pc = 0x4AD8E0u;
            goto label_4ad8e0;
        }
    }
    ctx->pc = 0x4AD8CCu;
    // 0x4ad8cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad8d0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ad8d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ad8d8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ad8dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad8e0:
    // 0x4ad8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8E8u;
        // 0x4ad8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD8F0u;
    // 0x4ad8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ad8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad8fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ad8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad908: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4ad908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ad90c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad910: 0xc12cab4  jal         func_4B2AD0
    ctx->pc = 0x4AD910u;
    SET_GPR_U32(ctx, 31, 0x4AD918u);
    ctx->pc = 0x4AD914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD910u;
    // 0x4ad914: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4AD910u, 0x4AD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD918u;
label_4ad918:
    // 0x4ad918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ad918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad91c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ad91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad920: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD920u;
    {
        const bool branch_taken_0x4ad920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD920u;
        // 0x4ad924: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad920) {
            ctx->pc = 0x4AD938u;
            goto label_4ad938;
        }
    }
    ctx->pc = 0x4AD928u;
    // 0x4ad928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad92c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ad930: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ad934: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad938:
    // 0x4ad938: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad940: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD940u;
        // 0x4ad944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD948u;
}
