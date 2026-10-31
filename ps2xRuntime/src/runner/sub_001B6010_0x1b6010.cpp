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

// Function: sub_001B6010
// Address: 0x1b6010 - 0x1b6078
void sub_001B6010_0x1b6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6010_0x1b6010");
#endif

    switch (ctx->pc) {
        case 0x1b602cu: goto label_1b602c;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6050u: goto label_1b6050;
        default: break;
    }

    ctx->pc = 0x1b6010u;

    // 0x1b6010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b601c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6024: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1B6024u;
    SET_GPR_U32(ctx, 31, 0x1B602Cu);
    ctx->pc = 0x1B6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6024u;
    // 0x1b6028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1B6024u, 0x1B602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B602Cu;
label_1b602c:
    // 0x1b602c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B602Cu;
    {
        const bool branch_taken_0x1b602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B602Cu;
        // 0x1b6030: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b602c) {
            ctx->pc = 0x1B6040u;
            goto label_1b6040;
        }
    }
    ctx->pc = 0x1B6034u;
    // 0x1b6034: 0xc06d81e  jal         func_1B6078
    ctx->pc = 0x1B6034u;
    SET_GPR_U32(ctx, 31, 0x1B603Cu);
    ctx->pc = 0x1B6038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6034u;
    // 0x1b6038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6078u, 0x1B6034u, 0x1B603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B603Cu;
label_1b603c:
    // 0x1b603c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b6040:
    // 0x1b6040: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6040u;
    {
        const bool branch_taken_0x1b6040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6040) {
            ctx->pc = 0x1B6044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6040u;
            // 0x1b6044: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6054u;
            goto label_1b6054;
        }
    }
    ctx->pc = 0x1B6048u;
    // 0x1b6048: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1B6048u;
    SET_GPR_U32(ctx, 31, 0x1B6050u);
    ctx->pc = 0x1B604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6048u;
    // 0x1b604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1B6048u, 0x1B6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6050u;
label_1b6050:
    // 0x1b6050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b6050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6054:
    // 0x1b6054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b605c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B605Cu;
        // 0x1b6060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6064u;
    // 0x1b6064: 0x0  nop
    ctx->pc = 0x1b6064u;
    // NOP
    // 0x1b6068: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b606c: 0x0  nop
    ctx->pc = 0x1b606cu;
    // NOP
    // 0x1b6070: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b6074: 0x0  nop
    ctx->pc = 0x1b6074u;
    // NOP
    ctx->pc = 0x1b6078u;
}
