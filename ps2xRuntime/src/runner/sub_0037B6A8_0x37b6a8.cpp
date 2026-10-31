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

// Function: sub_0037B6A8
// Address: 0x37b6a8 - 0x37b6c8
void sub_0037B6A8_0x37b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B6A8_0x37b6a8");
#endif

    switch (ctx->pc) {
        case 0x37b6b8u: goto label_37b6b8;
        default: break;
    }

    ctx->pc = 0x37b6a8u;

    // 0x37b6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b6b0: 0xc0554c2  jal         func_155308
    ctx->pc = 0x37B6B0u;
    SET_GPR_U32(ctx, 31, 0x37B6B8u);
    ctx->pc = 0x155308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155308u, 0x37B6B0u, 0x37B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6B8u;
label_37b6b8:
    // 0x37b6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b6bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6C0u;
        // 0x37b6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B6C8u;
}
