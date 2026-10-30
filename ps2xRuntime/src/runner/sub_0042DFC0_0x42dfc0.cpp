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

// Function: sub_0042DFC0
// Address: 0x42dfc0 - 0x42e008
void sub_0042DFC0_0x42dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DFC0_0x42dfc0");
#endif

    switch (ctx->pc) {
        case 0x42dfd8u: goto label_42dfd8;
        default: break;
    }

    ctx->pc = 0x42dfc0u;

    // 0x42dfc0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x42dfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42dfc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42dfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42dfc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42dfcc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x42dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x42dfd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42DFD0u;
    {
        const bool branch_taken_0x42dfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DFD0u;
        // 0x42dfd4: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dfd0) {
            ctx->pc = 0x42DFF8u;
            goto label_42dff8;
        }
    }
    ctx->pc = 0x42DFD8u;
label_42dfd8:
    // 0x42dfd8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x42dfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42dfdc: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x42dfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x42dfe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42dfe4: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x42dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x42dfe8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x42dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x42dfec: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x42dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x42dff0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42DFF0u;
    {
        const bool branch_taken_0x42dff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DFF0u;
        // 0x42dff4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dff0) {
            ctx->pc = 0x42DFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dfd8;
        }
    }
    ctx->pc = 0x42DFF8u;
label_42dff8:
    // 0x42dff8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x42dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x42dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x42DFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DFFCu;
        // 0x42e000: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E004u;
    // 0x42e004: 0x0  nop
    ctx->pc = 0x42e004u;
    // NOP
    ctx->pc = 0x42e008u;
}
