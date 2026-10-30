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

// Function: sub_004B7958
// Address: 0x4b7958 - 0x4b7978
void sub_004B7958_0x4b7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7958_0x4b7958");
#endif

    switch (ctx->pc) {
        case 0x4b7968u: goto label_4b7968;
        default: break;
    }

    ctx->pc = 0x4b7958u;

    // 0x4b7958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b795c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b7960: 0xc10f614  jal         func_43D850
    ctx->pc = 0x4B7960u;
    SET_GPR_U32(ctx, 31, 0x4B7968u);
    ctx->pc = 0x4B7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7960u;
    // 0x4b7964: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D850u, 0x4B7960u, 0x4B7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7968u;
label_4b7968:
    // 0x4b7968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b796c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B796Cu;
        // 0x4b7970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7974u;
    // 0x4b7974: 0x0  nop
    ctx->pc = 0x4b7974u;
    // NOP
    ctx->pc = 0x4b7978u;
}
