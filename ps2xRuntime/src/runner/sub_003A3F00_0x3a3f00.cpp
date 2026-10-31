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

// Function: sub_003A3F00
// Address: 0x3a3f00 - 0x3a3f30
void sub_003A3F00_0x3a3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3F00_0x3a3f00");
#endif

    switch (ctx->pc) {
        case 0x3a3f20u: goto label_3a3f20;
        default: break;
    }

    ctx->pc = 0x3a3f00u;

    // 0x3a3f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3f04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3f08: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3F08u;
    {
        const bool branch_taken_0x3a3f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F08u;
        // 0x3a3f0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f08) {
            ctx->pc = 0x3A3F18u;
            goto label_3a3f18;
        }
    }
    ctx->pc = 0x3A3F10u;
    // 0x3a3f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3F10u;
    {
        const bool branch_taken_0x3a3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F10u;
        // 0x3a3f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f10) {
            ctx->pc = 0x3A3F20u;
            goto label_3a3f20;
        }
    }
    ctx->pc = 0x3A3F18u;
label_3a3f18:
    // 0x3a3f18: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x3A3F18u;
    SET_GPR_U32(ctx, 31, 0x3A3F20u);
    ctx->pc = 0x3A3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3F18u;
    // 0x3a3f1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A3F18u, 0x3A3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3F20u;
label_3a3f20:
    // 0x3a3f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3f24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F24u;
        // 0x3a3f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3F2Cu;
    // 0x3a3f2c: 0x0  nop
    ctx->pc = 0x3a3f2cu;
    // NOP
    ctx->pc = 0x3a3f30u;
}
