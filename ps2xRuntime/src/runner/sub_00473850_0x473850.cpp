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

// Function: sub_00473850
// Address: 0x473850 - 0x473880
void sub_00473850_0x473850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473850_0x473850");
#endif

    switch (ctx->pc) {
        case 0x47386cu: goto label_47386c;
        default: break;
    }

    ctx->pc = 0x473850u;

    // 0x473850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x473854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47385c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473860: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x473860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473864: 0xc11cbec  jal         func_472FB0
    ctx->pc = 0x473864u;
    SET_GPR_U32(ctx, 31, 0x47386Cu);
    ctx->pc = 0x473868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473864u;
    // 0x473868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472FB0u, 0x473864u, 0x47386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47386Cu;
label_47386c:
    // 0x47386c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47386cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473878: 0x3e00008  jr          $ra
    ctx->pc = 0x473878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473878u;
        // 0x47387c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473880u;
}
