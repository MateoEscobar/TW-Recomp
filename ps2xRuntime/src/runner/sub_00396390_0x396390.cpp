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

// Function: sub_00396390
// Address: 0x396390 - 0x3963b8
void sub_00396390_0x396390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396390_0x396390");
#endif

    switch (ctx->pc) {
        case 0x3963a8u: goto label_3963a8;
        default: break;
    }

    ctx->pc = 0x396390u;

    // 0x396390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x396394: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x396394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x396398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39639c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x39639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3963a0: 0xc0e5874  jal         func_3961D0
    ctx->pc = 0x3963A0u;
    SET_GPR_U32(ctx, 31, 0x3963A8u);
    ctx->pc = 0x3963A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963A0u;
    // 0x3963a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3961D0u, 0x3963A0u, 0x3963A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3963A8u;
label_3963a8:
    // 0x3963a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3963a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3963ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3963ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3963B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963ACu;
        // 0x3963b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3963ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3963B4u;
    // 0x3963b4: 0x0  nop
    ctx->pc = 0x3963b4u;
    // NOP
    ctx->pc = 0x3963b8u;
}
