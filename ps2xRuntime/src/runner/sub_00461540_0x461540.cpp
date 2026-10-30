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

// Function: sub_00461540
// Address: 0x461540 - 0x461570
void sub_00461540_0x461540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461540_0x461540");
#endif

    switch (ctx->pc) {
        case 0x461558u: goto label_461558;
        default: break;
    }

    ctx->pc = 0x461540u;

    // 0x461540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x461540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x461544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x461544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x461548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x461548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46154c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461550: 0xc11851c  jal         func_461470
    ctx->pc = 0x461550u;
    SET_GPR_U32(ctx, 31, 0x461558u);
    ctx->pc = 0x461554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461550u;
    // 0x461554: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x461550u, 0x461558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461558u;
label_461558:
    // 0x461558: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x461558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x46155c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46155cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x461564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461568: 0x3e00008  jr          $ra
    ctx->pc = 0x461568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461568u;
        // 0x46156c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461570u;
}
