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

// Function: sub_004836A8
// Address: 0x4836a8 - 0x4836d0
void sub_004836A8_0x4836a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004836A8_0x4836a8");
#endif

    switch (ctx->pc) {
        case 0x4836c0u: goto label_4836c0;
        default: break;
    }

    ctx->pc = 0x4836a8u;

    // 0x4836a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4836a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4836ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4836acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4836b0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4836b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4836b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4836b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4836b8: 0xc11ff82  jal         func_47FE08
    ctx->pc = 0x4836B8u;
    SET_GPR_U32(ctx, 31, 0x4836C0u);
    ctx->pc = 0x4836BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4836B8u;
    // 0x4836bc: 0x2484eaa8  addiu       $a0, $a0, -0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE08u, 0x4836B8u, 0x4836C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836C0u;
label_4836c0:
    // 0x4836c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4836c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4836c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4836C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4836C4u;
        // 0x4836c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4836C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4836CCu;
    // 0x4836cc: 0x0  nop
    ctx->pc = 0x4836ccu;
    // NOP
    ctx->pc = 0x4836d0u;
}
