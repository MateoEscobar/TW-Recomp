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

// Function: sub_004716E0
// Address: 0x4716e0 - 0x4717e0
void sub_004716E0_0x4716e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004716E0_0x4716e0");
#endif

    switch (ctx->pc) {
        case 0x471728u: goto label_471728;
        case 0x471740u: goto label_471740;
        case 0x471748u: goto label_471748;
        case 0x471760u: goto label_471760;
        case 0x471768u: goto label_471768;
        case 0x471780u: goto label_471780;
        case 0x471794u: goto label_471794;
        case 0x4717acu: goto label_4717ac;
        case 0x4717c0u: goto label_4717c0;
        default: break;
    }

    ctx->pc = 0x4716e0u;

label_4716e0:
    // 0x4716e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4716e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4716e4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4716e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4716e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4716e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4716ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4716ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4716f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4716f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4716f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4716f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4716f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4716f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4716fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4716fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x471700: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x471700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x471704: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x471704u;
    {
        const bool branch_taken_0x471704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x471708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471704u;
        // 0x471708: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471704) {
            ctx->pc = 0x4717C0u;
            goto label_4717c0;
        }
    }
    ctx->pc = 0x47170Cu;
    // 0x47170c: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x47170Cu;
    {
        const bool branch_taken_0x47170c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47170c) {
            ctx->pc = 0x471710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47170Cu;
            // 0x471710: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47179Cu;
            goto label_47179c;
        }
    }
    ctx->pc = 0x471714u;
    // 0x471714: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x471714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x471718: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x471718u;
    {
        const bool branch_taken_0x471718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x471718) {
            ctx->pc = 0x47171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471718u;
            // 0x47171c: 0x8e500038  lw          $s0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47172Cu;
            goto label_47172c;
        }
    }
    ctx->pc = 0x471720u;
    // 0x471720: 0xc11fa54  jal         func_47E950
    ctx->pc = 0x471720u;
    SET_GPR_U32(ctx, 31, 0x471728u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x471720u, 0x471728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471728u;
label_471728:
    // 0x471728: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x471728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_47172c:
    // 0x47172c: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x47172cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x471730: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x471730u;
    {
        const bool branch_taken_0x471730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x471734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471730u;
        // 0x471734: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471730) {
            ctx->pc = 0x471750u;
            goto label_471750;
        }
    }
    ctx->pc = 0x471738u;
    // 0x471738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x471738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47173c: 0x0  nop
    ctx->pc = 0x47173cu;
    // NOP
label_471740:
    // 0x471740: 0xc11cc70  jal         func_4731C0
    ctx->pc = 0x471740u;
    SET_GPR_U32(ctx, 31, 0x471748u);
    ctx->pc = 0x471744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471740u;
    // 0x471744: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4731C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731C0u, 0x471740u, 0x471748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471748u;
label_471748:
    // 0x471748: 0x1611fffd  bne         $s0, $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x471748u;
    {
        const bool branch_taken_0x471748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x47174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471748u;
        // 0x47174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471748) {
            ctx->pc = 0x471740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471740;
        }
    }
    ctx->pc = 0x471750u;
label_471750:
    // 0x471750: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x471750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x471754: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x471754u;
    {
        const bool branch_taken_0x471754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x471758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471754u;
        // 0x471758: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471754) {
            ctx->pc = 0x471774u;
            goto label_471774;
        }
    }
    ctx->pc = 0x47175Cu;
    // 0x47175c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471760:
    // 0x471760: 0xc11cc90  jal         func_473240
    ctx->pc = 0x471760u;
    SET_GPR_U32(ctx, 31, 0x471768u);
    ctx->pc = 0x471764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471760u;
    // 0x471764: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473240u, 0x471760u, 0x471768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471768u;
label_471768:
    // 0x471768: 0x5613fffd  bnel        $s0, $s3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x471768u;
    {
        const bool branch_taken_0x471768 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x471768) {
            ctx->pc = 0x47176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471768u;
            // 0x47176c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471760;
        }
    }
    ctx->pc = 0x471770u;
    // 0x471770: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x471770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_471774:
    // 0x471774: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x471774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471778: 0xc11ffb4  jal         func_47FED0
    ctx->pc = 0x471778u;
    SET_GPR_U32(ctx, 31, 0x471780u);
    ctx->pc = 0x47177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471778u;
    // 0x47177c: 0x2484e750  addiu       $a0, $a0, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x471778u, 0x471780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471780u;
label_471780:
    // 0x471780: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x471780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x471784: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x471784u;
    {
        const bool branch_taken_0x471784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x471788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471784u;
        // 0x471788: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471784) {
            ctx->pc = 0x4717C4u;
            goto label_4717c4;
        }
    }
    ctx->pc = 0x47178Cu;
    // 0x47178c: 0xc11b780  jal         func_46DE00
    ctx->pc = 0x47178Cu;
    SET_GPR_U32(ctx, 31, 0x471794u);
    ctx->pc = 0x46DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE00u, 0x47178Cu, 0x471794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471794u;
label_471794:
    // 0x471794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x471794u;
    {
        const bool branch_taken_0x471794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471794u;
        // 0x471798: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471794) {
            ctx->pc = 0x4717C0u;
            goto label_4717c0;
        }
    }
    ctx->pc = 0x47179Cu;
label_47179c:
    // 0x47179c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x47179Cu;
    {
        const bool branch_taken_0x47179c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47179c) {
            ctx->pc = 0x4717A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47179Cu;
            // 0x4717a0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4717B0u;
            goto label_4717b0;
        }
    }
    ctx->pc = 0x4717A4u;
    // 0x4717a4: 0xc11c5b8  jal         func_4716E0
    ctx->pc = 0x4717A4u;
    SET_GPR_U32(ctx, 31, 0x4717ACu);
    ctx->pc = 0x4716E0u;
    goto label_4716e0;
    ctx->pc = 0x4717ACu;
label_4717ac:
    // 0x4717ac: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4717acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4717b0:
    // 0x4717b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4717B0u;
    {
        const bool branch_taken_0x4717b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4717B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4717B0u;
        // 0x4717b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4717b0) {
            ctx->pc = 0x4717C4u;
            goto label_4717c4;
        }
    }
    ctx->pc = 0x4717B8u;
    // 0x4717b8: 0xc11c5b8  jal         func_4716E0
    ctx->pc = 0x4717B8u;
    SET_GPR_U32(ctx, 31, 0x4717C0u);
    ctx->pc = 0x4716E0u;
    goto label_4716e0;
    ctx->pc = 0x4717C0u;
label_4717c0:
    // 0x4717c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4717c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4717c4:
    // 0x4717c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4717c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4717c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4717c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4717cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4717ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4717d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4717d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4717d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4717D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4717D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4717D4u;
        // 0x4717d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4717D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4717DCu;
    // 0x4717dc: 0x0  nop
    ctx->pc = 0x4717dcu;
    // NOP
    ctx->pc = 0x4717e0u;
}
