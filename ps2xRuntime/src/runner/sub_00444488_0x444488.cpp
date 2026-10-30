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

// Function: sub_00444488
// Address: 0x444488 - 0x4444d8
void sub_00444488_0x444488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444488_0x444488");
#endif

    switch (ctx->pc) {
        case 0x4444a8u: goto label_4444a8;
        default: break;
    }

    ctx->pc = 0x444488u;

    // 0x444488: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x444488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x44448c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x44448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x444490: 0x24a25b80  addiu       $v0, $a1, 0x5B80
    ctx->pc = 0x444490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
    // 0x444494: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x444494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x444498: 0xac625f80  sw          $v0, 0x5F80($v1)
    ctx->pc = 0x444498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x705F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x705F80u, _value); } while (0);
    // 0x44449c: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x44449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4444a0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x4444a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x4444a4: 0x0  nop
    ctx->pc = 0x4444a4u;
    // NOP
label_4444a8:
    // 0x4444a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4444a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4444ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4444acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4444b0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4444b4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x4444b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x4444b8: 0x0  nop
    ctx->pc = 0x4444b8u;
    // NOP
    // 0x4444bc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4444BCu;
    {
        const bool branch_taken_0x4444bc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4444bc) {
            ctx->pc = 0x4444A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4444a8;
        }
    }
    ctx->pc = 0x4444C4u;
    // 0x4444c4: 0x24a35b80  addiu       $v1, $a1, 0x5B80
    ctx->pc = 0x4444c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
    // 0x4444c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4444c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4444cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4444CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444CCu;
        // 0x4444d0: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4444CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4444D4u;
    // 0x4444d4: 0x0  nop
    ctx->pc = 0x4444d4u;
    // NOP
    ctx->pc = 0x4444d8u;
}
