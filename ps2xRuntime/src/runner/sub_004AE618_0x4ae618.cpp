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

// Function: sub_004AE618
// Address: 0x4ae618 - 0x4ae6b8
void sub_004AE618_0x4ae618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE618_0x4ae618");
#endif

    switch (ctx->pc) {
        case 0x4ae66cu: goto label_4ae66c;
        case 0x4ae684u: goto label_4ae684;
        default: break;
    }

    ctx->pc = 0x4ae618u;

    // 0x4ae618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ae624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae62c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ae62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ae630: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE630u;
    {
        const bool branch_taken_0x4ae630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE630u;
        // 0x4ae634: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae630) {
            ctx->pc = 0x4AE644u;
            goto label_4ae644;
        }
    }
    ctx->pc = 0x4AE638u;
    // 0x4ae638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae63c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AE63Cu;
    {
        const bool branch_taken_0x4ae63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE63Cu;
        // 0x4ae640: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae63c) {
            ctx->pc = 0x4AE670u;
            goto label_4ae670;
        }
    }
    ctx->pc = 0x4AE644u;
label_4ae644:
    // 0x4ae644: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4ae644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ae648: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE648u;
    {
        const bool branch_taken_0x4ae648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE648u;
        // 0x4ae64c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae648) {
            ctx->pc = 0x4AE670u;
            goto label_4ae670;
        }
    }
    ctx->pc = 0x4AE650u;
    // 0x4ae650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ae650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ae654: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ae654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ae658: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4ae658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ae65c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE65Cu;
    {
        const bool branch_taken_0x4ae65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE65Cu;
        // 0x4ae660: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae65c) {
            ctx->pc = 0x4AE670u;
            goto label_4ae670;
        }
    }
    ctx->pc = 0x4AE664u;
    // 0x4ae664: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AE664u;
    SET_GPR_U32(ctx, 31, 0x4AE66Cu);
    ctx->pc = 0x4AE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE664u;
    // 0x4ae668: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AE664u, 0x4AE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE66Cu;
label_4ae66c:
    // 0x4ae66c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ae66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ae670:
    // 0x4ae670: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AE670u;
    {
        const bool branch_taken_0x4ae670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE670u;
        // 0x4ae674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae670) {
            ctx->pc = 0x4AE6A8u;
            goto label_4ae6a8;
        }
    }
    ctx->pc = 0x4AE678u;
    // 0x4ae678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ae678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae67c: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AE67Cu;
    SET_GPR_U32(ctx, 31, 0x4AE684u);
    ctx->pc = 0x4AE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE67Cu;
    // 0x4ae680: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AE67Cu, 0x4AE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE684u;
label_4ae684:
    // 0x4ae684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ae684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ae688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ae68c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AE68Cu;
    {
        const bool branch_taken_0x4ae68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE68Cu;
        // 0x4ae690: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae68c) {
            ctx->pc = 0x4AE6A8u;
            goto label_4ae6a8;
        }
    }
    ctx->pc = 0x4AE694u;
    // 0x4ae694: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae698: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ae698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ae69c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ae69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ae6a0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ae6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ae6a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ae6a8:
    // 0x4ae6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6B0u;
        // 0x4ae6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE6B8u;
}
