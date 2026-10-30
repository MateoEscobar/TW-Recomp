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

// Function: sub_00465A78
// Address: 0x465a78 - 0x465ae8
void sub_00465A78_0x465a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465A78_0x465a78");
#endif

    switch (ctx->pc) {
        case 0x465a90u: goto label_465a90;
        default: break;
    }

    ctx->pc = 0x465a78u;

    // 0x465a78: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465a7c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x465a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x465a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x465a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465a84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x465a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465a88: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x465a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465a8c: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x465a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_465a90:
    // 0x465a90: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x465a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x465a94: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x465a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465a98: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465A98u;
    {
        const bool branch_taken_0x465a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x465a98) {
            ctx->pc = 0x465A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465A98u;
            // 0x465a9c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465AA8u;
            goto label_465aa8;
        }
    }
    ctx->pc = 0x465AA0u;
    // 0x465aa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465AA0u;
    {
        const bool branch_taken_0x465aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465AA0u;
        // 0x465aa4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465aa0) {
            ctx->pc = 0x465ABCu;
            goto label_465abc;
        }
    }
    ctx->pc = 0x465AA8u;
label_465aa8:
    // 0x465aa8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x465aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465aac: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x465aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465ab0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465AB0u;
    {
        const bool branch_taken_0x465ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465AB0u;
        // 0x465ab4: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ab0) {
            ctx->pc = 0x465A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465a90;
        }
    }
    ctx->pc = 0x465AB8u;
    // 0x465ab8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x465ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465abc:
    // 0x465abc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465ABCu;
    {
        const bool branch_taken_0x465abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x465abc) {
            ctx->pc = 0x465ACCu;
            goto label_465acc;
        }
    }
    ctx->pc = 0x465AC4u;
    // 0x465ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x465ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465ac8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x465ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_465acc:
    // 0x465acc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x465ACCu;
    {
        const bool branch_taken_0x465acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x465acc) {
            ctx->pc = 0x465ADCu;
            goto label_465adc;
        }
    }
    ctx->pc = 0x465AD4u;
    // 0x465ad4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x465ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x465ad8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x465ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_465adc:
    // 0x465adc: 0x3e00008  jr          $ra
    ctx->pc = 0x465ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465ADCu;
        // 0x465ae0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465AE4u;
    // 0x465ae4: 0x0  nop
    ctx->pc = 0x465ae4u;
    // NOP
    ctx->pc = 0x465ae8u;
}
