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

// Function: sub_002510A8
// Address: 0x2510a8 - 0x2510f8
void sub_002510A8_0x2510a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002510A8_0x2510a8");
#endif

    switch (ctx->pc) {
        case 0x2510c0u: goto label_2510c0;
        default: break;
    }

    ctx->pc = 0x2510a8u;

    // 0x2510a8: 0x84a60014  lh          $a2, 0x14($a1)
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2510ac: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2510ACu;
    {
        const bool branch_taken_0x2510ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2510B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ACu;
        // 0x2510b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510ac) {
            ctx->pc = 0x2510ECu;
            goto label_2510ec;
        }
    }
    ctx->pc = 0x2510B4u;
    // 0x2510b4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2510b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2510b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2510b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2510bc: 0x0  nop
    ctx->pc = 0x2510bcu;
    // NOP
label_2510c0:
    // 0x2510c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2510c4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2510C4u;
    {
        const bool branch_taken_0x2510c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2510C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C4u;
        // 0x2510c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510c4) {
            ctx->pc = 0x2510E0u;
            goto label_2510e0;
        }
    }
    ctx->pc = 0x2510CCu;
    // 0x2510cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2510d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2510d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510d4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x2510d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2510d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2510D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2510DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510D8u;
        // 0x2510dc: 0xe3100b  movn        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2510E0u;
label_2510e0:
    // 0x2510e0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2510e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2510e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2510E4u;
    {
        const bool branch_taken_0x2510e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2510E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510E4u;
        // 0x2510e8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510e4) {
            ctx->pc = 0x2510C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2510c0;
        }
    }
    ctx->pc = 0x2510ECu;
label_2510ec:
    // 0x2510ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2510ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2510F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ECu;
        // 0x2510f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2510F4u;
    // 0x2510f4: 0x0  nop
    ctx->pc = 0x2510f4u;
    // NOP
    ctx->pc = 0x2510f8u;
}
