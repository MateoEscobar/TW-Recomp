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

// Function: sub_0036C208
// Address: 0x36c208 - 0x36c238
void sub_0036C208_0x36c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C208_0x36c208");
#endif

    switch (ctx->pc) {
        case 0x36c21cu: goto label_36c21c;
        case 0x36c224u: goto label_36c224;
        default: break;
    }

    ctx->pc = 0x36c208u;

    // 0x36c208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c214: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36C214u;
    SET_GPR_U32(ctx, 31, 0x36C21Cu);
    ctx->pc = 0x36C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C214u;
    // 0x36c218: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36C214u, 0x36C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C21Cu;
label_36c21c:
    // 0x36c21c: 0xc10769c  jal         func_41DA70
    ctx->pc = 0x36C21Cu;
    SET_GPR_U32(ctx, 31, 0x36C224u);
    ctx->pc = 0x36C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C21Cu;
    // 0x36c220: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DA70u, 0x36C21Cu, 0x36C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C224u;
label_36c224:
    // 0x36c224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c22c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C22Cu;
        // 0x36c230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C234u;
    // 0x36c234: 0x0  nop
    ctx->pc = 0x36c234u;
    // NOP
    ctx->pc = 0x36c238u;
}
