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

// Function: sub_0036C440
// Address: 0x36c440 - 0x36c478
void sub_0036C440_0x36c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C440_0x36c440");
#endif

    switch (ctx->pc) {
        case 0x36c454u: goto label_36c454;
        case 0x36c45cu: goto label_36c45c;
        case 0x36c464u: goto label_36c464;
        default: break;
    }

    ctx->pc = 0x36c440u;

    // 0x36c440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c44c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C44Cu;
    SET_GPR_U32(ctx, 31, 0x36C454u);
    ctx->pc = 0x36C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C44Cu;
    // 0x36c450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C44Cu, 0x36C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C454u;
label_36c454:
    // 0x36c454: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C454u;
    SET_GPR_U32(ctx, 31, 0x36C45Cu);
    ctx->pc = 0x36C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C454u;
    // 0x36c458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C454u, 0x36C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C45Cu;
label_36c45c:
    // 0x36c45c: 0xc107604  jal         func_41D810
    ctx->pc = 0x36C45Cu;
    SET_GPR_U32(ctx, 31, 0x36C464u);
    ctx->pc = 0x36C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C45Cu;
    // 0x36c460: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D810u, 0x36C45Cu, 0x36C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C464u;
label_36c464:
    // 0x36c464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c46c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C46Cu;
        // 0x36c470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C474u;
    // 0x36c474: 0x0  nop
    ctx->pc = 0x36c474u;
    // NOP
    ctx->pc = 0x36c478u;
}
