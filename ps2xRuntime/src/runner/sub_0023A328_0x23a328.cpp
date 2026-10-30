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

// Function: sub_0023A328
// Address: 0x23a328 - 0x23a390
void sub_0023A328_0x23a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A328_0x23a328");
#endif

    switch (ctx->pc) {
        case 0x23a344u: goto label_23a344;
        case 0x23a34cu: goto label_23a34c;
        default: break;
    }

    ctx->pc = 0x23a328u;

    // 0x23a328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a32c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a330: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a33c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A33Cu;
    SET_GPR_U32(ctx, 31, 0x23A344u);
    ctx->pc = 0x23A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A33Cu;
    // 0x23a340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A33Cu, 0x23A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A344u;
label_23a344:
    // 0x23a344: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A344u;
    SET_GPR_U32(ctx, 31, 0x23A34Cu);
    ctx->pc = 0x23A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A344u;
    // 0x23a348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A344u, 0x23A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A34Cu;
label_23a34c:
    // 0x23a34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a350: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23A350u;
    {
        const bool branch_taken_0x23a350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a350) {
            ctx->pc = 0x23A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A350u;
            // 0x23a354: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A384u;
            goto label_23a384;
        }
    }
    ctx->pc = 0x23A358u;
    // 0x23a358: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A358u;
    {
        const bool branch_taken_0x23a358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A358u;
        // 0x23a35c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a358) {
            ctx->pc = 0x23A36Cu;
            goto label_23a36c;
        }
    }
    ctx->pc = 0x23A360u;
    // 0x23a360: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A364u;
    {
        const bool branch_taken_0x23a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A364u;
        // 0x23a368: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a364) {
            ctx->pc = 0x23A37Cu;
            goto label_23a37c;
        }
    }
    ctx->pc = 0x23A36Cu;
label_23a36c:
    // 0x23a36c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a36cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a370: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x23a370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x23a374: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23a374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23a378: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23a37c:
    // 0x23a37c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x23a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x23a380: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a384:
    // 0x23a384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a388: 0x3e00008  jr          $ra
    ctx->pc = 0x23A388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A388u;
        // 0x23a38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A390u;
}
