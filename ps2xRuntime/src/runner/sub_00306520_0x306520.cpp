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

// Function: sub_00306520
// Address: 0x306520 - 0x306558
void sub_00306520_0x306520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306520_0x306520");
#endif

    switch (ctx->pc) {
        case 0x306538u: goto label_306538;
        default: break;
    }

    ctx->pc = 0x306520u;

    // 0x306520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x306520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x306524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x306524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x306528: 0xac40a1a0  sw          $zero, -0x5E60($v0)
    ctx->pc = 0x306528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EA1A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EA1A0u, _value); } while (0);
    // 0x30652c: 0x2463b290  addiu       $v1, $v1, -0x4D70
    ctx->pc = 0x30652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947472));
    // 0x306530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306534: 0x0  nop
    ctx->pc = 0x306534u;
    // NOP
label_306538:
    // 0x306538: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x306538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x30653c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306540: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x306540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x306544: 0x0  nop
    ctx->pc = 0x306544u;
    // NOP
    // 0x306548: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x306548u;
    {
        const bool branch_taken_0x306548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306548u;
        // 0x30654c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306548) {
            ctx->pc = 0x306538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306538;
        }
    }
    ctx->pc = 0x306550u;
    // 0x306550: 0x3e00008  jr          $ra
    ctx->pc = 0x306550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306558u;
}
