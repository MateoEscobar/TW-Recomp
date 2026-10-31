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

// Function: sub_001047D0
// Address: 0x1047d0 - 0x104818
void sub_001047D0_0x1047d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001047D0_0x1047d0");
#endif

    switch (ctx->pc) {
        case 0x1047e8u: goto label_1047e8;
        default: break;
    }

    ctx->pc = 0x1047d0u;

    // 0x1047d0: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x1047d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1047d4: 0x24a60090  addiu       $a2, $a1, 0x90
    ctx->pc = 0x1047d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x1047d8: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1047dc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1047dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1047e0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1047e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1047e4: 0x0  nop
    ctx->pc = 0x1047e4u;
    // NOP
label_1047e8:
    // 0x1047e8: 0xcc800000  pref        0x00, 0x0($a0)
    ctx->pc = 0x1047e8u;
    // PREF instruction (ignored)
    // 0x1047ec: 0xccc00000  pref        0x00, 0x0($a2)
    ctx->pc = 0x1047ecu;
    // PREF instruction (ignored)
    // 0x1047f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1047f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1047f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1047f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1047f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1047f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1047fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1047fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x104800: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x104800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x104804: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x104804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x104808: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x104808u;
    {
        const bool branch_taken_0x104808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104808u;
        // 0x10480c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104808) {
            ctx->pc = 0x1047E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1047e8;
        }
    }
    ctx->pc = 0x104810u;
    // 0x104810: 0x3e00008  jr          $ra
    ctx->pc = 0x104810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104818u;
}
