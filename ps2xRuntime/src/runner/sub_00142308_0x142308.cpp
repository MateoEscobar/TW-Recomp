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

// Function: sub_00142308
// Address: 0x142308 - 0x142368
void sub_00142308_0x142308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142308_0x142308");
#endif

    switch (ctx->pc) {
        case 0x142330u: goto label_142330;
        default: break;
    }

    ctx->pc = 0x142308u;

    // 0x142308: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x142308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14230c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x142310: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x142310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x142314: 0xace00334  sw          $zero, 0x334($a3)
    ctx->pc = 0x142314u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 820), GPR_U32(ctx, 0));
    // 0x142318: 0xace00338  sw          $zero, 0x338($a3)
    ctx->pc = 0x142318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 824), GPR_U32(ctx, 0));
    // 0x14231c: 0x244a16c0  addiu       $t2, $v0, 0x16C0
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x142320: 0x24691790  addiu       $t1, $v1, 0x1790
    ctx->pc = 0x142320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x142324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142328: 0x24e602ec  addiu       $a2, $a3, 0x2EC
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 748));
    // 0x14232c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x14232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_142330:
    // 0x142330: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x142330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x142334: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x142338: 0x2d040008  sltiu       $a0, $t0, 0x8
    ctx->pc = 0x142338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14233c: 0x7ca201e0  sq          $v0, 0x1E0($a1)
    ctx->pc = 0x14233cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 480), GPR_VEC(ctx, 2));
    // 0x142340: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x142340u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x142344: 0x7ca30260  sq          $v1, 0x260($a1)
    ctx->pc = 0x142344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 608), GPR_VEC(ctx, 3));
    // 0x142348: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x142348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x14234c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x142350: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x142350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x142354: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x142354u;
    {
        const bool branch_taken_0x142354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142354u;
        // 0x142358: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142354) {
            ctx->pc = 0x142330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142330;
        }
    }
    ctx->pc = 0x14235Cu;
    // 0x14235c: 0x3e00008  jr          $ra
    ctx->pc = 0x14235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14235Cu;
        // 0x142360: 0xace0033c  sw          $zero, 0x33C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142364u;
    // 0x142364: 0x0  nop
    ctx->pc = 0x142364u;
    // NOP
    ctx->pc = 0x142368u;
}
