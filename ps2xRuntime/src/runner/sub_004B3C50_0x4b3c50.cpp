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

// Function: sub_004B3C50
// Address: 0x4b3c50 - 0x4b3c98
void sub_004B3C50_0x4b3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3C50_0x4b3c50");
#endif

    switch (ctx->pc) {
        case 0x4b3c70u: goto label_4b3c70;
        default: break;
    }

    ctx->pc = 0x4b3c50u;

    // 0x4b3c50: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4b3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4b3c54: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x4b3c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4b3c58: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x4b3c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x4b3c5c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4b3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4b3c60: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4b3c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4b3c64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b3c68: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B3C68u;
    {
        const bool branch_taken_0x4b3c68 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C68u;
        // 0x4b3c6c: 0xa482000e  sh          $v0, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c68) {
            ctx->pc = 0x4B3C8Cu;
            goto label_4b3c8c;
        }
    }
    ctx->pc = 0x4B3C70u;
label_4b3c70:
    // 0x4b3c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3c74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b3c78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4b3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4b3c7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b3c80: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4b3c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4b3c84: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B3C84u;
    {
        const bool branch_taken_0x4b3c84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4b3c84) {
            ctx->pc = 0x4B3C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3c70;
        }
    }
    ctx->pc = 0x4B3C8Cu;
label_4b3c8c:
    // 0x4b3c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3C94u;
    // 0x4b3c94: 0x0  nop
    ctx->pc = 0x4b3c94u;
    // NOP
    ctx->pc = 0x4b3c98u;
}
