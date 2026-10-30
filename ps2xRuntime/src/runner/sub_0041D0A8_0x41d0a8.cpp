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

// Function: sub_0041D0A8
// Address: 0x41d0a8 - 0x41d0d0
void sub_0041D0A8_0x41d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D0A8_0x41d0a8");
#endif

    ctx->pc = 0x41d0a8u;

    // 0x41d0a8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41d0ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41d0b0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41d0b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41d0b4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41D0B4u;
    {
        const bool branch_taken_0x41d0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x41D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0B4u;
        // 0x41d0b8: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d0b4) {
            ctx->pc = 0x41D0C4u;
            goto label_41d0c4;
        }
    }
    ctx->pc = 0x41D0BCu;
    // 0x41d0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x41D0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0BCu;
        // 0x41d0c0: 0xa4850328  sh          $a1, 0x328($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 808), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D0C4u;
label_41d0c4:
    // 0x41d0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x41D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0C4u;
        // 0x41d0c8: 0xa4820328  sh          $v0, 0x328($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 808), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D0CCu;
    // 0x41d0cc: 0x0  nop
    ctx->pc = 0x41d0ccu;
    // NOP
    ctx->pc = 0x41d0d0u;
}
