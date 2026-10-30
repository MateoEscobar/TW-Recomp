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

// Function: sub_00368970
// Address: 0x368970 - 0x368990
void sub_00368970_0x368970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368970_0x368970");
#endif

    switch (ctx->pc) {
        case 0x368980u: goto label_368980;
        default: break;
    }

    ctx->pc = 0x368970u;

    // 0x368970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368978: 0xc0637ac  jal         func_18DEB0
    ctx->pc = 0x368978u;
    SET_GPR_U32(ctx, 31, 0x368980u);
    ctx->pc = 0x18DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEB0u, 0x368978u, 0x368980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368980u;
label_368980:
    // 0x368980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368988: 0x3e00008  jr          $ra
    ctx->pc = 0x368988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368988u;
        // 0x36898c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368990u;
}
