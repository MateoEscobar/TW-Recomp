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

// Function: sub_001894F8
// Address: 0x1894f8 - 0x189528
void sub_001894F8_0x1894f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001894F8_0x1894f8");
#endif

    switch (ctx->pc) {
        case 0x189510u: goto label_189510;
        default: break;
    }

    ctx->pc = 0x1894f8u;

    // 0x1894f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1894f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1894fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1894fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189508: 0xc066414  jal         func_199050
    ctx->pc = 0x189508u;
    SET_GPR_U32(ctx, 31, 0x189510u);
    ctx->pc = 0x18950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189508u;
    // 0x18950c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199050u, 0x189508u, 0x189510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189510u;
label_189510:
    // 0x189510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18951c: 0x3e00008  jr          $ra
    ctx->pc = 0x18951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18951Cu;
        // 0x189520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189524u;
    // 0x189524: 0x0  nop
    ctx->pc = 0x189524u;
    // NOP
    ctx->pc = 0x189528u;
}
