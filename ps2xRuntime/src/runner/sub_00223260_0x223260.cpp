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

// Function: sub_00223260
// Address: 0x223260 - 0x223280
void sub_00223260_0x223260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223260_0x223260");
#endif

    switch (ctx->pc) {
        case 0x223270u: goto label_223270;
        default: break;
    }

    ctx->pc = 0x223260u;

    // 0x223260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223268: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x223268u;
    SET_GPR_U32(ctx, 31, 0x223270u);
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x223268u, 0x223270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223270u;
label_223270:
    // 0x223270: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x223270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223278: 0x3e00008  jr          $ra
    ctx->pc = 0x223278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223278u;
        // 0x22327c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223280u;
}
