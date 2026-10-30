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

// Function: sub_00237A28
// Address: 0x237a28 - 0x237a98
void sub_00237A28_0x237a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A28_0x237a28");
#endif

    switch (ctx->pc) {
        case 0x237a44u: goto label_237a44;
        case 0x237a4cu: goto label_237a4c;
        default: break;
    }

    ctx->pc = 0x237a28u;

    // 0x237a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237a30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237a34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237a3c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237A3Cu;
    SET_GPR_U32(ctx, 31, 0x237A44u);
    ctx->pc = 0x237A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A3Cu;
    // 0x237a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237A3Cu, 0x237A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A44u;
label_237a44:
    // 0x237a44: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237A44u;
    SET_GPR_U32(ctx, 31, 0x237A4Cu);
    ctx->pc = 0x237A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A44u;
    // 0x237a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237A44u, 0x237A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A4Cu;
label_237a4c:
    // 0x237a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a50: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237A50u;
    {
        const bool branch_taken_0x237a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a50) {
            ctx->pc = 0x237A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A50u;
            // 0x237a54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A8Cu;
            goto label_237a8c;
        }
    }
    ctx->pc = 0x237A58u;
    // 0x237a58: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237A58u;
    {
        const bool branch_taken_0x237a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A58u;
        // 0x237a5c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a58) {
            ctx->pc = 0x237A70u;
            goto label_237a70;
        }
    }
    ctx->pc = 0x237A60u;
    // 0x237a60: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x237a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x237a64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x237a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x237a68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237A68u;
    {
        const bool branch_taken_0x237a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A68u;
        // 0x237a6c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a68) {
            ctx->pc = 0x237A84u;
            goto label_237a84;
        }
    }
    ctx->pc = 0x237A70u;
label_237a70:
    // 0x237a70: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x237a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
    // 0x237a74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237a78: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x237a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x237a7c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x237a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x237a80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237a84:
    // 0x237a84: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237a84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237a88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237a8c:
    // 0x237a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237a90: 0x3e00008  jr          $ra
    ctx->pc = 0x237A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A90u;
        // 0x237a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A98u;
}
