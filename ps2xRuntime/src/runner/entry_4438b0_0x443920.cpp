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

// Function: entry_4438b0
// Address: 0x4438b0 - 0x443920
void entry_4438b0_0x443920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_4438b0_0x443920");
#endif

    switch (ctx->pc) {
        case 0x4438c8u: goto label_4438c8;
        default: break;
    }

    ctx->pc = 0x4438b0u;

    // 0x4438b0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4438b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4438b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4438b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4438b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4438b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4438bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4438BCu;
    {
        const bool branch_taken_0x4438bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4438BCu;
        // 0x4438c0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4438bc) {
            ctx->pc = 0x4438ECu;
            goto label_4438ec;
        }
    }
    ctx->pc = 0x4438C4u;
    // 0x4438c4: 0x0  nop
    ctx->pc = 0x4438c4u;
    // NOP
label_4438c8:
    // 0x4438c8: 0x42000039  di
    ctx->pc = 0x4438c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4438cc: 0x40f  sync.p
    ctx->pc = 0x4438ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4438d0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4438d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x4438d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4438d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4438d8: 0x0  nop
    ctx->pc = 0x4438d8u;
    // NOP
    // 0x4438dc: 0x0  nop
    ctx->pc = 0x4438dcu;
    // NOP
    // 0x4438e0: 0x0  nop
    ctx->pc = 0x4438e0u;
    // NOP
    // 0x4438e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4438E4u;
    {
        const bool branch_taken_0x4438e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4438e4) {
            ctx->pc = 0x4438C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4438c8;
        }
    }
    ctx->pc = 0x4438ECu;
label_4438ec:
    // 0x4438ec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4438ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x4438f0: 0x40f  sync.p
    ctx->pc = 0x4438f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4438f4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4438f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4438f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x4438f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x4438fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4438fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x443900: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x443900u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x443904: 0x40f  sync.p
    ctx->pc = 0x443904u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x443908: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x443908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x44390c: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x44390cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x443910: 0x40f  sync.p
    ctx->pc = 0x443910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x443914: 0x42000018  eret
    ctx->pc = 0x443914u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x443918: 0x3e00008  jr          $ra
    ctx->pc = 0x443918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443920u;
}
