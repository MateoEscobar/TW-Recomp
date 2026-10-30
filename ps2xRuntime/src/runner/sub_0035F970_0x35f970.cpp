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

// Function: sub_0035F970
// Address: 0x35f970 - 0x35f990
void sub_0035F970_0x35f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F970_0x35f970");
#endif

    switch (ctx->pc) {
        case 0x35f980u: goto label_35f980;
        default: break;
    }

    ctx->pc = 0x35f970u;

    // 0x35f970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f978: 0xc05ae34  jal         func_16B8D0
    ctx->pc = 0x35F978u;
    SET_GPR_U32(ctx, 31, 0x35F980u);
    ctx->pc = 0x16B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8D0u, 0x35F978u, 0x35F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F980u;
label_35f980:
    // 0x35f980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f988: 0x3e00008  jr          $ra
    ctx->pc = 0x35F988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F988u;
        // 0x35f98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F990u;
}
