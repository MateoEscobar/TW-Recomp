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

// Function: sub_00251150
// Address: 0x251150 - 0x251188
void sub_00251150_0x251150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251150_0x251150");
#endif

    switch (ctx->pc) {
        case 0x251178u: goto label_251178;
        default: break;
    }

    ctx->pc = 0x251150u;

    // 0x251150: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x251150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251154: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x251154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x251158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25115c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x25115cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251160: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x251160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251164: 0x8c440584  lw          $a0, 0x584($v0)
    ctx->pc = 0x251164u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x510584u));
    // 0x251168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25116c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x25116cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251170: 0xc0943a6  jal         func_250E98
    ctx->pc = 0x251170u;
    SET_GPR_U32(ctx, 31, 0x251178u);
    ctx->pc = 0x251174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251170u;
    // 0x251174: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E98u, 0x251170u, 0x251178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251178u;
label_251178:
    // 0x251178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25117c: 0x3e00008  jr          $ra
    ctx->pc = 0x25117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25117Cu;
        // 0x251180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25117Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251184u;
    // 0x251184: 0x0  nop
    ctx->pc = 0x251184u;
    // NOP
    ctx->pc = 0x251188u;
}
