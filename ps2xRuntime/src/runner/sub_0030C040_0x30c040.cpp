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

// Function: sub_0030C040
// Address: 0x30c040 - 0x30c060
void sub_0030C040_0x30c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C040_0x30c040");
#endif

    switch (ctx->pc) {
        case 0x30c050u: goto label_30c050;
        default: break;
    }

    ctx->pc = 0x30c040u;

    // 0x30c040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c048: 0xc0c2f18  jal         func_30BC60
    ctx->pc = 0x30C048u;
    SET_GPR_U32(ctx, 31, 0x30C050u);
    ctx->pc = 0x30C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C048u;
    // 0x30c04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC60u, 0x30C048u, 0x30C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C050u;
label_30c050:
    // 0x30c050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c054: 0x3e00008  jr          $ra
    ctx->pc = 0x30C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C054u;
        // 0x30c058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C05Cu;
    // 0x30c05c: 0x0  nop
    ctx->pc = 0x30c05cu;
    // NOP
    ctx->pc = 0x30c060u;
}
