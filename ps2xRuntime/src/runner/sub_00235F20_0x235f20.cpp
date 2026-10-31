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

// Function: sub_00235F20
// Address: 0x235f20 - 0x235f80
void sub_00235F20_0x235f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235F20_0x235f20");
#endif

    switch (ctx->pc) {
        case 0x235f3cu: goto label_235f3c;
        case 0x235f44u: goto label_235f44;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f6cu: goto label_235f6c;
        default: break;
    }

    ctx->pc = 0x235f20u;

    // 0x235f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235f28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235f2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235f34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235F34u;
    SET_GPR_U32(ctx, 31, 0x235F3Cu);
    ctx->pc = 0x235F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F34u;
    // 0x235f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235F34u, 0x235F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F3Cu;
label_235f3c:
    // 0x235f3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235F3Cu;
    SET_GPR_U32(ctx, 31, 0x235F44u);
    ctx->pc = 0x235F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F3Cu;
    // 0x235f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235F3Cu, 0x235F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F44u;
label_235f44:
    // 0x235f44: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x235F44u;
    {
        const bool branch_taken_0x235f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f44) {
            ctx->pc = 0x235F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F44u;
            // 0x235f48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F70u;
            goto label_235f70;
        }
    }
    ctx->pc = 0x235F4Cu;
    // 0x235f4c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235F4Cu;
    {
        const bool branch_taken_0x235f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f4c) {
            ctx->pc = 0x235F64u;
            goto label_235f64;
        }
    }
    ctx->pc = 0x235F54u;
    // 0x235f54: 0xc08bf3a  jal         func_22FCE8
    ctx->pc = 0x235F54u;
    SET_GPR_U32(ctx, 31, 0x235F5Cu);
    ctx->pc = 0x235F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F54u;
    // 0x235f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCE8u, 0x235F54u, 0x235F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F5Cu;
label_235f5c:
    // 0x235f5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235F5Cu;
    {
        const bool branch_taken_0x235f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F5Cu;
        // 0x235f60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f5c) {
            ctx->pc = 0x235F70u;
            goto label_235f70;
        }
    }
    ctx->pc = 0x235F64u;
label_235f64:
    // 0x235f64: 0xc08bf84  jal         func_22FE10
    ctx->pc = 0x235F64u;
    SET_GPR_U32(ctx, 31, 0x235F6Cu);
    ctx->pc = 0x235F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F64u;
    // 0x235f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE10u, 0x235F64u, 0x235F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F6Cu;
label_235f6c:
    // 0x235f6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_235f70:
    // 0x235f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235f74: 0x3e00008  jr          $ra
    ctx->pc = 0x235F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F74u;
        // 0x235f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235F7Cu;
    // 0x235f7c: 0x0  nop
    ctx->pc = 0x235f7cu;
    // NOP
    ctx->pc = 0x235f80u;
}
