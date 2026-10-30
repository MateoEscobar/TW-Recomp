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

// Function: sub_0036DB30
// Address: 0x36db30 - 0x36db68
void sub_0036DB30_0x36db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DB30_0x36db30");
#endif

    switch (ctx->pc) {
        case 0x36db44u: goto label_36db44;
        case 0x36db4cu: goto label_36db4c;
        case 0x36db54u: goto label_36db54;
        default: break;
    }

    ctx->pc = 0x36db30u;

    // 0x36db30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36db34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36db38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36db3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DB3Cu;
    SET_GPR_U32(ctx, 31, 0x36DB44u);
    ctx->pc = 0x36DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB3Cu;
    // 0x36db40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DB3Cu, 0x36DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB44u;
label_36db44:
    // 0x36db44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DB44u;
    SET_GPR_U32(ctx, 31, 0x36DB4Cu);
    ctx->pc = 0x36DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB44u;
    // 0x36db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DB44u, 0x36DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB4Cu;
label_36db4c:
    // 0x36db4c: 0xc0e8998  jal         func_3A2660
    ctx->pc = 0x36DB4Cu;
    SET_GPR_U32(ctx, 31, 0x36DB54u);
    ctx->pc = 0x36DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB4Cu;
    // 0x36db50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2660u, 0x36DB4Cu, 0x36DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB54u;
label_36db54:
    // 0x36db54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36db58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36db58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db5c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB5Cu;
        // 0x36db60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB64u;
    // 0x36db64: 0x0  nop
    ctx->pc = 0x36db64u;
    // NOP
    ctx->pc = 0x36db68u;
}
