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

// Function: sub_00365818
// Address: 0x365818 - 0x365850
void sub_00365818_0x365818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365818_0x365818");
#endif

    switch (ctx->pc) {
        case 0x36582cu: goto label_36582c;
        case 0x365834u: goto label_365834;
        case 0x36583cu: goto label_36583c;
        default: break;
    }

    ctx->pc = 0x365818u;

    // 0x365818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36581c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365824: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365824u;
    SET_GPR_U32(ctx, 31, 0x36582Cu);
    ctx->pc = 0x365828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365824u;
    // 0x365828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365824u, 0x36582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36582Cu;
label_36582c:
    // 0x36582c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36582Cu;
    SET_GPR_U32(ctx, 31, 0x365834u);
    ctx->pc = 0x365830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36582Cu;
    // 0x365830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36582Cu, 0x365834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365834u;
label_365834:
    // 0x365834: 0xc046e22  jal         func_11B888
    ctx->pc = 0x365834u;
    SET_GPR_U32(ctx, 31, 0x36583Cu);
    ctx->pc = 0x365838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365834u;
    // 0x365838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B888u, 0x365834u, 0x36583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36583Cu;
label_36583c:
    // 0x36583c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365844: 0x3e00008  jr          $ra
    ctx->pc = 0x365844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365844u;
        // 0x365848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36584Cu;
    // 0x36584c: 0x0  nop
    ctx->pc = 0x36584cu;
    // NOP
    ctx->pc = 0x365850u;
}
