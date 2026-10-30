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

// Function: sub_00443658
// Address: 0x443658 - 0x443738
void sub_00443658_0x443658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443658_0x443658");
#endif

    switch (ctx->pc) {
        case 0x443670u: goto label_443670;
        case 0x443690u: goto label_443690;
        case 0x4436a8u: goto label_4436a8;
        case 0x4436b0u: goto label_4436b0;
        case 0x4436b8u: goto label_4436b8;
        case 0x4436c4u: goto label_4436c4;
        case 0x4436c8u: goto label_4436c8;
        case 0x4436d0u: goto label_4436d0;
        case 0x4436e0u: goto label_4436e0;
        case 0x443708u: goto label_443708;
        case 0x443710u: goto label_443710;
        default: break;
    }

    ctx->pc = 0x443658u;

    // 0x443658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x443658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44365c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x443660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x443660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x443664: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x443664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x443668: 0xc110d7c  jal         func_4435F0
    ctx->pc = 0x443668u;
    SET_GPR_U32(ctx, 31, 0x443670u);
    ctx->pc = 0x44366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443668u;
    // 0x44366c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4435F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4435F0u, 0x443668u, 0x443670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443670u;
label_443670:
    // 0x443670: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x443670u;
    {
        const bool branch_taken_0x443670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443670u;
        // 0x443674: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443670) {
            ctx->pc = 0x4436ECu;
            goto label_4436ec;
        }
    }
    ctx->pc = 0x443678u;
    // 0x443678: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x443678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44367c: 0x245096d8  addiu       $s0, $v0, -0x6928
    ctx->pc = 0x44367cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940376));
    // 0x443680: 0x8c4496d8  lw          $a0, -0x6928($v0)
    ctx->pc = 0x443680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940376)));
    // 0x443684: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x443684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x443688: 0xc110d62  jal         func_443588
    ctx->pc = 0x443688u;
    SET_GPR_U32(ctx, 31, 0x443690u);
    ctx->pc = 0x44368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443688u;
    // 0x44368c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443588u, 0x443688u, 0x443690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443690u;
label_443690:
    // 0x443690: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x443690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x443694: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x443694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x443698: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x443698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x44369c: 0x24a58f30  addiu       $a1, $a1, -0x70D0
    ctx->pc = 0x44369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938416));
    // 0x4436a0: 0xc110d66  jal         func_443598
    ctx->pc = 0x4436A0u;
    SET_GPR_U32(ctx, 31, 0x4436A8u);
    ctx->pc = 0x4436A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436A0u;
    // 0x4436a4: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x443598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443598u, 0x4436A0u, 0x4436A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436A8u;
label_4436a8:
    // 0x4436a8: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x4436A8u;
    SET_GPR_U32(ctx, 31, 0x4436B0u);
    ctx->pc = 0x4436ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436A8u;
    // 0x4436ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x4436A8u, 0x4436B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436B0u;
label_4436b0:
    // 0x4436b0: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x4436B0u;
    SET_GPR_U32(ctx, 31, 0x4436B8u);
    ctx->pc = 0x4436B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436B0u;
    // 0x4436b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x4436B0u, 0x4436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436B8u;
label_4436b8:
    // 0x4436b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4436b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4436bc: 0xc110d62  jal         func_443588
    ctx->pc = 0x4436BCu;
    SET_GPR_U32(ctx, 31, 0x4436C4u);
    ctx->pc = 0x4436C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436BCu;
    // 0x4436c0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443588u, 0x4436BCu, 0x4436C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436C4u;
label_4436c4:
    // 0x4436c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4436c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4436c8:
    // 0x4436c8: 0xc110d78  jal         func_4435E0
    ctx->pc = 0x4436C8u;
    SET_GPR_U32(ctx, 31, 0x4436D0u);
    ctx->pc = 0x4436CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436C8u;
    // 0x4436cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4435E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4435E0u, 0x4436C8u, 0x4436D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436D0u;
label_4436d0:
    // 0x4436d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4436d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4436d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4436d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4436d8: 0xc110d62  jal         func_443588
    ctx->pc = 0x4436D8u;
    SET_GPR_U32(ctx, 31, 0x4436E0u);
    ctx->pc = 0x4436DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4436D8u;
    // 0x4436dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443588u, 0x4436D8u, 0x4436E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4436E0u;
label_4436e0:
    // 0x4436e0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x4436e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4436e4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4436E4u;
    {
        const bool branch_taken_0x4436e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4436e4) {
            ctx->pc = 0x4436E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4436E4u;
            // 0x4436e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4436C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4436c8;
        }
    }
    ctx->pc = 0x4436ECu;
label_4436ec:
    // 0x4436ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4436ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4436f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4436f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4436f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4436f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4436f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4436f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4436fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4436FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4436FCu;
        // 0x443700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4436FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443704u;
    // 0x443704: 0x0  nop
    ctx->pc = 0x443704u;
    // NOP
label_443708:
    // 0x443708: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x443708u;
    {
        const bool branch_taken_0x443708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x44370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443708u;
        // 0x44370c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443708) {
            ctx->pc = 0x443730u;
            goto label_443730;
        }
    }
    ctx->pc = 0x443710u;
label_443710:
    // 0x443710: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x443710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x443714: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x443714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x443718: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x443718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x44371c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x44371cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x443720: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x443720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x443724: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x443724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x443728: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x443728u;
    {
        const bool branch_taken_0x443728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x443728) {
            ctx->pc = 0x443710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443710;
        }
    }
    ctx->pc = 0x443730u;
label_443730:
    // 0x443730: 0x3e00008  jr          $ra
    ctx->pc = 0x443730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443730u;
        // 0x443734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443738u;
}
