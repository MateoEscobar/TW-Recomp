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

// Function: sub_0021D550
// Address: 0x21d550 - 0x21d570
void sub_0021D550_0x21d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D550_0x21d550");
#endif

    switch (ctx->pc) {
        case 0x21d560u: goto label_21d560;
        default: break;
    }

    ctx->pc = 0x21d550u;

    // 0x21d550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d558: 0xc0e1306  jal         func_384C18
    ctx->pc = 0x21D558u;
    SET_GPR_U32(ctx, 31, 0x21D560u);
    ctx->pc = 0x21D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D558u;
    // 0x21d55c: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C18u, 0x21D558u, 0x21D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D560u;
label_21d560:
    // 0x21d560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d564: 0x3e00008  jr          $ra
    ctx->pc = 0x21D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D564u;
        // 0x21d568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D56Cu;
    // 0x21d56c: 0x0  nop
    ctx->pc = 0x21d56cu;
    // NOP
    ctx->pc = 0x21d570u;
}
