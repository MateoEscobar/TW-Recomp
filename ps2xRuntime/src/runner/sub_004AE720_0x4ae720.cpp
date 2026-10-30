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

// Function: sub_004AE720
// Address: 0x4ae720 - 0x4ae858
void sub_004AE720_0x4ae720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE720_0x4ae720");
#endif

    switch (ctx->pc) {
        case 0x4ae760u: goto label_4ae760;
        case 0x4ae784u: goto label_4ae784;
        case 0x4ae80cu: goto label_4ae80c;
        case 0x4ae838u: goto label_4ae838;
        default: break;
    }

    ctx->pc = 0x4ae720u;

    // 0x4ae720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ae72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae730: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ae730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae734: 0x90a3001a  lbu         $v1, 0x1A($a1)
    ctx->pc = 0x4ae734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x4ae738: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE738u;
    {
        const bool branch_taken_0x4ae738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE738u;
        // 0x4ae73c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae738) {
            ctx->pc = 0x4AE74Cu;
            goto label_4ae74c;
        }
    }
    ctx->pc = 0x4AE740u;
    // 0x4ae740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae744: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4AE744u;
    {
        const bool branch_taken_0x4ae744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE744u;
        // 0x4ae748: 0xa0a3001a  sb          $v1, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae744) {
            ctx->pc = 0x4AE78Cu;
            goto label_4ae78c;
        }
    }
    ctx->pc = 0x4AE74Cu;
label_4ae74c:
    // 0x4ae74c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4ae74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4ae750: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE750u;
    {
        const bool branch_taken_0x4ae750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae750) {
            ctx->pc = 0x4AE754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE750u;
            // 0x4ae754: 0xdca20010  ld          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE768u;
            goto label_4ae768;
        }
    }
    ctx->pc = 0x4AE758u;
    // 0x4ae758: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AE758u;
    SET_GPR_U32(ctx, 31, 0x4AE760u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AE758u, 0x4AE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE760u;
label_4ae760:
    // 0x4ae760: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ae760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae764: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x4ae764u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_4ae768:
    // 0x4ae768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ae768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ae76c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ae76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ae770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ae770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ae774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE774u;
    {
        const bool branch_taken_0x4ae774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE774u;
        // 0x4ae778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae774) {
            ctx->pc = 0x4AE78Cu;
            goto label_4ae78c;
        }
    }
    ctx->pc = 0x4AE77Cu;
    // 0x4ae77c: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AE77Cu;
    SET_GPR_U32(ctx, 31, 0x4AE784u);
    ctx->pc = 0x4AE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE77Cu;
    // 0x4ae780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AE77Cu, 0x4AE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE784u;
label_4ae784:
    // 0x4ae784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AE784u;
    {
        const bool branch_taken_0x4ae784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE784u;
        // 0x4ae788: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae784) {
            ctx->pc = 0x4AE790u;
            goto label_4ae790;
        }
    }
    ctx->pc = 0x4AE78Cu;
label_4ae78c:
    // 0x4ae78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ae790:
    // 0x4ae790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae794: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE794u;
        // 0x4ae798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE79Cu;
    // 0x4ae79c: 0x0  nop
    ctx->pc = 0x4ae79cu;
    // NOP
    // 0x4ae7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae7a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ae7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ae7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae7b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ae7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ae7b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ae7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae7b8: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4ae7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ae7bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE7BCu;
    {
        const bool branch_taken_0x4ae7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE7BCu;
        // 0x4ae7c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae7bc) {
            ctx->pc = 0x4AE7D4u;
            goto label_4ae7d4;
        }
    }
    ctx->pc = 0x4AE7C4u;
    // 0x4ae7c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4ae7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4ae7c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae7cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4AE7CCu;
    {
        const bool branch_taken_0x4ae7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE7CCu;
        // 0x4ae7d0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae7cc) {
            ctx->pc = 0x4AE840u;
            goto label_4ae840;
        }
    }
    ctx->pc = 0x4AE7D4u;
label_4ae7d4:
    // 0x4ae7d4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4ae7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ae7d8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE7D8u;
    {
        const bool branch_taken_0x4ae7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae7d8) {
            ctx->pc = 0x4AE80Cu;
            goto label_4ae80c;
        }
    }
    ctx->pc = 0x4AE7E0u;
    // 0x4ae7e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AE7E0u;
    {
        const bool branch_taken_0x4ae7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae7e0) {
            ctx->pc = 0x4AE804u;
            goto label_4ae804;
        }
    }
    ctx->pc = 0x4AE7E8u;
    // 0x4ae7e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ae7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ae7ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ae7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ae7f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4ae7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ae7f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4ae7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ae7f8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x4ae7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4ae7fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE7FCu;
    {
        const bool branch_taken_0x4ae7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae7fc) {
            ctx->pc = 0x4AE80Cu;
            goto label_4ae80c;
        }
    }
    ctx->pc = 0x4AE804u;
label_4ae804:
    // 0x4ae804: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AE804u;
    SET_GPR_U32(ctx, 31, 0x4AE80Cu);
    ctx->pc = 0x4AE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE804u;
    // 0x4ae808: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AE804u, 0x4AE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE80Cu;
label_4ae80c:
    // 0x4ae80c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE80Cu;
    {
        const bool branch_taken_0x4ae80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE80Cu;
        // 0x4ae810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae80c) {
            ctx->pc = 0x4AE840u;
            goto label_4ae840;
        }
    }
    ctx->pc = 0x4AE814u;
    // 0x4ae814: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ae814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae818: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ae818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ae81c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ae81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ae820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ae820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ae824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ae824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ae828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE828u;
    {
        const bool branch_taken_0x4ae828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE828u;
        // 0x4ae82c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae828) {
            ctx->pc = 0x4AE840u;
            goto label_4ae840;
        }
    }
    ctx->pc = 0x4AE830u;
    // 0x4ae830: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AE830u;
    SET_GPR_U32(ctx, 31, 0x4AE838u);
    ctx->pc = 0x4AE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE830u;
    // 0x4ae834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AE830u, 0x4AE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE838u;
label_4ae838:
    // 0x4ae838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AE838u;
    {
        const bool branch_taken_0x4ae838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE838u;
        // 0x4ae83c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae838) {
            ctx->pc = 0x4AE844u;
            goto label_4ae844;
        }
    }
    ctx->pc = 0x4AE840u;
label_4ae840:
    // 0x4ae840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ae840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ae844:
    // 0x4ae844: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ae844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae84c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE84Cu;
        // 0x4ae850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE854u;
    // 0x4ae854: 0x0  nop
    ctx->pc = 0x4ae854u;
    // NOP
    ctx->pc = 0x4ae858u;
}
