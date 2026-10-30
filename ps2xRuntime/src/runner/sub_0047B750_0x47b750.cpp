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

// Function: sub_0047B750
// Address: 0x47b750 - 0x47b790
void sub_0047B750_0x47b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B750_0x47b750");
#endif

    switch (ctx->pc) {
        case 0x47b778u: goto label_47b778;
        default: break;
    }

    ctx->pc = 0x47b750u;

    // 0x47b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47b758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b760: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x47b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x47b764: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x47b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b768: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47B768u;
    {
        const bool branch_taken_0x47b768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B768u;
        // 0x47b76c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b768) {
            ctx->pc = 0x47B77Cu;
            goto label_47b77c;
        }
    }
    ctx->pc = 0x47B770u;
    // 0x47b770: 0xc11d5f8  jal         func_4757E0
    ctx->pc = 0x47B770u;
    SET_GPR_U32(ctx, 31, 0x47B778u);
    ctx->pc = 0x4757E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4757E0u, 0x47B770u, 0x47B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B778u;
label_47b778:
    // 0x47b778: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b77c:
    // 0x47b77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b780: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b784: 0x3e00008  jr          $ra
    ctx->pc = 0x47B784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B784u;
        // 0x47b788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B78Cu;
    // 0x47b78c: 0x0  nop
    ctx->pc = 0x47b78cu;
    // NOP
    ctx->pc = 0x47b790u;
}
