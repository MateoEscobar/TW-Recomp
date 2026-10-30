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

// Function: sub_00235D50
// Address: 0x235d50 - 0x235db0
void sub_00235D50_0x235d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235D50_0x235d50");
#endif

    switch (ctx->pc) {
        case 0x235d6cu: goto label_235d6c;
        case 0x235d74u: goto label_235d74;
        default: break;
    }

    ctx->pc = 0x235d50u;

    // 0x235d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235d54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235d58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235d64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235D64u;
    SET_GPR_U32(ctx, 31, 0x235D6Cu);
    ctx->pc = 0x235D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D64u;
    // 0x235d68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235D64u, 0x235D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D6Cu;
label_235d6c:
    // 0x235d6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235D6Cu;
    SET_GPR_U32(ctx, 31, 0x235D74u);
    ctx->pc = 0x235D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D6Cu;
    // 0x235d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235D6Cu, 0x235D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D74u;
label_235d74:
    // 0x235d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d78: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235D78u;
    {
        const bool branch_taken_0x235d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D78u;
        // 0x235d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d78) {
            ctx->pc = 0x235DA0u;
            goto label_235da0;
        }
    }
    ctx->pc = 0x235D80u;
    // 0x235d80: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235D80u;
    {
        const bool branch_taken_0x235d80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D80u;
        // 0x235d84: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d80) {
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235D88u;
    // 0x235d88: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x235d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x235d8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235D8Cu;
    {
        const bool branch_taken_0x235d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D8Cu;
        // 0x235d90: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d8c) {
            ctx->pc = 0x235D9Cu;
            goto label_235d9c;
        }
    }
    ctx->pc = 0x235D94u;
label_235d94:
    // 0x235d94: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x235d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x235d98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235d9c:
    // 0x235d9c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235da0:
    // 0x235da0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235da8: 0x3e00008  jr          $ra
    ctx->pc = 0x235DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA8u;
        // 0x235dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235DB0u;
}
