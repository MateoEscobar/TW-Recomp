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

// Function: sub_00196CD0
// Address: 0x196cd0 - 0x196cf8
void sub_00196CD0_0x196cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196CD0_0x196cd0");
#endif

    ctx->pc = 0x196cd0u;

    // 0x196cd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x196cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x196cd4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196CD4u;
    {
        const bool branch_taken_0x196cd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x196cd4) {
            ctx->pc = 0x196CF0u;
            goto label_196cf0;
        }
    }
    ctx->pc = 0x196CDCu;
    // 0x196cdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196CDCu;
    {
        const bool branch_taken_0x196cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CDCu;
        // 0x196ce0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cdc) {
            ctx->pc = 0x196CF0u;
            goto label_196cf0;
        }
    }
    ctx->pc = 0x196CE4u;
    // 0x196ce4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x196ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x196ce8: 0x24428f08  addiu       $v0, $v0, -0x70F8
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938376));
    // 0x196cec: 0xac62f770  sw          $v0, -0x890($v1)
    ctx->pc = 0x196cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FF770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FF770u, _value); } while (0);
label_196cf0:
    // 0x196cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x196CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196CF8u;
}
