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

// Function: sub_0043E120
// Address: 0x43e120 - 0x43e148
void sub_0043E120_0x43e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E120_0x43e120");
#endif

    switch (ctx->pc) {
        case 0x43e130u: goto label_43e130;
        default: break;
    }

    ctx->pc = 0x43e120u;

    // 0x43e120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43e124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43e128: 0xc10f434  jal         func_43D0D0
    ctx->pc = 0x43E128u;
    SET_GPR_U32(ctx, 31, 0x43E130u);
    ctx->pc = 0x43E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E128u;
    // 0x43e12c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0D0u, 0x43E128u, 0x43E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E130u;
label_43e130:
    // 0x43e130: 0xf  sync
    ctx->pc = 0x43e130u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43e134: 0x42000038  ei
    ctx->pc = 0x43e134u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x43e138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43e138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e13c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43e13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e140: 0x3e00008  jr          $ra
    ctx->pc = 0x43E140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E140u;
        // 0x43e144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E148u;
}
