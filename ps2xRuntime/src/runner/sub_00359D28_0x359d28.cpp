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

// Function: sub_00359D28
// Address: 0x359d28 - 0x359d58
void sub_00359D28_0x359d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359D28_0x359d28");
#endif

    switch (ctx->pc) {
        case 0x359d3cu: goto label_359d3c;
        case 0x359d44u: goto label_359d44;
        default: break;
    }

    ctx->pc = 0x359d28u;

    // 0x359d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359d34: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359D34u;
    SET_GPR_U32(ctx, 31, 0x359D3Cu);
    ctx->pc = 0x359D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D34u;
    // 0x359d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359D34u, 0x359D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D3Cu;
label_359d3c:
    // 0x359d3c: 0xc08d7c4  jal         func_235F10
    ctx->pc = 0x359D3Cu;
    SET_GPR_U32(ctx, 31, 0x359D44u);
    ctx->pc = 0x359D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D3Cu;
    // 0x359d40: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235F10u, 0x359D3Cu, 0x359D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D44u;
label_359d44:
    // 0x359d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x359D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D4Cu;
        // 0x359d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D54u;
    // 0x359d54: 0x0  nop
    ctx->pc = 0x359d54u;
    // NOP
    ctx->pc = 0x359d58u;
}
