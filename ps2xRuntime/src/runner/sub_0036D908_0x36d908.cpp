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

// Function: sub_0036D908
// Address: 0x36d908 - 0x36d938
void sub_0036D908_0x36d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D908_0x36d908");
#endif

    switch (ctx->pc) {
        case 0x36d91cu: goto label_36d91c;
        case 0x36d924u: goto label_36d924;
        default: break;
    }

    ctx->pc = 0x36d908u;

    // 0x36d908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d90c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d914: 0xc102488  jal         func_409220
    ctx->pc = 0x36D914u;
    SET_GPR_U32(ctx, 31, 0x36D91Cu);
    ctx->pc = 0x36D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D914u;
    // 0x36d918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D914u, 0x36D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D91Cu;
label_36d91c:
    // 0x36d91c: 0xc052084  jal         func_148210
    ctx->pc = 0x36D91Cu;
    SET_GPR_U32(ctx, 31, 0x36D924u);
    ctx->pc = 0x36D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D91Cu;
    // 0x36d920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148210u, 0x36D91Cu, 0x36D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D924u;
label_36d924:
    // 0x36d924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d92c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D92Cu;
        // 0x36d930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D934u;
    // 0x36d934: 0x0  nop
    ctx->pc = 0x36d934u;
    // NOP
    ctx->pc = 0x36d938u;
}
