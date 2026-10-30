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

// Function: sub_004212A0
// Address: 0x4212a0 - 0x4212c0
void sub_004212A0_0x4212a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004212A0_0x4212a0");
#endif

    ctx->pc = 0x4212a0u;

    // 0x4212a0: 0x908200bd  lbu         $v0, 0xBD($a0)
    ctx->pc = 0x4212a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 189)));
    // 0x4212a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4212A4u;
    {
        const bool branch_taken_0x4212a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4212a4) {
            ctx->pc = 0x4212A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4212A4u;
            // 0x4212a8: 0xa08000bd  sb          $zero, 0xBD($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 189), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4212B4u;
            goto label_4212b4;
        }
    }
    ctx->pc = 0x4212ACu;
    // 0x4212ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4212ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4212B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212ACu;
        // 0x4212b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4212ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4212B4u;
label_4212b4:
    // 0x4212b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4212B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4212B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212B4u;
        // 0x4212b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4212B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4212BCu;
    // 0x4212bc: 0x0  nop
    ctx->pc = 0x4212bcu;
    // NOP
    ctx->pc = 0x4212c0u;
}
