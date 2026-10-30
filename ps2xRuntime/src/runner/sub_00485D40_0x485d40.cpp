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

// Function: sub_00485D40
// Address: 0x485d40 - 0x485d80
void sub_00485D40_0x485d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485D40_0x485d40");
#endif

    switch (ctx->pc) {
        case 0x485d60u: goto label_485d60;
        default: break;
    }

    ctx->pc = 0x485d40u;

    // 0x485d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485d44: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x485d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x485d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x485d4c: 0x24c65dd8  addiu       $a2, $a2, 0x5DD8
    ctx->pc = 0x485d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24024));
    // 0x485d50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x485d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x485d54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x485d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x485d58: 0xc1213b8  jal         func_484EE0
    ctx->pc = 0x485D58u;
    SET_GPR_U32(ctx, 31, 0x485D60u);
    ctx->pc = 0x485D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485D58u;
    // 0x485d5c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484EE0u, 0x485D58u, 0x485D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D60u;
label_485d60:
    // 0x485d60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x485d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d68: 0x3e00008  jr          $ra
    ctx->pc = 0x485D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485D68u;
        // 0x485d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485D70u;
    // 0x485d70: 0x0  nop
    ctx->pc = 0x485d70u;
    // NOP
    // 0x485d74: 0x0  nop
    ctx->pc = 0x485d74u;
    // NOP
    // 0x485d78: 0x0  nop
    ctx->pc = 0x485d78u;
    // NOP
    // 0x485d7c: 0x0  nop
    ctx->pc = 0x485d7cu;
    // NOP
    ctx->pc = 0x485d80u;
}
