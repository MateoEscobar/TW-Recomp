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

// Function: sub_00338680
// Address: 0x338680 - 0x3386d8
void sub_00338680_0x338680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338680_0x338680");
#endif

    switch (ctx->pc) {
        case 0x338690u: goto label_338690;
        default: break;
    }

    ctx->pc = 0x338680u;

    // 0x338680: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x338680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x338684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x338684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338688: 0x24435628  addiu       $v1, $v0, 0x5628
    ctx->pc = 0x338688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22056));
    // 0x33868c: 0x0  nop
    ctx->pc = 0x33868cu;
    // NOP
label_338690:
    // 0x338690: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x338690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x338694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x338694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x338698: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x338698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x33869c: 0x0  nop
    ctx->pc = 0x33869cu;
    // NOP
    // 0x3386a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3386A0u;
    {
        const bool branch_taken_0x3386a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386A0u;
        // 0x3386a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386a0) {
            ctx->pc = 0x338690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338690;
        }
    }
    ctx->pc = 0x3386A8u;
    // 0x3386a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3386a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3386ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3386ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3386B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386ACu;
        // 0x3386b0: 0xac4027e0  sw          $zero, 0x27E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3386ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3386B4u;
    // 0x3386b4: 0x0  nop
    ctx->pc = 0x3386b4u;
    // NOP
    // 0x3386b8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3386b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x3386bc: 0x0  nop
    ctx->pc = 0x3386bcu;
    // NOP
    // 0x3386c0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3386c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x3386c4: 0x0  nop
    ctx->pc = 0x3386c4u;
    // NOP
    // 0x3386c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3386c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3386cc: 0x0  nop
    ctx->pc = 0x3386ccu;
    // NOP
    // 0x3386d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3386d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3386d4: 0x0  nop
    ctx->pc = 0x3386d4u;
    // NOP
    ctx->pc = 0x3386d8u;
}
