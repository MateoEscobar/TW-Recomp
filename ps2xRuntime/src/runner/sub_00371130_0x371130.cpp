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

// Function: sub_00371130
// Address: 0x371130 - 0x371160
void sub_00371130_0x371130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371130_0x371130");
#endif

    switch (ctx->pc) {
        case 0x371144u: goto label_371144;
        case 0x37114cu: goto label_37114c;
        default: break;
    }

    ctx->pc = 0x371130u;

    // 0x371130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37113c: 0xc102488  jal         func_409220
    ctx->pc = 0x37113Cu;
    SET_GPR_U32(ctx, 31, 0x371144u);
    ctx->pc = 0x371140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37113Cu;
    // 0x371140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37113Cu, 0x371144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371144u;
label_371144:
    // 0x371144: 0xc044cf4  jal         func_1133D0
    ctx->pc = 0x371144u;
    SET_GPR_U32(ctx, 31, 0x37114Cu);
    ctx->pc = 0x371148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371144u;
    // 0x371148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1133D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1133D0u, 0x371144u, 0x37114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37114Cu;
label_37114c:
    // 0x37114c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37114cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371154: 0x3e00008  jr          $ra
    ctx->pc = 0x371154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371154u;
        // 0x371158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37115Cu;
    // 0x37115c: 0x0  nop
    ctx->pc = 0x37115cu;
    // NOP
    ctx->pc = 0x371160u;
}
