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

// Function: sub_002E0918
// Address: 0x2e0918 - 0x2e0950
void sub_002E0918_0x2e0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0918_0x2e0918");
#endif

    ctx->pc = 0x2e0918u;

    // 0x2e0918: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2e0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e091c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E091Cu;
    {
        const bool branch_taken_0x2e091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e091c) {
            ctx->pc = 0x2E0948u;
            goto label_2e0948;
        }
    }
    ctx->pc = 0x2E0924u;
    // 0x2e0924: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2e0924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e0928: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2e0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2e092c: 0x94a30032  lhu         $v1, 0x32($a1)
    ctx->pc = 0x2e092cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x2e0930: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e0930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e0934: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0934u;
    {
        const bool branch_taken_0x2e0934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0934) {
            ctx->pc = 0x2E0948u;
            goto label_2e0948;
        }
    }
    ctx->pc = 0x2E093Cu;
    // 0x2e093c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2e0940: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0940u;
        // 0x2e0944: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0948u;
label_2e0948:
    // 0x2e0948: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0948u;
        // 0x2e094c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0950u;
}
