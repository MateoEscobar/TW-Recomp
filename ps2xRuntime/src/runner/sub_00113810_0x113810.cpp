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

// Function: sub_00113810
// Address: 0x113810 - 0x113840
void sub_00113810_0x113810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113810_0x113810");
#endif

    switch (ctx->pc) {
        case 0x113830u: goto label_113830;
        default: break;
    }

    ctx->pc = 0x113810u;

    // 0x113810: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x113810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113814: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11381c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113820: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113828: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x113828u;
    SET_GPR_U32(ctx, 31, 0x113830u);
    ctx->pc = 0x11382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113828u;
    // 0x11382c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x113828u, 0x113830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113830u;
label_113830:
    // 0x113830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113834: 0x3e00008  jr          $ra
    ctx->pc = 0x113834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113834u;
        // 0x113838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11383Cu;
    // 0x11383c: 0x0  nop
    ctx->pc = 0x11383cu;
    // NOP
    ctx->pc = 0x113840u;
}
