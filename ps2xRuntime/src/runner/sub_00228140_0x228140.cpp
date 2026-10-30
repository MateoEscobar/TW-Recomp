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

// Function: sub_00228140
// Address: 0x228140 - 0x228168
void sub_00228140_0x228140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228140_0x228140");
#endif

    switch (ctx->pc) {
        case 0x228158u: goto label_228158;
        default: break;
    }

    ctx->pc = 0x228140u;

    // 0x228140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228144: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x228144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x228148: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x228148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
    // 0x22814c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228150: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228150u;
    SET_GPR_U32(ctx, 31, 0x228158u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228150u, 0x228158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228158u;
label_228158:
    // 0x228158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22815c: 0x3e00008  jr          $ra
    ctx->pc = 0x22815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22815Cu;
        // 0x228160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228164u;
    // 0x228164: 0x0  nop
    ctx->pc = 0x228164u;
    // NOP
    ctx->pc = 0x228168u;
}
