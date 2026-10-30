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

// Function: sub_00291178
// Address: 0x291178 - 0x2911a8
void sub_00291178_0x291178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291178_0x291178");
#endif

    switch (ctx->pc) {
        case 0x291180u: goto label_291180;
        default: break;
    }

    ctx->pc = 0x291178u;

    // 0x291178: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x291178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x29117c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29117cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291180:
    // 0x291180: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291184: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x291184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291188: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x291188u;
    {
        const bool branch_taken_0x291188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x29118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291188u;
        // 0x29118c: 0x2cc30004  sltiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291188) {
            ctx->pc = 0x291194u;
            goto label_291194;
        }
    }
    ctx->pc = 0x291190u;
    // 0x291190: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x291190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_291194:
    // 0x291194: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x291194u;
    {
        const bool branch_taken_0x291194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291194u;
        // 0x291198: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291194) {
            ctx->pc = 0x291180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291180;
        }
    }
    ctx->pc = 0x29119Cu;
    // 0x29119c: 0x3e00008  jr          $ra
    ctx->pc = 0x29119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911A4u;
    // 0x2911a4: 0x0  nop
    ctx->pc = 0x2911a4u;
    // NOP
    ctx->pc = 0x2911a8u;
}
