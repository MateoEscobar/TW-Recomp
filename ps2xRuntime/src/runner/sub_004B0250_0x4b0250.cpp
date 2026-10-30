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

// Function: sub_004B0250
// Address: 0x4b0250 - 0x4b0278
void sub_004B0250_0x4b0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0250_0x4b0250");
#endif

    ctx->pc = 0x4b0250u;

    // 0x4b0250: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0250u;
    {
        const bool branch_taken_0x4b0250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0250u;
        // 0x4b0254: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0250) {
            ctx->pc = 0x4B0264u;
            goto label_4b0264;
        }
    }
    ctx->pc = 0x4B0258u;
    // 0x4b0258: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b0258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4b025c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B025Cu;
        // 0x4b0260: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0264u;
label_4b0264:
    // 0x4b0264: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4b0264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4b0268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b026c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B026Cu;
        // 0x4b0270: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0274u;
    // 0x4b0274: 0x0  nop
    ctx->pc = 0x4b0274u;
    // NOP
    ctx->pc = 0x4b0278u;
}
