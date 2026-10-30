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

// Function: sub_003C1404
// Address: 0x3c1404 - 0x3c1420
void sub_003C1404_0x3c1404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1404_0x3c1404");
#endif

    switch (ctx->pc) {
        case 0x3c1408u: goto label_3c1408;
        default: break;
    }

    ctx->pc = 0x3c1404u;

    // 0x3c1404: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c1404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c1408:
    // 0x3c1408: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c1408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c140c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c140cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c1410: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c1410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c1414: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1414u;
        // 0x3c1418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C141Cu;
    // 0x3c141c: 0x0  nop
    ctx->pc = 0x3c141cu;
    // NOP
    ctx->pc = 0x3c1420u;
}
