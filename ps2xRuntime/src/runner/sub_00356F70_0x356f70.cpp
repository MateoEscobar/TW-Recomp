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

// Function: sub_00356F70
// Address: 0x356f70 - 0x356fc8
void sub_00356F70_0x356f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356F70_0x356f70");
#endif

    switch (ctx->pc) {
        case 0x356f90u: goto label_356f90;
        case 0x356fa8u: goto label_356fa8;
        case 0x356fb4u: goto label_356fb4;
        default: break;
    }

    ctx->pc = 0x356f70u;

    // 0x356f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x356f74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x356f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x356f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x356f7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x356f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356f88: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x356F88u;
    SET_GPR_U32(ctx, 31, 0x356F90u);
    ctx->pc = 0x356F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F88u;
    // 0x356f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x356F88u, 0x356F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F90u;
label_356f90:
    // 0x356f90: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356F90u;
    {
        const bool branch_taken_0x356f90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x356f90) {
            ctx->pc = 0x356F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356F90u;
            // 0x356f94: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356FACu;
            goto label_356fac;
        }
    }
    ctx->pc = 0x356F98u;
    // 0x356f98: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x356f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x356f9c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x356f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x356fa0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x356FA0u;
    SET_GPR_U32(ctx, 31, 0x356FA8u);
    ctx->pc = 0x356FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FA0u;
    // 0x356fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x356FA0u, 0x356FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FA8u;
label_356fa8:
    // 0x356fa8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x356fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_356fac:
    // 0x356fac: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x356FACu;
    SET_GPR_U32(ctx, 31, 0x356FB4u);
    ctx->pc = 0x356FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FACu;
    // 0x356fb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x356FACu, 0x356FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FB4u;
label_356fb4:
    // 0x356fb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x356fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x356FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356FC0u;
        // 0x356fc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356FC8u;
}
