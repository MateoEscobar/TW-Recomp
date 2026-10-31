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

// Function: sub_003429E8
// Address: 0x3429e8 - 0x342a30
void sub_003429E8_0x3429e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003429E8_0x3429e8");
#endif

    switch (ctx->pc) {
        case 0x342a10u: goto label_342a10;
        default: break;
    }

    ctx->pc = 0x3429e8u;

    // 0x3429e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3429e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3429ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3429ECu;
    {
        const bool branch_taken_0x3429ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429ECu;
        // 0x3429f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429ec) {
            ctx->pc = 0x3429FCu;
            goto label_3429fc;
        }
    }
    ctx->pc = 0x3429F4u;
    // 0x3429f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3429F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3429F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429F4u;
        // 0x3429f8: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3429FCu;
label_3429fc:
    // 0x3429fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3429fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342a00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x342A00u;
    {
        const bool branch_taken_0x342a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342a00) {
            ctx->pc = 0x342A28u;
            goto label_342a28;
        }
    }
    ctx->pc = 0x342A08u;
    // 0x342a08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342a0c: 0x0  nop
    ctx->pc = 0x342a0cu;
    // NOP
label_342a10:
    // 0x342a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342a14: 0x0  nop
    ctx->pc = 0x342a14u;
    // NOP
    // 0x342a18: 0x0  nop
    ctx->pc = 0x342a18u;
    // NOP
    // 0x342a1c: 0x0  nop
    ctx->pc = 0x342a1cu;
    // NOP
    // 0x342a20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x342A20u;
    {
        const bool branch_taken_0x342a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342a20) {
            ctx->pc = 0x342A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342A20u;
            // 0x342a24: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342a10;
        }
    }
    ctx->pc = 0x342A28u;
label_342a28:
    // 0x342a28: 0x3e00008  jr          $ra
    ctx->pc = 0x342A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A28u;
        // 0x342a2c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A30u;
}
