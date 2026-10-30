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

// Function: sub_0028D8C0
// Address: 0x28d8c0 - 0x28d910
void sub_0028D8C0_0x28d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D8C0_0x28d8c0");
#endif

    switch (ctx->pc) {
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d8e0u: goto label_28d8e0;
        default: break;
    }

    ctx->pc = 0x28d8c0u;

    // 0x28d8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28d8c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28d8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d8cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D8CCu;
    {
        const bool branch_taken_0x28d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8CCu;
        // 0x28d8d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8cc) {
            ctx->pc = 0x28D8E0u;
            goto label_28d8e0;
        }
    }
    ctx->pc = 0x28D8D4u;
    // 0x28d8d4: 0x0  nop
    ctx->pc = 0x28d8d4u;
    // NOP
label_28d8d8:
    // 0x28d8d8: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x28D8D8u;
    SET_GPR_U32(ctx, 31, 0x28D8E0u);
    ctx->pc = 0x28D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8D8u;
    // 0x28d8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28D8D8u, 0x28D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8E0u;
label_28d8e0:
    // 0x28d8e0: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28d8e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d8e4: 0x8202002d  lb          $v0, 0x2D($s0)
    ctx->pc = 0x28d8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x28d8e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28d8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d8ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28D8ECu;
    {
        const bool branch_taken_0x28d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8ECu;
        // 0x28d8f0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8ec) {
            ctx->pc = 0x28D8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d8d8;
        }
    }
    ctx->pc = 0x28D8F4u;
    // 0x28d8f4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d8f8: 0xa203002d  sb          $v1, 0x2D($s0)
    ctx->pc = 0x28d8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d8fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28d8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d904: 0x3e00008  jr          $ra
    ctx->pc = 0x28D904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D904u;
        // 0x28d908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D90Cu;
    // 0x28d90c: 0x0  nop
    ctx->pc = 0x28d90cu;
    // NOP
    ctx->pc = 0x28d910u;
}
