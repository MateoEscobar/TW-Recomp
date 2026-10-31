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

// Function: sub_00227DD8
// Address: 0x227dd8 - 0x227e18
void sub_00227DD8_0x227dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227DD8_0x227dd8");
#endif

    switch (ctx->pc) {
        case 0x227df8u: goto label_227df8;
        default: break;
    }

    ctx->pc = 0x227dd8u;

    // 0x227dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227de4: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227DE8u;
    {
        const bool branch_taken_0x227de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DE8u;
        // 0x227dec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227de8) {
            ctx->pc = 0x227E00u;
            goto label_227e00;
        }
    }
    ctx->pc = 0x227DF0u;
    // 0x227df0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227DF0u;
    SET_GPR_U32(ctx, 31, 0x227DF8u);
    ctx->pc = 0x227DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DF0u;
    // 0x227df4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227DF0u, 0x227DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DF8u;
label_227df8:
    // 0x227df8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227DF8u;
    {
        const bool branch_taken_0x227df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF8u;
        // 0x227dfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227df8) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227E00u;
label_227e00:
    // 0x227e00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227e08:
    // 0x227e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e10: 0x3e00008  jr          $ra
    ctx->pc = 0x227E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E10u;
        // 0x227e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E18u;
}
