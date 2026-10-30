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

// Function: sub_00253190
// Address: 0x253190 - 0x2531b8
void sub_00253190_0x253190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253190_0x253190");
#endif

    switch (ctx->pc) {
        case 0x2531a4u: goto label_2531a4;
        default: break;
    }

    ctx->pc = 0x253190u;

    // 0x253190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253194: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x253194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x253198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25319c: 0xc094c6e  jal         func_2531B8
    ctx->pc = 0x25319Cu;
    SET_GPR_U32(ctx, 31, 0x2531A4u);
    ctx->pc = 0x2531A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25319Cu;
    // 0x2531a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531B8u, 0x25319Cu, 0x2531A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531A4u;
label_2531a4:
    // 0x2531a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2531a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2531a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2531ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2531acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2531b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2531B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B0u;
        // 0x2531b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2531B8u;
}
