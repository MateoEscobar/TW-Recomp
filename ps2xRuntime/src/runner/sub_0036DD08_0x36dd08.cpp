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

// Function: sub_0036DD08
// Address: 0x36dd08 - 0x36dd40
void sub_0036DD08_0x36dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DD08_0x36dd08");
#endif

    switch (ctx->pc) {
        case 0x36dd1cu: goto label_36dd1c;
        case 0x36dd24u: goto label_36dd24;
        case 0x36dd2cu: goto label_36dd2c;
        default: break;
    }

    ctx->pc = 0x36dd08u;

    // 0x36dd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dd0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dd14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DD14u;
    SET_GPR_U32(ctx, 31, 0x36DD1Cu);
    ctx->pc = 0x36DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD14u;
    // 0x36dd18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DD14u, 0x36DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD1Cu;
label_36dd1c:
    // 0x36dd1c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DD1Cu;
    SET_GPR_U32(ctx, 31, 0x36DD24u);
    ctx->pc = 0x36DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD1Cu;
    // 0x36dd20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DD1Cu, 0x36DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD24u;
label_36dd24:
    // 0x36dd24: 0xc0e5e66  jal         func_397998
    ctx->pc = 0x36DD24u;
    SET_GPR_U32(ctx, 31, 0x36DD2Cu);
    ctx->pc = 0x36DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD24u;
    // 0x36dd28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397998u, 0x36DD24u, 0x36DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD2Cu;
label_36dd2c:
    // 0x36dd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dd30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd34: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD34u;
        // 0x36dd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD3Cu;
    // 0x36dd3c: 0x0  nop
    ctx->pc = 0x36dd3cu;
    // NOP
    ctx->pc = 0x36dd40u;
}
