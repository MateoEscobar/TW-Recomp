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

// Function: sub_0027BE50
// Address: 0x27be50 - 0x27bea8
void sub_0027BE50_0x27be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE50_0x27be50");
#endif

    switch (ctx->pc) {
        case 0x27be68u: goto label_27be68;
        case 0x27be7cu: goto label_27be7c;
        default: break;
    }

    ctx->pc = 0x27be50u;

    // 0x27be50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27be54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27be58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27be5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27be5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27be60: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BE60u;
    SET_GPR_U32(ctx, 31, 0x27BE68u);
    ctx->pc = 0x27BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE60u;
    // 0x27be64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BE60u, 0x27BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE68u;
label_27be68:
    // 0x27be68: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27be6c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BE6Cu;
    {
        const bool branch_taken_0x27be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE6Cu;
        // 0x27be70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be6c) {
            ctx->pc = 0x27BE88u;
            goto label_27be88;
        }
    }
    ctx->pc = 0x27BE74u;
    // 0x27be74: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BE74u;
    SET_GPR_U32(ctx, 31, 0x27BE7Cu);
    ctx->pc = 0x27BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BE74u;
    // 0x27be78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BE74u, 0x27BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE7Cu;
label_27be7c:
    // 0x27be7c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x27be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27be80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE80u;
    {
        const bool branch_taken_0x27be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE80u;
        // 0x27be84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be80) {
            ctx->pc = 0x27BE90u;
            goto label_27be90;
        }
    }
    ctx->pc = 0x27BE88u;
label_27be88:
    // 0x27be88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27be88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27be8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27be8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27be90:
    // 0x27be90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27be90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27be94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27be98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27be98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE9Cu;
        // 0x27bea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BEA4u;
    // 0x27bea4: 0x0  nop
    ctx->pc = 0x27bea4u;
    // NOP
    ctx->pc = 0x27bea8u;
}
