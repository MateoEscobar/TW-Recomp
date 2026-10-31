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

// Function: sub_00326DC8
// Address: 0x326dc8 - 0x326e08
void sub_00326DC8_0x326dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326DC8_0x326dc8");
#endif

    switch (ctx->pc) {
        case 0x326de8u: goto label_326de8;
        case 0x326df8u: goto label_326df8;
        default: break;
    }

    ctx->pc = 0x326dc8u;

    // 0x326dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326dd0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x326dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x326dd4: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326DD4u;
    {
        const bool branch_taken_0x326dd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x326DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DD4u;
        // 0x326dd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326dd4) {
            ctx->pc = 0x326DF0u;
            goto label_326df0;
        }
    }
    ctx->pc = 0x326DDCu;
    // 0x326ddc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x326ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326de0: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x326DE0u;
    SET_GPR_U32(ctx, 31, 0x326DE8u);
    ctx->pc = 0x326DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DE0u;
    // 0x326de4: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x326DE0u, 0x326DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DE8u;
label_326de8:
    // 0x326de8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326DE8u;
    {
        const bool branch_taken_0x326de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DE8u;
        // 0x326dec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326de8) {
            ctx->pc = 0x326DFCu;
            goto label_326dfc;
        }
    }
    ctx->pc = 0x326DF0u;
label_326df0:
    // 0x326df0: 0xc0c9b2a  jal         func_326CA8
    ctx->pc = 0x326DF0u;
    SET_GPR_U32(ctx, 31, 0x326DF8u);
    ctx->pc = 0x326DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DF0u;
    // 0x326df4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CA8u, 0x326DF0u, 0x326DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DF8u;
label_326df8:
    // 0x326df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326dfc:
    // 0x326dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x326DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DFCu;
        // 0x326e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326E04u;
    // 0x326e04: 0x0  nop
    ctx->pc = 0x326e04u;
    // NOP
    ctx->pc = 0x326e08u;
}
