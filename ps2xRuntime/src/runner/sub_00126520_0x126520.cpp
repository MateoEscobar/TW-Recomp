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

// Function: sub_00126520
// Address: 0x126520 - 0x126558
void sub_00126520_0x126520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126520_0x126520");
#endif

    switch (ctx->pc) {
        case 0x126530u: goto label_126530;
        default: break;
    }

    ctx->pc = 0x126520u;

    // 0x126520: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x126520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x126524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x126524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126528: 0x24435280  addiu       $v1, $v0, 0x5280
    ctx->pc = 0x126528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x12652c: 0x0  nop
    ctx->pc = 0x12652cu;
    // NOP
label_126530:
    // 0x126530: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x126530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x126534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x126534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x126538: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x126538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12653c: 0x0  nop
    ctx->pc = 0x12653cu;
    // NOP
    // 0x126540: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x126540u;
    {
        const bool branch_taken_0x126540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126540u;
        // 0x126544: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126540) {
            ctx->pc = 0x126530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126530;
        }
    }
    ctx->pc = 0x126548u;
    // 0x126548: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12654c: 0x3e00008  jr          $ra
    ctx->pc = 0x12654Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12654Cu;
        // 0x126550: 0xac40b238  sw          $zero, -0x4DC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12654Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126554u;
    // 0x126554: 0x0  nop
    ctx->pc = 0x126554u;
    // NOP
    ctx->pc = 0x126558u;
}
