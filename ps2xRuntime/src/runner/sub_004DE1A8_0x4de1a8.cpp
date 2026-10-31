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

// Function: sub_004DE1A8
// Address: 0x4de1a8 - 0x4de208
void sub_004DE1A8_0x4de1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE1A8_0x4de1a8");
#endif

    switch (ctx->pc) {
        case 0x4de1c8u: goto label_4de1c8;
        case 0x4de1d0u: goto label_4de1d0;
        default: break;
    }

    ctx->pc = 0x4de1a8u;

    // 0x4de1a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4de1ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4de1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4de1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de1b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4de1bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4de1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de1c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de1c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4de1c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de1c8:
    // 0x4de1c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DE1C8u;
    SET_GPR_U32(ctx, 31, 0x4DE1D0u);
    ctx->pc = 0x4DE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE1C8u;
    // 0x4de1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DE1C8u, 0x4DE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE1D0u;
label_4de1d0:
    // 0x4de1d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DE1D0u;
    {
        const bool branch_taken_0x4de1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE1D0u;
        // 0x4de1d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de1d0) {
            ctx->pc = 0x4DE1E4u;
            goto label_4de1e4;
        }
    }
    ctx->pc = 0x4DE1D8u;
    // 0x4de1d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4de1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4de1dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DE1DCu;
    {
        const bool branch_taken_0x4de1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE1DCu;
        // 0x4de1e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de1dc) {
            ctx->pc = 0x4DE1F0u;
            goto label_4de1f0;
        }
    }
    ctx->pc = 0x4DE1E4u;
label_4de1e4:
    // 0x4de1e4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x4de1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4de1e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4DE1E8u;
    {
        const bool branch_taken_0x4de1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE1E8u;
        // 0x4de1ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de1e8) {
            ctx->pc = 0x4DE1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de1c8;
        }
    }
    ctx->pc = 0x4DE1F0u;
label_4de1f0:
    // 0x4de1f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de1f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de1f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de200: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE200u;
        // 0x4de204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE208u;
}
