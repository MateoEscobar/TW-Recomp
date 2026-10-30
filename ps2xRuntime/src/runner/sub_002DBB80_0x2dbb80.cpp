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

// Function: sub_002DBB80
// Address: 0x2dbb80 - 0x2dbba8
void sub_002DBB80_0x2dbb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBB80_0x2dbb80");
#endif

    switch (ctx->pc) {
        case 0x2dbb98u: goto label_2dbb98;
        default: break;
    }

    ctx->pc = 0x2dbb80u;

    // 0x2dbb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbb84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbb8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbb90: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2DBB90u;
    SET_GPR_U32(ctx, 31, 0x2DBB98u);
    ctx->pc = 0x2DBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB90u;
    // 0x2dbb94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2DBB90u, 0x2DBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB98u;
label_2dbb98:
    // 0x2dbb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB9Cu;
        // 0x2dbba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBBA4u;
    // 0x2dbba4: 0x0  nop
    ctx->pc = 0x2dbba4u;
    // NOP
    ctx->pc = 0x2dbba8u;
}
