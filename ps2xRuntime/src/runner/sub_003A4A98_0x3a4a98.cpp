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

// Function: sub_003A4A98
// Address: 0x3a4a98 - 0x3a4ad8
void sub_003A4A98_0x3a4a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4A98_0x3a4a98");
#endif

    ctx->pc = 0x3a4a98u;

    // 0x3a4a98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4a9c: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x3a4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a4aa0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3a4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3a4aa4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4AA4u;
    {
        const bool branch_taken_0x3a4aa4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3A4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AA4u;
        // 0x3a4aa8: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4aa4) {
            ctx->pc = 0x3A4ACCu;
            goto label_3a4acc;
        }
    }
    ctx->pc = 0x3A4AACu;
    // 0x3a4aac: 0x94620084  lhu         $v0, 0x84($v1)
    ctx->pc = 0x3a4aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3a4ab0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3a4ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4ab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4AB4u;
    {
        const bool branch_taken_0x3a4ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AB4u;
        // 0x3a4ab8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ab4) {
            ctx->pc = 0x3A4ACCu;
            goto label_3a4acc;
        }
    }
    ctx->pc = 0x3A4ABCu;
    // 0x3a4abc: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x3a4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3a4ac0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3a4ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a4ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4ac8: 0xa0450008  sb          $a1, 0x8($v0)
    ctx->pc = 0x3a4ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
label_3a4acc:
    // 0x3a4acc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4AD4u;
    // 0x3a4ad4: 0x0  nop
    ctx->pc = 0x3a4ad4u;
    // NOP
    ctx->pc = 0x3a4ad8u;
}
