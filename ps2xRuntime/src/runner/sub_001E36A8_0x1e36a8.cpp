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

// Function: sub_001E36A8
// Address: 0x1e36a8 - 0x1e3758
void sub_001E36A8_0x1e36a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E36A8_0x1e36a8");
#endif

    switch (ctx->pc) {
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36f0u: goto label_1e36f0;
        case 0x1e36fcu: goto label_1e36fc;
        case 0x1e3718u: goto label_1e3718;
        case 0x1e3724u: goto label_1e3724;
        default: break;
    }

    ctx->pc = 0x1e36a8u;

    // 0x1e36a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e36ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e36acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e36b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e36b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e36b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e36b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e36bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e36bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e36c0: 0x24110016  addiu       $s1, $zero, 0x16
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e36c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e36c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e36c8: 0xc078d16  jal         func_1E3458
    ctx->pc = 0x1E36C8u;
    SET_GPR_U32(ctx, 31, 0x1E36D0u);
    ctx->pc = 0x1E36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36C8u;
    // 0x1e36cc: 0x26500150  addiu       $s0, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3458u, 0x1E36C8u, 0x1E36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36D0u;
label_1e36d0:
    // 0x1e36d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e36d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e36d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e36dc: 0x2442c560  addiu       $v0, $v0, -0x3AA0
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952288));
    // 0x1e36e0: 0x2463c588  addiu       $v1, $v1, -0x3A78
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952328));
    // 0x1e36e4: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1e36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1e36e8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e36ec: 0x0  nop
    ctx->pc = 0x1e36ecu;
    // NOP
label_1e36f0:
    // 0x1e36f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e36f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36f4: 0xc078bd0  jal         func_1E2F40
    ctx->pc = 0x1E36F4u;
    SET_GPR_U32(ctx, 31, 0x1E36FCu);
    ctx->pc = 0x1E36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36F4u;
    // 0x1e36f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x1E36F4u, 0x1E36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36FCu;
label_1e36fc:
    // 0x1e36fc: 0x0  nop
    ctx->pc = 0x1e36fcu;
    // NOP
    // 0x1e3700: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E3700u;
    {
        const bool branch_taken_0x1e3700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3700u;
        // 0x1e3704: 0x26100270  addiu       $s0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3700) {
            ctx->pc = 0x1E36F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e36f0;
        }
    }
    ctx->pc = 0x1E3708u;
    // 0x1e3708: 0x26503960  addiu       $s0, $s2, 0x3960
    ctx->pc = 0x1e3708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14688));
    // 0x1e370c: 0x24110016  addiu       $s1, $zero, 0x16
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e3710: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e3710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3714: 0x0  nop
    ctx->pc = 0x1e3714u;
    // NOP
label_1e3718:
    // 0x1e3718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e371c: 0xc078bd0  jal         func_1E2F40
    ctx->pc = 0x1E371Cu;
    SET_GPR_U32(ctx, 31, 0x1E3724u);
    ctx->pc = 0x1E3720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E371Cu;
    // 0x1e3720: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x1E371Cu, 0x1E3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3724u;
label_1e3724:
    // 0x1e3724: 0x0  nop
    ctx->pc = 0x1e3724u;
    // NOP
    // 0x1e3728: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E3728u;
    {
        const bool branch_taken_0x1e3728 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3728u;
        // 0x1e372c: 0x26100270  addiu       $s0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3728) {
            ctx->pc = 0x1E3718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3718;
        }
    }
    ctx->pc = 0x1E3730u;
    // 0x1e3730: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e3730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3734: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x1e3734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x1e3738: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e3738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e373c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e373cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3744: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e3744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e374c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E374Cu;
        // 0x1e3750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3754u;
    // 0x1e3754: 0x0  nop
    ctx->pc = 0x1e3754u;
    // NOP
    ctx->pc = 0x1e3758u;
}
