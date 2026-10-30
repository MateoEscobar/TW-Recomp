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

// Function: sub_004D1220
// Address: 0x4d1220 - 0x4d1240
void sub_004D1220_0x4d1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1220_0x4d1220");
#endif

    switch (ctx->pc) {
        case 0x4d1230u: goto label_4d1230;
        default: break;
    }

    ctx->pc = 0x4d1220u;

    // 0x4d1220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d1224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d1224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d1228: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4D1228u;
    SET_GPR_U32(ctx, 31, 0x4D1230u);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4D1228u, 0x4D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1230u;
label_4d1230:
    // 0x4d1230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1234: 0x3e00008  jr          $ra
    ctx->pc = 0x4D1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1234u;
        // 0x4d1238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D123Cu;
    // 0x4d123c: 0x0  nop
    ctx->pc = 0x4d123cu;
    // NOP
    ctx->pc = 0x4d1240u;
}
