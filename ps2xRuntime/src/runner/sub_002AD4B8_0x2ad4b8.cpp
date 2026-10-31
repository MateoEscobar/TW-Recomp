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

// Function: sub_002AD4B8
// Address: 0x2ad4b8 - 0x2ad4e0
void sub_002AD4B8_0x2ad4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD4B8_0x2ad4b8");
#endif

    switch (ctx->pc) {
        case 0x2ad4d0u: goto label_2ad4d0;
        default: break;
    }

    ctx->pc = 0x2ad4b8u;

    // 0x2ad4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad4c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad4c8: 0xc087612  jal         func_21D848
    ctx->pc = 0x2AD4C8u;
    SET_GPR_U32(ctx, 31, 0x2AD4D0u);
    ctx->pc = 0x2AD4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4C8u;
    // 0x2ad4cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2AD4C8u, 0x2AD4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4D0u;
label_2ad4d0:
    // 0x2ad4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4D4u;
        // 0x2ad4d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD4DCu;
    // 0x2ad4dc: 0x0  nop
    ctx->pc = 0x2ad4dcu;
    // NOP
    ctx->pc = 0x2ad4e0u;
}
