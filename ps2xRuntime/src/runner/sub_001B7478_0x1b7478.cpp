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

// Function: sub_001B7478
// Address: 0x1b7478 - 0x1b74f0
void sub_001B7478_0x1b7478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7478_0x1b7478");
#endif

    switch (ctx->pc) {
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74b0u: goto label_1b74b0;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74d0u: goto label_1b74d0;
        default: break;
    }

    ctx->pc = 0x1b7478u;

    // 0x1b7478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b747c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7484: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b748c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b7490: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x1b7490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b7494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7498: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1B7498u;
    SET_GPR_U32(ctx, 31, 0x1B74A0u);
    ctx->pc = 0x1B749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7498u;
    // 0x1b749c: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1B7498u, 0x1B74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74A0u;
label_1b74a0:
    // 0x1b74a0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b74a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b74a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1b74a8: 0x2442a118  addiu       $v0, $v0, -0x5EE8
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943000));
    // 0x1b74ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b74acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b74b0:
    // 0x1b74b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b74b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74b4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1B74B4u;
    SET_GPR_U32(ctx, 31, 0x1B74BCu);
    ctx->pc = 0x1B74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B74B4u;
    // 0x1b74b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B74B4u, 0x1B74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x0  nop
    ctx->pc = 0x1b74bcu;
    // NOP
    // 0x1b74c0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B74C0u;
    {
        const bool branch_taken_0x1b74c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C0u;
        // 0x1b74c4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74c0) {
            ctx->pc = 0x1B74B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b74b0;
        }
    }
    ctx->pc = 0x1B74C8u;
    // 0x1b74c8: 0xc06dd60  jal         func_1B7580
    ctx->pc = 0x1B74C8u;
    SET_GPR_U32(ctx, 31, 0x1B74D0u);
    ctx->pc = 0x1B74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B74C8u;
    // 0x1b74cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7580u, 0x1B74C8u, 0x1B74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74D0u;
label_1b74d0:
    // 0x1b74d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b74d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b74d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b74d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b74d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b74dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b74dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b74e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b74e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b74e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b74e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B74E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E8u;
        // 0x1b74ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B74E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B74F0u;
}
