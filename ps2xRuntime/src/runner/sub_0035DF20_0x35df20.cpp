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

// Function: sub_0035DF20
// Address: 0x35df20 - 0x35df50
void sub_0035DF20_0x35df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DF20_0x35df20");
#endif

    switch (ctx->pc) {
        case 0x35df34u: goto label_35df34;
        case 0x35df3cu: goto label_35df3c;
        default: break;
    }

    ctx->pc = 0x35df20u;

    // 0x35df20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35df24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35df28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35df2c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35DF2Cu;
    SET_GPR_U32(ctx, 31, 0x35DF34u);
    ctx->pc = 0x35DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF2Cu;
    // 0x35df30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35DF2Cu, 0x35DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF34u;
label_35df34:
    // 0x35df34: 0xc08e966  jal         func_23A598
    ctx->pc = 0x35DF34u;
    SET_GPR_U32(ctx, 31, 0x35DF3Cu);
    ctx->pc = 0x35DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF34u;
    // 0x35df38: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A598u, 0x35DF34u, 0x35DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF3Cu;
label_35df3c:
    // 0x35df3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35df3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35df40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35df40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df44: 0x3e00008  jr          $ra
    ctx->pc = 0x35DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF44u;
        // 0x35df48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DF4Cu;
    // 0x35df4c: 0x0  nop
    ctx->pc = 0x35df4cu;
    // NOP
    ctx->pc = 0x35df50u;
}
