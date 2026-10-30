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

// Function: sub_0015BC70
// Address: 0x15bc70 - 0x15bca8
void sub_0015BC70_0x15bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BC70_0x15bc70");
#endif

    switch (ctx->pc) {
        case 0x15bc88u: goto label_15bc88;
        case 0x15bc98u: goto label_15bc98;
        default: break;
    }

    ctx->pc = 0x15bc70u;

    // 0x15bc70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15bc74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15bc74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15bc78: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15bc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bc80: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15BC80u;
    SET_GPR_U32(ctx, 31, 0x15BC88u);
    ctx->pc = 0x15BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC80u;
    // 0x15bc84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15BC80u, 0x15BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC88u;
label_15bc88:
    // 0x15bc88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15bc8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bc90: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15BC90u;
    SET_GPR_U32(ctx, 31, 0x15BC98u);
    ctx->pc = 0x15BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC90u;
    // 0x15bc94: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15BC90u, 0x15BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC98u;
label_15bc98:
    // 0x15bc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC9Cu;
        // 0x15bca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BCA4u;
    // 0x15bca4: 0x0  nop
    ctx->pc = 0x15bca4u;
    // NOP
    ctx->pc = 0x15bca8u;
}
