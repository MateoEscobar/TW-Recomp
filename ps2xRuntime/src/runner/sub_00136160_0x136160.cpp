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

// Function: sub_00136160
// Address: 0x136160 - 0x136188
void sub_00136160_0x136160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136160_0x136160");
#endif

    switch (ctx->pc) {
        case 0x13617cu: goto label_13617c;
        default: break;
    }

    ctx->pc = 0x136160u;

    // 0x136160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136164: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x136164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x136168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13616c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136170: 0x24426590  addiu       $v0, $v0, 0x6590
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26000));
    // 0x136174: 0xc048274  jal         func_1209D0
    ctx->pc = 0x136174u;
    SET_GPR_U32(ctx, 31, 0x13617Cu);
    ctx->pc = 0x136178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136174u;
    // 0x136178: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1209D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1209D0u, 0x136174u, 0x13617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13617Cu;
label_13617c:
    // 0x13617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136180: 0x3e00008  jr          $ra
    ctx->pc = 0x136180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136180u;
        // 0x136184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136188u;
}
