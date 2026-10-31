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

// Function: sub_00113D50
// Address: 0x113d50 - 0x113d88
void sub_00113D50_0x113d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D50_0x113d50");
#endif

    switch (ctx->pc) {
        case 0x113d78u: goto label_113d78;
        default: break;
    }

    ctx->pc = 0x113d50u;

    // 0x113d50: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x113d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113d5c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d60: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x113d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d64: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113d64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113d6c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x113d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d70: 0xc044400  jal         func_111000
    ctx->pc = 0x113D70u;
    SET_GPR_U32(ctx, 31, 0x113D78u);
    ctx->pc = 0x113D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D70u;
    // 0x113d74: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111000u, 0x113D70u, 0x113D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D78u;
label_113d78:
    // 0x113d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x113D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D7Cu;
        // 0x113d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D84u;
    // 0x113d84: 0x0  nop
    ctx->pc = 0x113d84u;
    // NOP
    ctx->pc = 0x113d88u;
}
