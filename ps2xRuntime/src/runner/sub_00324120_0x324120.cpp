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

// Function: sub_00324120
// Address: 0x324120 - 0x324148
void sub_00324120_0x324120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324120_0x324120");
#endif

    switch (ctx->pc) {
        case 0x32413cu: goto label_32413c;
        default: break;
    }

    ctx->pc = 0x324120u;

    // 0x324120: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x324120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x324124: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x324124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x324128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32412c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x324130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324134: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x324134u;
    SET_GPR_U32(ctx, 31, 0x32413Cu);
    ctx->pc = 0x324138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324134u;
    // 0x324138: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x324134u, 0x32413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32413Cu;
label_32413c:
    // 0x32413c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324140: 0x3e00008  jr          $ra
    ctx->pc = 0x324140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324140u;
        // 0x324144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324148u;
}
