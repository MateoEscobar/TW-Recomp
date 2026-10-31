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

// Function: sub_003407A0
// Address: 0x3407a0 - 0x3407f8
void sub_003407A0_0x3407a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003407A0_0x3407a0");
#endif

    switch (ctx->pc) {
        case 0x3407d0u: goto label_3407d0;
        default: break;
    }

    ctx->pc = 0x3407a0u;

    // 0x3407a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3407a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3407A4u;
    {
        const bool branch_taken_0x3407a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3407A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407A4u;
        // 0x3407a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407a4) {
            ctx->pc = 0x3407BCu;
            goto label_3407bc;
        }
    }
    ctx->pc = 0x3407ACu;
    // 0x3407ac: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x3407acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x3407b0: 0xaca000cc  sw          $zero, 0xCC($a1)
    ctx->pc = 0x3407b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 0));
    // 0x3407b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3407B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3407B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407B4u;
        // 0x3407b8: 0xaca000c8  sw          $zero, 0xC8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3407B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3407BCu;
label_3407bc:
    // 0x3407bc: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x3407bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x3407c0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3407C0u;
    {
        const bool branch_taken_0x3407c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3407c0) {
            ctx->pc = 0x3407C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3407C0u;
            // 0x3407c4: 0xac6500c8  sw          $a1, 0xC8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3407ECu;
            goto label_3407ec;
        }
    }
    ctx->pc = 0x3407C8u;
    // 0x3407c8: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x3407c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x3407cc: 0x0  nop
    ctx->pc = 0x3407ccu;
    // NOP
label_3407d0:
    // 0x3407d0: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x3407d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x3407d4: 0x0  nop
    ctx->pc = 0x3407d4u;
    // NOP
    // 0x3407d8: 0x0  nop
    ctx->pc = 0x3407d8u;
    // NOP
    // 0x3407dc: 0x0  nop
    ctx->pc = 0x3407dcu;
    // NOP
    // 0x3407e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3407E0u;
    {
        const bool branch_taken_0x3407e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3407e0) {
            ctx->pc = 0x3407E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3407E0u;
            // 0x3407e4: 0x8c6300c8  lw          $v1, 0xC8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3407D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3407d0;
        }
    }
    ctx->pc = 0x3407E8u;
    // 0x3407e8: 0xac6500c8  sw          $a1, 0xC8($v1)
    ctx->pc = 0x3407e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 5));
label_3407ec:
    // 0x3407ec: 0xaca300cc  sw          $v1, 0xCC($a1)
    ctx->pc = 0x3407ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 3));
    // 0x3407f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3407F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3407F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407F0u;
        // 0x3407f4: 0xaca000c8  sw          $zero, 0xC8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3407F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3407F8u;
}
