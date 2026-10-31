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

// Function: sub_00374820
// Address: 0x374820 - 0x374850
void sub_00374820_0x374820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374820_0x374820");
#endif

    switch (ctx->pc) {
        case 0x374834u: goto label_374834;
        case 0x37483cu: goto label_37483c;
        default: break;
    }

    ctx->pc = 0x374820u;

    // 0x374820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37482c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37482Cu;
    SET_GPR_U32(ctx, 31, 0x374834u);
    ctx->pc = 0x374830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37482Cu;
    // 0x374830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37482Cu, 0x374834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374834u;
label_374834:
    // 0x374834: 0xc1076c2  jal         func_41DB08
    ctx->pc = 0x374834u;
    SET_GPR_U32(ctx, 31, 0x37483Cu);
    ctx->pc = 0x374838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374834u;
    // 0x374838: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DB08u, 0x374834u, 0x37483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37483Cu;
label_37483c:
    // 0x37483c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374844: 0x3e00008  jr          $ra
    ctx->pc = 0x374844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374844u;
        // 0x374848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37484Cu;
    // 0x37484c: 0x0  nop
    ctx->pc = 0x37484cu;
    // NOP
    ctx->pc = 0x374850u;
}
