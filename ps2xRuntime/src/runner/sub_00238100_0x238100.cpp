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

// Function: sub_00238100
// Address: 0x238100 - 0x238158
void sub_00238100_0x238100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238100_0x238100");
#endif

    switch (ctx->pc) {
        case 0x23811cu: goto label_23811c;
        case 0x238124u: goto label_238124;
        default: break;
    }

    ctx->pc = 0x238100u;

    // 0x238100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238104: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238108: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23810c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238114: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238114u;
    SET_GPR_U32(ctx, 31, 0x23811Cu);
    ctx->pc = 0x238118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238114u;
    // 0x238118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238114u, 0x23811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23811Cu;
label_23811c:
    // 0x23811c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23811Cu;
    SET_GPR_U32(ctx, 31, 0x238124u);
    ctx->pc = 0x238120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23811Cu;
    // 0x238120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23811Cu, 0x238124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238124u;
label_238124:
    // 0x238124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238128: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x238128u;
    {
        const bool branch_taken_0x238128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238128u;
        // 0x23812c: 0x2a0403e8  slti        $a0, $s0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238128) {
            ctx->pc = 0x238148u;
            goto label_238148;
        }
    }
    ctx->pc = 0x238130u;
    // 0x238130: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x238130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x238134: 0x204180b  movn        $v1, $s0, $a0
    ctx->pc = 0x238134u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x238138: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23813c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23813cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238140: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x238140u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x238144: 0xaca30370  sw          $v1, 0x370($a1)
    ctx->pc = 0x238144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 3));
label_238148:
    // 0x238148: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23814c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238150: 0x3e00008  jr          $ra
    ctx->pc = 0x238150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238150u;
        // 0x238154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238158u;
}
