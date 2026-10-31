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

// Function: sub_003065B0
// Address: 0x3065b0 - 0x3065f8
void sub_003065B0_0x3065b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003065B0_0x3065b0");
#endif

    switch (ctx->pc) {
        case 0x3065c8u: goto label_3065c8;
        default: break;
    }

    ctx->pc = 0x3065b0u;

    // 0x3065b0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3065b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3065b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3065b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3065b8: 0x8d06a1a0  lw          $a2, -0x5E60($t0)
    ctx->pc = 0x3065b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EA1A0u));
    // 0x3065bc: 0x2445a1b0  addiu       $a1, $v0, -0x5E50
    ctx->pc = 0x3065bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x3065c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3065c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3065c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3065c8:
    // 0x3065c8: 0x54850006  bnel        $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3065C8u;
    {
        const bool branch_taken_0x3065c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3065c8) {
            ctx->pc = 0x3065CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3065C8u;
            // 0x3065cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065E4u;
            goto label_3065e4;
        }
    }
    ctx->pc = 0x3065D0u;
    // 0x3065d0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3065d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3065d4: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3065d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3065d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3065dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3065DCu;
    {
        const bool branch_taken_0x3065dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065DCu;
        // 0x3065e0: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065dc) {
            ctx->pc = 0x3065F0u;
            goto label_3065f0;
        }
    }
    ctx->pc = 0x3065E4u;
label_3065e4:
    // 0x3065e4: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x3065e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x3065e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3065E8u;
    {
        const bool branch_taken_0x3065e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065E8u;
        // 0x3065ec: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065e8) {
            ctx->pc = 0x3065C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3065F0u;
label_3065f0:
    // 0x3065f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3065F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3065F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065F0u;
        // 0x3065f4: 0xad06a1a0  sw          $a2, -0x5E60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294943136), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3065F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3065F8u;
}
