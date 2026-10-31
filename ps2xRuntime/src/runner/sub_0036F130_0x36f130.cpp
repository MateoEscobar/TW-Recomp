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

// Function: sub_0036F130
// Address: 0x36f130 - 0x36f160
void sub_0036F130_0x36f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F130_0x36f130");
#endif

    switch (ctx->pc) {
        case 0x36f144u: goto label_36f144;
        case 0x36f14cu: goto label_36f14c;
        default: break;
    }

    ctx->pc = 0x36f130u;

    // 0x36f130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f13c: 0xc102488  jal         func_409220
    ctx->pc = 0x36F13Cu;
    SET_GPR_U32(ctx, 31, 0x36F144u);
    ctx->pc = 0x36F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F13Cu;
    // 0x36f140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F13Cu, 0x36F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F144u;
label_36f144:
    // 0x36f144: 0xc0747e2  jal         func_1D1F88
    ctx->pc = 0x36F144u;
    SET_GPR_U32(ctx, 31, 0x36F14Cu);
    ctx->pc = 0x36F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F144u;
    // 0x36f148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F88u, 0x36F144u, 0x36F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F14Cu;
label_36f14c:
    // 0x36f14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f154: 0x3e00008  jr          $ra
    ctx->pc = 0x36F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F154u;
        // 0x36f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F15Cu;
    // 0x36f15c: 0x0  nop
    ctx->pc = 0x36f15cu;
    // NOP
    ctx->pc = 0x36f160u;
}
