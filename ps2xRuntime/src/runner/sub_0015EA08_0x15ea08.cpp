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

// Function: sub_0015EA08
// Address: 0x15ea08 - 0x15ea40
void sub_0015EA08_0x15ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EA08_0x15ea08");
#endif

    switch (ctx->pc) {
        case 0x15ea20u: goto label_15ea20;
        case 0x15ea30u: goto label_15ea30;
        default: break;
    }

    ctx->pc = 0x15ea08u;

    // 0x15ea08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15ea0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ea0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ea10: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15ea14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ea18: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15EA18u;
    SET_GPR_U32(ctx, 31, 0x15EA20u);
    ctx->pc = 0x15EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA18u;
    // 0x15ea1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15EA18u, 0x15EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA20u;
label_15ea20:
    // 0x15ea20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15ea24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea28: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15EA28u;
    SET_GPR_U32(ctx, 31, 0x15EA30u);
    ctx->pc = 0x15EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA28u;
    // 0x15ea2c: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15EA28u, 0x15EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA30u;
label_15ea30:
    // 0x15ea30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA34u;
        // 0x15ea38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA3Cu;
    // 0x15ea3c: 0x0  nop
    ctx->pc = 0x15ea3cu;
    // NOP
    ctx->pc = 0x15ea40u;
}
