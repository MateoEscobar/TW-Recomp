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

// Function: sub_004AFB40
// Address: 0x4afb40 - 0x4afb60
void sub_004AFB40_0x4afb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB40_0x4afb40");
#endif

    switch (ctx->pc) {
        case 0x4afb54u: goto label_4afb54;
        default: break;
    }

    ctx->pc = 0x4afb40u;

    // 0x4afb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afb44: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4afb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4afb48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb4c: 0xc12c4fe  jal         func_4B13F8
    ctx->pc = 0x4AFB4Cu;
    SET_GPR_U32(ctx, 31, 0x4AFB54u);
    ctx->pc = 0x4AFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFB4Cu;
    // 0x4afb50: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B13F8u, 0x4AFB4Cu, 0x4AFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFB54u;
label_4afb54:
    // 0x4afb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb58: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFB58u;
        // 0x4afb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB60u;
}
