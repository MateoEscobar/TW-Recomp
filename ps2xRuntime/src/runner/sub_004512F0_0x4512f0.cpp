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

// Function: sub_004512F0
// Address: 0x4512f0 - 0x4513a0
void sub_004512F0_0x4512f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004512F0_0x4512f0");
#endif

    switch (ctx->pc) {
        case 0x451348u: goto label_451348;
        default: break;
    }

    ctx->pc = 0x4512f0u;

    // 0x4512f0: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x4512f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x4512f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4512f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4512f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4512f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4512fc: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x4512fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x451300: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x451300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x451304: 0x8ca200d8  lw          $v0, 0xD8($a1)
    ctx->pc = 0x451304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x451308: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x451308u;
    {
        const bool branch_taken_0x451308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451308) {
            ctx->pc = 0x45138Cu;
            goto label_45138c;
        }
    }
    ctx->pc = 0x451310u;
    // 0x451310: 0x8ca400e4  lw          $a0, 0xE4($a1)
    ctx->pc = 0x451310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x451314: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x451314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x451318: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x451318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x45131c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45131Cu;
    {
        const bool branch_taken_0x45131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45131Cu;
        // 0x451320: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45131c) {
            ctx->pc = 0x45132Cu;
            goto label_45132c;
        }
    }
    ctx->pc = 0x451324u;
    // 0x451324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x451324u;
    {
        const bool branch_taken_0x451324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451324u;
        // 0x451328: 0xaca200e4  sw          $v0, 0xE4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451324) {
            ctx->pc = 0x451330u;
            goto label_451330;
        }
    }
    ctx->pc = 0x45132Cu;
label_45132c:
    // 0x45132c: 0xaca000e4  sw          $zero, 0xE4($a1)
    ctx->pc = 0x45132cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 0));
label_451330:
    // 0x451330: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x451330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x451334: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x451334u;
    {
        const bool branch_taken_0x451334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451334u;
        // 0x451338: 0x24670004  addiu       $a3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451334) {
            ctx->pc = 0x451374u;
            goto label_451374;
        }
    }
    ctx->pc = 0x45133Cu;
    // 0x45133c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451340: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x451340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x451344: 0x24a80140  addiu       $t0, $a1, 0x140
    ctx->pc = 0x451344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_451348:
    // 0x451348: 0x8ca200e4  lw          $v0, 0xE4($a1)
    ctx->pc = 0x451348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x45134c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x45134cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x451350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x451350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x451354: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x451354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x451358: 0x2cc40009  sltiu       $a0, $a2, 0x9
    ctx->pc = 0x451358u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x45135c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x45135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x451360: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x451360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x451364: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x451364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x451368: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x451368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x45136c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x45136Cu;
    {
        const bool branch_taken_0x45136c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x451370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45136Cu;
        // 0x451370: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45136c) {
            ctx->pc = 0x451348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451348;
        }
    }
    ctx->pc = 0x451374u;
label_451374:
    // 0x451374: 0x8ca300e4  lw          $v1, 0xE4($a1)
    ctx->pc = 0x451374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x451378: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x451378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45137c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x45137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x451380: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x451380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x451384: 0x3e00008  jr          $ra
    ctx->pc = 0x451384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451384u;
        // 0x451388: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45138Cu;
label_45138c:
    // 0x45138c: 0x3e00008  jr          $ra
    ctx->pc = 0x45138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45138Cu;
        // 0x451390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45138Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451394u;
    // 0x451394: 0x0  nop
    ctx->pc = 0x451394u;
    // NOP
    // 0x451398: 0x0  nop
    ctx->pc = 0x451398u;
    // NOP
    // 0x45139c: 0x0  nop
    ctx->pc = 0x45139cu;
    // NOP
    ctx->pc = 0x4513a0u;
}
