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

// Function: sub_004DAEF0
// Address: 0x4daef0 - 0x4daf50
void sub_004DAEF0_0x4daef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAEF0_0x4daef0");
#endif

    switch (ctx->pc) {
        case 0x4daf10u: goto label_4daf10;
        case 0x4daf18u: goto label_4daf18;
        default: break;
    }

    ctx->pc = 0x4daef0u;

    // 0x4daef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4daef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4daef4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4daef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4daef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4daef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4daefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4daefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daf00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4daf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4daf04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4daf04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daf0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4daf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4daf10:
    // 0x4daf10: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DAF10u;
    SET_GPR_U32(ctx, 31, 0x4DAF18u);
    ctx->pc = 0x4DAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAF10u;
    // 0x4daf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DAF10u, 0x4DAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAF18u;
label_4daf18:
    // 0x4daf18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DAF18u;
    {
        const bool branch_taken_0x4daf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF18u;
        // 0x4daf1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf18) {
            ctx->pc = 0x4DAF2Cu;
            goto label_4daf2c;
        }
    }
    ctx->pc = 0x4DAF20u;
    // 0x4daf20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4daf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4daf24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DAF24u;
    {
        const bool branch_taken_0x4daf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF24u;
        // 0x4daf28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf24) {
            ctx->pc = 0x4DAF38u;
            goto label_4daf38;
        }
    }
    ctx->pc = 0x4DAF2Cu;
label_4daf2c:
    // 0x4daf2c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x4daf2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4daf30: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4DAF30u;
    {
        const bool branch_taken_0x4daf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF30u;
        // 0x4daf34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf30) {
            ctx->pc = 0x4DAF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4daf10;
        }
    }
    ctx->pc = 0x4DAF38u;
label_4daf38:
    // 0x4daf38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4daf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4daf3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4daf3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4daf40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4daf40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4daf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daf48: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF48u;
        // 0x4daf4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAF50u;
}
