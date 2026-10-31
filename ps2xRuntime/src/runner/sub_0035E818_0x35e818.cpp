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

// Function: sub_0035E818
// Address: 0x35e818 - 0x35e848
void sub_0035E818_0x35e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E818_0x35e818");
#endif

    switch (ctx->pc) {
        case 0x35e82cu: goto label_35e82c;
        case 0x35e834u: goto label_35e834;
        default: break;
    }

    ctx->pc = 0x35e818u;

    // 0x35e818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e824: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35E824u;
    SET_GPR_U32(ctx, 31, 0x35E82Cu);
    ctx->pc = 0x35E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E824u;
    // 0x35e828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35E824u, 0x35E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E82Cu;
label_35e82c:
    // 0x35e82c: 0xc107682  jal         func_41DA08
    ctx->pc = 0x35E82Cu;
    SET_GPR_U32(ctx, 31, 0x35E834u);
    ctx->pc = 0x35E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E82Cu;
    // 0x35e830: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DA08u, 0x35E82Cu, 0x35E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E834u;
label_35e834:
    // 0x35e834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E83Cu;
        // 0x35e840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E844u;
    // 0x35e844: 0x0  nop
    ctx->pc = 0x35e844u;
    // NOP
    ctx->pc = 0x35e848u;
}
