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

// Function: sub_004142A0
// Address: 0x4142a0 - 0x4142d0
void sub_004142A0_0x4142a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004142A0_0x4142a0");
#endif

    switch (ctx->pc) {
        case 0x4142b0u: goto label_4142b0;
        default: break;
    }

    ctx->pc = 0x4142a0u;

    // 0x4142a0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x4142a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x4142a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4142a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4142a8: 0x2443d6e0  addiu       $v1, $v0, -0x2920
    ctx->pc = 0x4142a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x4142ac: 0x0  nop
    ctx->pc = 0x4142acu;
    // NOP
label_4142b0:
    // 0x4142b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4142b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4142b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4142b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4142b8: 0x2c820064  sltiu       $v0, $a0, 0x64
    ctx->pc = 0x4142b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x4142bc: 0x0  nop
    ctx->pc = 0x4142bcu;
    // NOP
    // 0x4142c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4142C0u;
    {
        const bool branch_taken_0x4142c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4142C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4142C0u;
        // 0x4142c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4142c0) {
            ctx->pc = 0x4142B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4142b0;
        }
    }
    ctx->pc = 0x4142C8u;
    // 0x4142c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4142C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4142C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4142D0u;
}
