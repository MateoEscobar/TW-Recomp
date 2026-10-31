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

// Function: sub_0019C608
// Address: 0x19c608 - 0x19c638
void sub_0019C608_0x19c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C608_0x19c608");
#endif

    switch (ctx->pc) {
        case 0x19c62cu: goto label_19c62c;
        default: break;
    }

    ctx->pc = 0x19c608u;

    // 0x19c608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c60c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x19c610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c614: 0x244291e0  addiu       $v0, $v0, -0x6E20
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    // 0x19c618: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19c618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19c61c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C61Cu;
    {
        const bool branch_taken_0x19c61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C61Cu;
        // 0x19c620: 0xac82330c  sw          $v0, 0x330C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c61c) {
            ctx->pc = 0x19C62Cu;
            goto label_19c62c;
        }
    }
    ctx->pc = 0x19C624u;
    // 0x19c624: 0xc10b208  jal         func_42C820
    ctx->pc = 0x19C624u;
    SET_GPR_U32(ctx, 31, 0x19C62Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x19C624u, 0x19C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C62Cu;
label_19c62c:
    // 0x19c62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c630: 0x3e00008  jr          $ra
    ctx->pc = 0x19C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C630u;
        // 0x19c634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C638u;
}
