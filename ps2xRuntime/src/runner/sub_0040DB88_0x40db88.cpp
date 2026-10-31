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

// Function: sub_0040DB88
// Address: 0x40db88 - 0x40dbb8
void sub_0040DB88_0x40db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DB88_0x40db88");
#endif

    switch (ctx->pc) {
        case 0x40dbacu: goto label_40dbac;
        default: break;
    }

    ctx->pc = 0x40db88u;

    // 0x40db88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40db8c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x40db8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40db90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40db94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40db98: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x40db98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x40db9c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x40db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x40dba0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x40dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x40dba4: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x40DBA4u;
    SET_GPR_U32(ctx, 31, 0x40DBACu);
    ctx->pc = 0x40DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DBA4u;
    // 0x40dba8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x40DBA4u, 0x40DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DBACu;
label_40dbac:
    // 0x40dbac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x40DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBB0u;
        // 0x40dbb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DBB8u;
}
