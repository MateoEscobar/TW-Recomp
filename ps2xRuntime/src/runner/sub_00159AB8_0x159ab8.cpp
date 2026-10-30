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

// Function: sub_00159AB8
// Address: 0x159ab8 - 0x159ae0
void sub_00159AB8_0x159ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159AB8_0x159ab8");
#endif

    switch (ctx->pc) {
        case 0x159ad0u: goto label_159ad0;
        default: break;
    }

    ctx->pc = 0x159ab8u;

    // 0x159ab8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x159abc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159ac0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x159ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x159ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159ac8: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x159AC8u;
    SET_GPR_U32(ctx, 31, 0x159AD0u);
    ctx->pc = 0x159ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AC8u;
    // 0x159acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x159AC8u, 0x159AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AD0u;
label_159ad0:
    // 0x159ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x159AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AD4u;
        // 0x159ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159ADCu;
    // 0x159adc: 0x0  nop
    ctx->pc = 0x159adcu;
    // NOP
    ctx->pc = 0x159ae0u;
}
