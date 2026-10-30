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

// Function: sub_0013B780
// Address: 0x13b780 - 0x13b7b8
void sub_0013B780_0x13b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B780_0x13b780");
#endif

    ctx->pc = 0x13b780u;

    // 0x13b780: 0x84830350  lh          $v1, 0x350($a0)
    ctx->pc = 0x13b780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x13b784: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13b784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13b788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13b78c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b790: 0x7c6201e0  sq          $v0, 0x1E0($v1)
    ctx->pc = 0x13b790u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 480), GPR_VEC(ctx, 2));
    // 0x13b794: 0x84820350  lh          $v0, 0x350($a0)
    ctx->pc = 0x13b794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x13b798: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x13b798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x13b79c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B79Cu;
    {
        const bool branch_taken_0x13b79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B79Cu;
        // 0x13b7a0: 0x94830350  lhu         $v1, 0x350($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b79c) {
            ctx->pc = 0x13B7ACu;
            goto label_13b7ac;
        }
    }
    ctx->pc = 0x13B7A4u;
    // 0x13b7a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x13b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13b7a8: 0xa4820350  sh          $v0, 0x350($a0)
    ctx->pc = 0x13b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 848), (uint16_t)GPR_U32(ctx, 2));
label_13b7ac:
    // 0x13b7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B7B4u;
    // 0x13b7b4: 0x0  nop
    ctx->pc = 0x13b7b4u;
    // NOP
    ctx->pc = 0x13b7b8u;
}
