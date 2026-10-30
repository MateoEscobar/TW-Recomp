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

// Function: sub_0041E460
// Address: 0x41e460 - 0x41e490
void sub_0041E460_0x41e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E460_0x41e460");
#endif

    switch (ctx->pc) {
        case 0x41e478u: goto label_41e478;
        default: break;
    }

    ctx->pc = 0x41e460u;

    // 0x41e460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41e464: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41E464u;
    {
        const bool branch_taken_0x41e464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E464u;
        // 0x41e468: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e464) {
            ctx->pc = 0x41E480u;
            goto label_41e480;
        }
    }
    ctx->pc = 0x41E46Cu;
    // 0x41e46c: 0x24840fd4  addiu       $a0, $a0, 0xFD4
    ctx->pc = 0x41e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4052));
    // 0x41e470: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41E470u;
    SET_GPR_U32(ctx, 31, 0x41E478u);
    ctx->pc = 0x41E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E470u;
    // 0x41e474: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41E470u, 0x41E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E478u;
label_41e478:
    // 0x41e478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41E478u;
    {
        const bool branch_taken_0x41e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E478u;
        // 0x41e47c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e478) {
            ctx->pc = 0x41E488u;
            goto label_41e488;
        }
    }
    ctx->pc = 0x41E480u;
label_41e480:
    // 0x41e480: 0xa0800fd4  sb          $zero, 0xFD4($a0)
    ctx->pc = 0x41e480u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4052), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e488:
    // 0x41e488: 0x3e00008  jr          $ra
    ctx->pc = 0x41E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E488u;
        // 0x41e48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E490u;
}
