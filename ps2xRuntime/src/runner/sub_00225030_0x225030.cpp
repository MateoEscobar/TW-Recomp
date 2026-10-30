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

// Function: sub_00225030
// Address: 0x225030 - 0x2250a0
void sub_00225030_0x225030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225030_0x225030");
#endif

    switch (ctx->pc) {
        case 0x225050u: goto label_225050;
        case 0x225064u: goto label_225064;
        case 0x225074u: goto label_225074;
        case 0x225084u: goto label_225084;
        default: break;
    }

    ctx->pc = 0x225030u;

    // 0x225030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22503c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225048: 0xc089480  jal         func_225200
    ctx->pc = 0x225048u;
    SET_GPR_U32(ctx, 31, 0x225050u);
    ctx->pc = 0x22504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225048u;
    // 0x22504c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x225048u, 0x225050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225050u;
label_225050:
    // 0x225050: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x225050u;
    {
        const bool branch_taken_0x225050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225050u;
        // 0x225054: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225050) {
            ctx->pc = 0x22508Cu;
            goto label_22508c;
        }
    }
    ctx->pc = 0x225058u;
    // 0x225058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22505c: 0xc089428  jal         func_2250A0
    ctx->pc = 0x22505Cu;
    SET_GPR_U32(ctx, 31, 0x225064u);
    ctx->pc = 0x225060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22505Cu;
    // 0x225060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x22505Cu, 0x225064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225064u;
label_225064:
    // 0x225064: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225064u;
    {
        const bool branch_taken_0x225064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225064u;
        // 0x225068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225064) {
            ctx->pc = 0x22508Cu;
            goto label_22508c;
        }
    }
    ctx->pc = 0x22506Cu;
    // 0x22506c: 0xc088e50  jal         func_223940
    ctx->pc = 0x22506Cu;
    SET_GPR_U32(ctx, 31, 0x225074u);
    ctx->pc = 0x225070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22506Cu;
    // 0x225070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223940u, 0x22506Cu, 0x225074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225074u;
label_225074:
    // 0x225074: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225074u;
    {
        const bool branch_taken_0x225074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225074u;
        // 0x225078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225074) {
            ctx->pc = 0x22508Cu;
            goto label_22508c;
        }
    }
    ctx->pc = 0x22507Cu;
    // 0x22507c: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x22507Cu;
    SET_GPR_U32(ctx, 31, 0x225084u);
    ctx->pc = 0x225080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22507Cu;
    // 0x225080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x22507Cu, 0x225084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225084u;
label_225084:
    // 0x225084: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225084u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22508c:
    // 0x22508c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22508cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225098: 0x3e00008  jr          $ra
    ctx->pc = 0x225098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225098u;
        // 0x22509c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2250A0u;
}
