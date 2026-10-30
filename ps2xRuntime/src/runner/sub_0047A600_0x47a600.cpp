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

// Function: sub_0047A600
// Address: 0x47a600 - 0x47a658
void sub_0047A600_0x47a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A600_0x47a600");
#endif

    switch (ctx->pc) {
        case 0x47a60cu: goto label_47a60c;
        default: break;
    }

    ctx->pc = 0x47a600u;

    // 0x47a600: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x47a600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a604: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47A604u;
    {
        const bool branch_taken_0x47a604 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a604) {
            ctx->pc = 0x47A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A604u;
            // 0x47a608: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A614u;
            goto label_47a614;
        }
    }
    ctx->pc = 0x47A60Cu;
label_47a60c:
    // 0x47a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x47A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A60Cu;
        // 0x47a610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A614u;
label_47a614:
    // 0x47a614: 0x1060fffd  beqz        $v1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x47A614u;
    {
        const bool branch_taken_0x47a614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a614) {
            ctx->pc = 0x47A60Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a60c;
        }
    }
    ctx->pc = 0x47A61Cu;
    // 0x47a61c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A61Cu;
    {
        const bool branch_taken_0x47a61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A61Cu;
        // 0x47a620: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a61c) {
            ctx->pc = 0x47A63Cu;
            goto label_47a63c;
        }
    }
    ctx->pc = 0x47A624u;
    // 0x47a624: 0x10c0fff9  beqz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x47A624u;
    {
        const bool branch_taken_0x47a624 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a624) {
            ctx->pc = 0x47A60Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a60c;
        }
    }
    ctx->pc = 0x47A62Cu;
    // 0x47a62c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x47a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x47a630: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x47a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x47a634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47A634u;
    {
        const bool branch_taken_0x47a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A634u;
        // 0x47a638: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a634) {
            ctx->pc = 0x47A650u;
            goto label_47a650;
        }
    }
    ctx->pc = 0x47A63Cu;
label_47a63c:
    // 0x47a63c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x47a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x47a640: 0x2442f680  addiu       $v0, $v0, -0x980
    ctx->pc = 0x47a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964864));
    // 0x47a644: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x47a644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x47a648: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x47a648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x47a64c: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x47a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_47a650:
    // 0x47a650: 0x3e00008  jr          $ra
    ctx->pc = 0x47A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A650u;
        // 0x47a654: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A658u;
}
