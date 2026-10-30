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

// Function: sub_00117420
// Address: 0x117420 - 0x117450
void sub_00117420_0x117420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117420_0x117420");
#endif

    switch (ctx->pc) {
        case 0x117440u: goto label_117440;
        default: break;
    }

    ctx->pc = 0x117420u;

    // 0x117420: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x117420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117424: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x117424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x117428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11742c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11742cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117430: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x117430u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x117434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117438: 0xc0443c2  jal         func_110F08
    ctx->pc = 0x117438u;
    SET_GPR_U32(ctx, 31, 0x117440u);
    ctx->pc = 0x11743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117438u;
    // 0x11743c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F08u, 0x117438u, 0x117440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117440u;
label_117440:
    // 0x117440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117444: 0x3e00008  jr          $ra
    ctx->pc = 0x117444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117444u;
        // 0x117448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11744Cu;
    // 0x11744c: 0x0  nop
    ctx->pc = 0x11744cu;
    // NOP
    ctx->pc = 0x117450u;
}
