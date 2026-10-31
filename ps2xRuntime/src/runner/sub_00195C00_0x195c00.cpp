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

// Function: sub_00195C00
// Address: 0x195c00 - 0x195c20
void sub_00195C00_0x195c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C00_0x195c00");
#endif

    switch (ctx->pc) {
        case 0x195c10u: goto label_195c10;
        default: break;
    }

    ctx->pc = 0x195c00u;

    // 0x195c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195c08: 0xc121888  jal         func_486220
    ctx->pc = 0x195C08u;
    SET_GPR_U32(ctx, 31, 0x195C10u);
    ctx->pc = 0x195C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C08u;
    // 0x195c0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x195C08u, 0x195C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C10u;
label_195c10:
    // 0x195c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c14: 0x3e00008  jr          $ra
    ctx->pc = 0x195C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C14u;
        // 0x195c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C1Cu;
    // 0x195c1c: 0x0  nop
    ctx->pc = 0x195c1cu;
    // NOP
    ctx->pc = 0x195c20u;
}
