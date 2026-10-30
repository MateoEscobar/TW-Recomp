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

// Function: sub_004EB728
// Address: 0x4eb728 - 0x4eb778
void sub_004EB728_0x4eb728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB728_0x4eb728");
#endif

    switch (ctx->pc) {
        case 0x4eb748u: goto label_4eb748;
        default: break;
    }

    ctx->pc = 0x4eb728u;

    // 0x4eb728: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4eb728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb72c: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x4eb72cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4eb730: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x4eb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x4eb734: 0x90440018  lbu         $a0, 0x18($v0)
    ctx->pc = 0x4eb734u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4eb738: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4eb738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4eb73c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4EB73Cu;
    {
        const bool branch_taken_0x4eb73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB73Cu;
        // 0x4eb740: 0x24c7fffc  addiu       $a3, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb73c) {
            ctx->pc = 0x4EB76Cu;
            goto label_4eb76c;
        }
    }
    ctx->pc = 0x4EB744u;
    // 0x4eb744: 0x0  nop
    ctx->pc = 0x4eb744u;
    // NOP
label_4eb748:
    // 0x4eb748: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4eb748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eb74c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4eb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4eb750: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4eb750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb754: 0x8cc4fffc  lw          $a0, -0x4($a2)
    ctx->pc = 0x4eb754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x4eb758: 0x90a20018  lbu         $v0, 0x18($a1)
    ctx->pc = 0x4eb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4eb75c: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x4eb75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb760: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4eb760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4eb764: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4EB764u;
    {
        const bool branch_taken_0x4eb764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB764u;
        // 0x4eb768: 0x24c7fffc  addiu       $a3, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb764) {
            ctx->pc = 0x4EB748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb748;
        }
    }
    ctx->pc = 0x4EB76Cu;
label_4eb76c:
    // 0x4eb76c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB76Cu;
        // 0x4eb770: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB774u;
    // 0x4eb774: 0x0  nop
    ctx->pc = 0x4eb774u;
    // NOP
    ctx->pc = 0x4eb778u;
}
