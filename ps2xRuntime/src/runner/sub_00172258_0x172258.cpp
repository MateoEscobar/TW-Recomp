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

// Function: sub_00172258
// Address: 0x172258 - 0x172280
void sub_00172258_0x172258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172258_0x172258");
#endif

    switch (ctx->pc) {
        case 0x172274u: goto label_172274;
        default: break;
    }

    ctx->pc = 0x172258u;

    // 0x172258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17225c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x172260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172264: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x172264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172268: 0x24428a10  addiu       $v0, $v0, -0x75F0
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937104));
    // 0x17226c: 0xc05fdc2  jal         func_17F708
    ctx->pc = 0x17226Cu;
    SET_GPR_U32(ctx, 31, 0x172274u);
    ctx->pc = 0x172270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17226Cu;
    // 0x172270: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F708u, 0x17226Cu, 0x172274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172274u;
label_172274:
    // 0x172274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172278: 0x3e00008  jr          $ra
    ctx->pc = 0x172278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172278u;
        // 0x17227c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172280u;
}
