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

// Function: sub_0036F218
// Address: 0x36f218 - 0x36f250
void sub_0036F218_0x36f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F218_0x36f218");
#endif

    switch (ctx->pc) {
        case 0x36f22cu: goto label_36f22c;
        case 0x36f234u: goto label_36f234;
        case 0x36f23cu: goto label_36f23c;
        default: break;
    }

    ctx->pc = 0x36f218u;

    // 0x36f218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f224: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F224u;
    SET_GPR_U32(ctx, 31, 0x36F22Cu);
    ctx->pc = 0x36F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F224u;
    // 0x36f228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F224u, 0x36F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F22Cu;
label_36f22c:
    // 0x36f22c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F22Cu;
    SET_GPR_U32(ctx, 31, 0x36F234u);
    ctx->pc = 0x36F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F22Cu;
    // 0x36f230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F22Cu, 0x36F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F234u;
label_36f234:
    // 0x36f234: 0xc057508  jal         func_15D420
    ctx->pc = 0x36F234u;
    SET_GPR_U32(ctx, 31, 0x36F23Cu);
    ctx->pc = 0x36F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F234u;
    // 0x36f238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D420u, 0x36F234u, 0x36F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F23Cu;
label_36f23c:
    // 0x36f23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f244: 0x3e00008  jr          $ra
    ctx->pc = 0x36F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F244u;
        // 0x36f248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F24Cu;
    // 0x36f24c: 0x0  nop
    ctx->pc = 0x36f24cu;
    // NOP
    ctx->pc = 0x36f250u;
}
