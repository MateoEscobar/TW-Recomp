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

// Function: sub_001129B8
// Address: 0x1129b8 - 0x1129e0
void sub_001129B8_0x1129b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001129B8_0x1129b8");
#endif

    switch (ctx->pc) {
        case 0x1129d0u: goto label_1129d0;
        default: break;
    }

    ctx->pc = 0x1129b8u;

    // 0x1129b8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1129b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1129bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1129bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1129c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1129c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1129c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1129c8: 0xc04685c  jal         func_11A170
    ctx->pc = 0x1129C8u;
    SET_GPR_U32(ctx, 31, 0x1129D0u);
    ctx->pc = 0x1129CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129C8u;
    // 0x1129cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x1129C8u, 0x1129D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129D0u;
label_1129d0:
    // 0x1129d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1129d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1129D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1129D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129D4u;
        // 0x1129d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129DCu;
    // 0x1129dc: 0x0  nop
    ctx->pc = 0x1129dcu;
    // NOP
    ctx->pc = 0x1129e0u;
}
