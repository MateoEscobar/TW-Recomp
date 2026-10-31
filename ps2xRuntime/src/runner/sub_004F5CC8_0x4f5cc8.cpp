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

// Function: sub_004F5CC8
// Address: 0x4f5cc8 - 0x4f5d28
void sub_004F5CC8_0x4f5cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5CC8_0x4f5cc8");
#endif

    switch (ctx->pc) {
        case 0x4f5ce8u: goto label_4f5ce8;
        case 0x4f5cf0u: goto label_4f5cf0;
        default: break;
    }

    ctx->pc = 0x4f5cc8u;

    // 0x4f5cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f5cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f5ccc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4f5cd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f5cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5cd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4f5cdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f5cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5ce4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f5ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5ce8:
    // 0x4f5ce8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4F5CE8u;
    SET_GPR_U32(ctx, 31, 0x4F5CF0u);
    ctx->pc = 0x4F5CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5CE8u;
    // 0x4f5cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4F5CE8u, 0x4F5CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5CF0u;
label_4f5cf0:
    // 0x4f5cf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5CF0u;
    {
        const bool branch_taken_0x4f5cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5CF0u;
        // 0x4f5cf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5cf0) {
            ctx->pc = 0x4F5D04u;
            goto label_4f5d04;
        }
    }
    ctx->pc = 0x4F5CF8u;
    // 0x4f5cf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f5cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5CFCu;
    {
        const bool branch_taken_0x4f5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5CFCu;
        // 0x4f5d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5cfc) {
            ctx->pc = 0x4F5D10u;
            goto label_4f5d10;
        }
    }
    ctx->pc = 0x4F5D04u;
label_4f5d04:
    // 0x4f5d04: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x4f5d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x4f5d08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4F5D08u;
    {
        const bool branch_taken_0x4f5d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D08u;
        // 0x4f5d0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d08) {
            ctx->pc = 0x4F5CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f5ce8;
        }
    }
    ctx->pc = 0x4F5D10u;
label_4f5d10:
    // 0x4f5d10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f5d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f5d14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f5d18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f5d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5d20: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D20u;
        // 0x4f5d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5D28u;
}
