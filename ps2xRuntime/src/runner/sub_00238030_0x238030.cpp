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

// Function: sub_00238030
// Address: 0x238030 - 0x238078
void sub_00238030_0x238030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238030_0x238030");
#endif

    switch (ctx->pc) {
        case 0x23804cu: goto label_23804c;
        case 0x238054u: goto label_238054;
        default: break;
    }

    ctx->pc = 0x238030u;

    // 0x238030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238034: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23803c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238044: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238044u;
    SET_GPR_U32(ctx, 31, 0x23804Cu);
    ctx->pc = 0x238048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238044u;
    // 0x238048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238044u, 0x23804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23804Cu;
label_23804c:
    // 0x23804c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23804Cu;
    SET_GPR_U32(ctx, 31, 0x238054u);
    ctx->pc = 0x238050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23804Cu;
    // 0x238050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23804Cu, 0x238054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238054u;
    {
        const bool branch_taken_0x238054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238054) {
            ctx->pc = 0x238058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238054u;
            // 0x238058: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23806Cu;
            goto label_23806c;
        }
    }
    ctx->pc = 0x23805Cu;
    // 0x23805c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x238060: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x238060u;
    {
        const bool branch_taken_0x238060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238060) {
            ctx->pc = 0x238064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238060u;
            // 0x238064: 0xac5002b4  sw          $s0, 0x2B4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238068u;
            goto label_238068;
        }
    }
    ctx->pc = 0x238068u;
label_238068:
    // 0x238068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23806c:
    // 0x23806c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23806cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238070: 0x3e00008  jr          $ra
    ctx->pc = 0x238070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238070u;
        // 0x238074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238078u;
}
