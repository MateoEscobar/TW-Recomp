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

// Function: sub_00299EF0
// Address: 0x299ef0 - 0x299f18
void sub_00299EF0_0x299ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299EF0_0x299ef0");
#endif

    ctx->pc = 0x299ef0u;

    // 0x299ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299ef4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299EF4u;
    {
        const bool branch_taken_0x299ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x299EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EF4u;
        // 0x299ef8: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ef4) {
            ctx->pc = 0x299F08u;
            goto label_299f08;
        }
    }
    ctx->pc = 0x299EFCu;
    // 0x299efc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x299efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x299f00: 0x3e00008  jr          $ra
    ctx->pc = 0x299F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F00u;
        // 0x299f04: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F08u;
label_299f08:
    // 0x299f08: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x299f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x299f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x299F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F0Cu;
        // 0x299f10: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F14u;
    // 0x299f14: 0x0  nop
    ctx->pc = 0x299f14u;
    // NOP
    ctx->pc = 0x299f18u;
}
