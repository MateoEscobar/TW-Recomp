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

// Function: sub_004DE0C8
// Address: 0x4de0c8 - 0x4de130
void sub_004DE0C8_0x4de0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE0C8_0x4de0c8");
#endif

    switch (ctx->pc) {
        case 0x4de0e8u: goto label_4de0e8;
        case 0x4de0f0u: goto label_4de0f0;
        default: break;
    }

    ctx->pc = 0x4de0c8u;

    // 0x4de0c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4de0cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4de0d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4de0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de0d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4de0dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4de0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de0e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4de0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de0e8:
    // 0x4de0e8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DE0E8u;
    SET_GPR_U32(ctx, 31, 0x4DE0F0u);
    ctx->pc = 0x4DE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE0E8u;
    // 0x4de0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DE0E8u, 0x4DE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE0F0u;
label_4de0f0:
    // 0x4de0f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4de0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4de0f4: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE0F4u;
    {
        const bool branch_taken_0x4de0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4DE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE0F4u;
        // 0x4de0f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de0f4) {
            ctx->pc = 0x4DE104u;
            goto label_4de104;
        }
    }
    ctx->pc = 0x4DE0FCu;
    // 0x4de0fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4DE0FCu;
    {
        const bool branch_taken_0x4de0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE0FCu;
        // 0x4de100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de0fc) {
            ctx->pc = 0x4DE114u;
            goto label_4de114;
        }
    }
    ctx->pc = 0x4DE104u;
label_4de104:
    // 0x4de104: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x4de104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4de108: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4DE108u;
    {
        const bool branch_taken_0x4de108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE108u;
        // 0x4de10c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de108) {
            ctx->pc = 0x4DE0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de0e8;
        }
    }
    ctx->pc = 0x4DE110u;
    // 0x4de110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4de110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de114:
    // 0x4de114: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de118: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de11c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de124: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE124u;
        // 0x4de128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE12Cu;
    // 0x4de12c: 0x0  nop
    ctx->pc = 0x4de12cu;
    // NOP
    ctx->pc = 0x4de130u;
}
