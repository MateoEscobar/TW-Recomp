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

// Function: sub_00160D38
// Address: 0x160d38 - 0x160d78
void sub_00160D38_0x160d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160D38_0x160d38");
#endif

    switch (ctx->pc) {
        case 0x160d54u: goto label_160d54;
        case 0x160d68u: goto label_160d68;
        default: break;
    }

    ctx->pc = 0x160d38u;

    // 0x160d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160d44: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x160d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d4c: 0xc1073a2  jal         func_41CE88
    ctx->pc = 0x160D4Cu;
    SET_GPR_U32(ctx, 31, 0x160D54u);
    ctx->pc = 0x160D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D4Cu;
    // 0x160d50: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CE88u, 0x160D4Cu, 0x160D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D54u;
label_160d54:
    // 0x160d54: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x160d58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d60: 0xc1073bc  jal         func_41CEF0
    ctx->pc = 0x160D60u;
    SET_GPR_U32(ctx, 31, 0x160D68u);
    ctx->pc = 0x160D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D60u;
    // 0x160d64: 0xac82014c  sw          $v0, 0x14C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x160D60u, 0x160D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D68u;
label_160d68:
    // 0x160d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d70: 0x3e00008  jr          $ra
    ctx->pc = 0x160D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D70u;
        // 0x160d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D78u;
}
