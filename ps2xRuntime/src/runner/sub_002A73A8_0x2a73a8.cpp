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

// Function: sub_002A73A8
// Address: 0x2a73a8 - 0x2a73f0
void sub_002A73A8_0x2a73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A73A8_0x2a73a8");
#endif

    switch (ctx->pc) {
        case 0x2a73c0u: goto label_2a73c0;
        default: break;
    }

    ctx->pc = 0x2a73a8u;

    // 0x2a73a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a73ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a73acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73b0: 0x24469440  addiu       $a2, $v0, -0x6BC0
    ctx->pc = 0x2a73b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x2a73b4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2a73b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2a73b8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2a73b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2a73bc: 0x0  nop
    ctx->pc = 0x2a73bcu;
    // NOP
label_2a73c0:
    // 0x2a73c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a73c4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A73C4u;
    {
        const bool branch_taken_0x2a73c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73C4u;
        // 0x2a73c8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73c4) {
            ctx->pc = 0x2A73D4u;
            goto label_2a73d4;
        }
    }
    ctx->pc = 0x2A73CCu;
    // 0x2a73cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73CCu;
        // 0x2a73d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73D4u;
label_2a73d4:
    // 0x2a73d4: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2a73d8: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a73dc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x2a73dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a73e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A73E0u;
    {
        const bool branch_taken_0x2a73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73E0u;
        // 0x2a73e4: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73e0) {
            ctx->pc = 0x2A73C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a73c0;
        }
    }
    ctx->pc = 0x2A73E8u;
    // 0x2a73e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73E8u;
        // 0x2a73ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73F0u;
}
