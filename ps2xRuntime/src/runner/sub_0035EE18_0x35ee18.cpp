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

// Function: sub_0035EE18
// Address: 0x35ee18 - 0x35ee50
void sub_0035EE18_0x35ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE18_0x35ee18");
#endif

    switch (ctx->pc) {
        case 0x35ee2cu: goto label_35ee2c;
        case 0x35ee34u: goto label_35ee34;
        case 0x35ee3cu: goto label_35ee3c;
        default: break;
    }

    ctx->pc = 0x35ee18u;

    // 0x35ee18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ee1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ee20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ee24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EE24u;
    SET_GPR_U32(ctx, 31, 0x35EE2Cu);
    ctx->pc = 0x35EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE24u;
    // 0x35ee28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EE24u, 0x35EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE2Cu;
label_35ee2c:
    // 0x35ee2c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EE2Cu;
    SET_GPR_U32(ctx, 31, 0x35EE34u);
    ctx->pc = 0x35EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE2Cu;
    // 0x35ee30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EE2Cu, 0x35EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE34u;
label_35ee34:
    // 0x35ee34: 0xc0a4964  jal         func_292590
    ctx->pc = 0x35EE34u;
    SET_GPR_U32(ctx, 31, 0x35EE3Cu);
    ctx->pc = 0x35EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE34u;
    // 0x35ee38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292590u, 0x35EE34u, 0x35EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE3Cu;
label_35ee3c:
    // 0x35ee3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ee40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE44u;
        // 0x35ee48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE4Cu;
    // 0x35ee4c: 0x0  nop
    ctx->pc = 0x35ee4cu;
    // NOP
    ctx->pc = 0x35ee50u;
}
