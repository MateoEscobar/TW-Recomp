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

// Function: sub_00409538
// Address: 0x409538 - 0x409568
void sub_00409538_0x409538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409538_0x409538");
#endif

    switch (ctx->pc) {
        case 0x40954cu: goto label_40954c;
        case 0x40955cu: goto label_40955c;
        default: break;
    }

    ctx->pc = 0x409538u;

    // 0x409538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x409538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40953c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40953Cu;
    {
        const bool branch_taken_0x40953c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x409540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40953Cu;
        // 0x409540: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40953c) {
            ctx->pc = 0x409554u;
            goto label_409554;
        }
    }
    ctx->pc = 0x409544u;
    // 0x409544: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x409544u;
    SET_GPR_U32(ctx, 31, 0x40954Cu);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x409544u, 0x40954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40954Cu;
label_40954c:
    // 0x40954c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40954Cu;
    {
        const bool branch_taken_0x40954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40954Cu;
        // 0x409550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40954c) {
            ctx->pc = 0x409560u;
            goto label_409560;
        }
    }
    ctx->pc = 0x409554u;
label_409554:
    // 0x409554: 0xc0c8e86  jal         func_323A18
    ctx->pc = 0x409554u;
    SET_GPR_U32(ctx, 31, 0x40955Cu);
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x409554u, 0x40955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40955Cu;
label_40955c:
    // 0x40955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_409560:
    // 0x409560: 0x3e00008  jr          $ra
    ctx->pc = 0x409560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409560u;
        // 0x409564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409568u;
}
