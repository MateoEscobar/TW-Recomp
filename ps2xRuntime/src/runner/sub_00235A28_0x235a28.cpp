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

// Function: sub_00235A28
// Address: 0x235a28 - 0x235a88
void sub_00235A28_0x235a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235A28_0x235a28");
#endif

    switch (ctx->pc) {
        case 0x235a44u: goto label_235a44;
        case 0x235a4cu: goto label_235a4c;
        default: break;
    }

    ctx->pc = 0x235a28u;

    // 0x235a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235a30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235a34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235a3c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235A3Cu;
    SET_GPR_U32(ctx, 31, 0x235A44u);
    ctx->pc = 0x235A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A3Cu;
    // 0x235a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235A3Cu, 0x235A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A44u;
label_235a44:
    // 0x235a44: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235A44u;
    SET_GPR_U32(ctx, 31, 0x235A4Cu);
    ctx->pc = 0x235A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A44u;
    // 0x235a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235A44u, 0x235A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A4Cu;
label_235a4c:
    // 0x235a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a50: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235A50u;
    {
        const bool branch_taken_0x235a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A50u;
        // 0x235a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a50) {
            ctx->pc = 0x235A78u;
            goto label_235a78;
        }
    }
    ctx->pc = 0x235A58u;
    // 0x235a58: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235A58u;
    {
        const bool branch_taken_0x235a58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A58u;
        // 0x235a5c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a58) {
            ctx->pc = 0x235A6Cu;
            goto label_235a6c;
        }
    }
    ctx->pc = 0x235A60u;
    // 0x235a60: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x235a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x235a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235A64u;
    {
        const bool branch_taken_0x235a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A64u;
        // 0x235a68: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a64) {
            ctx->pc = 0x235A74u;
            goto label_235a74;
        }
    }
    ctx->pc = 0x235A6Cu;
label_235a6c:
    // 0x235a6c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x235a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235a74:
    // 0x235a74: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235a74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235a78:
    // 0x235a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a80: 0x3e00008  jr          $ra
    ctx->pc = 0x235A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A80u;
        // 0x235a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A88u;
}
