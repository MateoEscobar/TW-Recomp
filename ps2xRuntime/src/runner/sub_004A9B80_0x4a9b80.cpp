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

// Function: sub_004A9B80
// Address: 0x4a9b80 - 0x4a9bb8
void sub_004A9B80_0x4a9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B80_0x4a9b80");
#endif

    switch (ctx->pc) {
        case 0x4a9b90u: goto label_4a9b90;
        default: break;
    }

    ctx->pc = 0x4a9b80u;

    // 0x4a9b80: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4a9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4a9b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a9b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b88: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x4a9b88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x4a9b8c: 0x0  nop
    ctx->pc = 0x4a9b8cu;
    // NOP
label_4a9b90:
    // 0x4a9b90: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4a9b90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9b94: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9B94u;
    {
        const bool branch_taken_0x4a9b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4a9b94) {
            ctx->pc = 0x4A9BA4u;
            goto label_4a9ba4;
        }
    }
    ctx->pc = 0x4A9B9Cu;
    // 0x4a9b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B9Cu;
        // 0x4a9ba0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BA4u;
label_4a9ba4:
    // 0x4a9ba4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A9BA4u;
    {
        const bool branch_taken_0x4a9ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BA4u;
        // 0x4a9ba8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ba4) {
            ctx->pc = 0x4A9B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9b90;
        }
    }
    ctx->pc = 0x4A9BACu;
    // 0x4a9bac: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BB4u;
    // 0x4a9bb4: 0x0  nop
    ctx->pc = 0x4a9bb4u;
    // NOP
    ctx->pc = 0x4a9bb8u;
}
