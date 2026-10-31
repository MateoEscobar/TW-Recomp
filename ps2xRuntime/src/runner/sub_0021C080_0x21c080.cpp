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

// Function: sub_0021C080
// Address: 0x21c080 - 0x21c0a8
void sub_0021C080_0x21c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C080_0x21c080");
#endif

    switch (ctx->pc) {
        case 0x21c09cu: goto label_21c09c;
        default: break;
    }

    ctx->pc = 0x21c080u;

    // 0x21c080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c088: 0x8c8401a0  lw          $a0, 0x1A0($a0)
    ctx->pc = 0x21c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x21c08c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C08Cu;
    {
        const bool branch_taken_0x21c08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C08Cu;
        // 0x21c090: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c08c) {
            ctx->pc = 0x21C0A0u;
            goto label_21c0a0;
        }
    }
    ctx->pc = 0x21C094u;
    // 0x21c094: 0xc0d085a  jal         func_342168
    ctx->pc = 0x21C094u;
    SET_GPR_U32(ctx, 31, 0x21C09Cu);
    ctx->pc = 0x342168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342168u, 0x21C094u, 0x21C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C09Cu;
label_21c09c:
    // 0x21c09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c0a0:
    // 0x21c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0A0u;
        // 0x21c0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C0A8u;
}
