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

// Function: sub_0023AE00
// Address: 0x23ae00 - 0x23ae40
void sub_0023AE00_0x23ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE00_0x23ae00");
#endif

    switch (ctx->pc) {
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae24u: goto label_23ae24;
        default: break;
    }

    ctx->pc = 0x23ae00u;

    // 0x23ae00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ae04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ae08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ae0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23ae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ae14: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23AE14u;
    SET_GPR_U32(ctx, 31, 0x23AE1Cu);
    ctx->pc = 0x23AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE14u;
    // 0x23ae18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23AE14u, 0x23AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE1Cu;
label_23ae1c:
    // 0x23ae1c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23AE1Cu;
    SET_GPR_U32(ctx, 31, 0x23AE24u);
    ctx->pc = 0x23AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE1Cu;
    // 0x23ae20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23AE1Cu, 0x23AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE24u;
label_23ae24:
    // 0x23ae24: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23AE24u;
    {
        const bool branch_taken_0x23ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ae24) {
            ctx->pc = 0x23AE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE24u;
            // 0x23ae28: 0xac5003b4  sw          $s0, 0x3B4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 948), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE2Cu;
            goto label_23ae2c;
        }
    }
    ctx->pc = 0x23AE2Cu;
label_23ae2c:
    // 0x23ae2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ae2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ae30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE34u;
        // 0x23ae38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AE3Cu;
    // 0x23ae3c: 0x0  nop
    ctx->pc = 0x23ae3cu;
    // NOP
    ctx->pc = 0x23ae40u;
}
