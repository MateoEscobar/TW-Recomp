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

// Function: sub_00409508
// Address: 0x409508 - 0x409538
void sub_00409508_0x409508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409508_0x409508");
#endif

    switch (ctx->pc) {
        case 0x40951cu: goto label_40951c;
        case 0x40952cu: goto label_40952c;
        default: break;
    }

    ctx->pc = 0x409508u;

    // 0x409508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x409508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40950c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40950Cu;
    {
        const bool branch_taken_0x40950c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x409510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40950Cu;
        // 0x409510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40950c) {
            ctx->pc = 0x409524u;
            goto label_409524;
        }
    }
    ctx->pc = 0x409514u;
    // 0x409514: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x409514u;
    SET_GPR_U32(ctx, 31, 0x40951Cu);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x409514u, 0x40951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40951Cu;
label_40951c:
    // 0x40951c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40951Cu;
    {
        const bool branch_taken_0x40951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40951Cu;
        // 0x409520: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40951c) {
            ctx->pc = 0x409530u;
            goto label_409530;
        }
    }
    ctx->pc = 0x409524u;
label_409524:
    // 0x409524: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409524u;
    SET_GPR_U32(ctx, 31, 0x40952Cu);
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409524u, 0x40952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40952Cu;
label_40952c:
    // 0x40952c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_409530:
    // 0x409530: 0x3e00008  jr          $ra
    ctx->pc = 0x409530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409530u;
        // 0x409534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409538u;
}
