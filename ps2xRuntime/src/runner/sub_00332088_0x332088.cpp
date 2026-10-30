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

// Function: sub_00332088
// Address: 0x332088 - 0x3320c8
void sub_00332088_0x332088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332088_0x332088");
#endif

    switch (ctx->pc) {
        case 0x3320a0u: goto label_3320a0;
        default: break;
    }

    ctx->pc = 0x332088u;

    // 0x332088: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x332088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x33208c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33208cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332090: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x332090u;
    {
        const bool branch_taken_0x332090 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x332094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332090u;
        // 0x332094: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332090) {
            ctx->pc = 0x3320BCu;
            goto label_3320bc;
        }
    }
    ctx->pc = 0x332098u;
    // 0x332098: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x332098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33209c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3320a0:
    // 0x3320a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3320a4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3320a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3320a8: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x3320a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x3320ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3320acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3320b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3320b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3320b4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3320B4u;
    {
        const bool branch_taken_0x3320b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3320B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320B4u;
        // 0x3320b8: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3320b4) {
            ctx->pc = 0x3320A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3320a0;
        }
    }
    ctx->pc = 0x3320BCu;
label_3320bc:
    // 0x3320bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3320BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3320C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320BCu;
        // 0x3320c0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3320BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3320C4u;
    // 0x3320c4: 0x0  nop
    ctx->pc = 0x3320c4u;
    // NOP
    ctx->pc = 0x3320c8u;
}
