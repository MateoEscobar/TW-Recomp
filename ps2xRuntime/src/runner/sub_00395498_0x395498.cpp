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

// Function: sub_00395498
// Address: 0x395498 - 0x3954c8
void sub_00395498_0x395498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395498_0x395498");
#endif

    switch (ctx->pc) {
        case 0x3954b8u: goto label_3954b8;
        default: break;
    }

    ctx->pc = 0x395498u;

    // 0x395498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39549c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39549cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3954a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3954a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3954a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3954a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3954a8: 0xac450104  sw          $a1, 0x104($v0)
    ctx->pc = 0x3954a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 5));
    // 0x3954ac: 0xa0430108  sb          $v1, 0x108($v0)
    ctx->pc = 0x3954acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3954b0: 0xc0e54cc  jal         func_395330
    ctx->pc = 0x3954B0u;
    SET_GPR_U32(ctx, 31, 0x3954B8u);
    ctx->pc = 0x3954B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3954B0u;
    // 0x3954b4: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395330u, 0x3954B0u, 0x3954B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954B8u;
label_3954b8:
    // 0x3954b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3954b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3954bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3954bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3954c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3954C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954C0u;
        // 0x3954c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3954C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3954C8u;
}
