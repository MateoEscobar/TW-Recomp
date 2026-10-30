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

// Function: sub_004ED738
// Address: 0x4ed738 - 0x4ed758
void sub_004ED738_0x4ed738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED738_0x4ed738");
#endif

    switch (ctx->pc) {
        case 0x4ed748u: goto label_4ed748;
        default: break;
    }

    ctx->pc = 0x4ed738u;

    // 0x4ed738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed740: 0xc0e12cc  jal         func_384B30
    ctx->pc = 0x4ED740u;
    SET_GPR_U32(ctx, 31, 0x4ED748u);
    ctx->pc = 0x4ED744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED740u;
    // 0x4ed744: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B30u, 0x4ED740u, 0x4ED748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED748u;
label_4ed748:
    // 0x4ed748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed74c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED74Cu;
        // 0x4ed750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED754u;
    // 0x4ed754: 0x0  nop
    ctx->pc = 0x4ed754u;
    // NOP
    ctx->pc = 0x4ed758u;
}
