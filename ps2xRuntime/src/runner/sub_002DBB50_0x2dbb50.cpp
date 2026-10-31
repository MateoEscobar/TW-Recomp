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

// Function: sub_002DBB50
// Address: 0x2dbb50 - 0x2dbb80
void sub_002DBB50_0x2dbb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBB50_0x2dbb50");
#endif

    switch (ctx->pc) {
        case 0x2dbb68u: goto label_2dbb68;
        default: break;
    }

    ctx->pc = 0x2dbb50u;

    // 0x2dbb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbb54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbb5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb60: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DBB60u;
    SET_GPR_U32(ctx, 31, 0x2DBB68u);
    ctx->pc = 0x2DBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB60u;
    // 0x2dbb64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DBB60u, 0x2DBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB68u;
label_2dbb68:
    // 0x2dbb68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2dbb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2dbb6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbb74: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB74u;
        // 0x2dbb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB7Cu;
    // 0x2dbb7c: 0x0  nop
    ctx->pc = 0x2dbb7cu;
    // NOP
    ctx->pc = 0x2dbb80u;
}
