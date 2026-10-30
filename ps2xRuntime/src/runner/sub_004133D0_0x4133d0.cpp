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

// Function: sub_004133D0
// Address: 0x4133d0 - 0x413448
void sub_004133D0_0x4133d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004133D0_0x4133d0");
#endif

    switch (ctx->pc) {
        case 0x4133e4u: goto label_4133e4;
        case 0x413410u: goto label_413410;
        case 0x413434u: goto label_413434;
        default: break;
    }

    ctx->pc = 0x4133d0u;

    // 0x4133d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4133d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4133d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4133d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4133d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4133d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4133dc: 0xc1049f0  jal         func_4127C0
    ctx->pc = 0x4133DCu;
    SET_GPR_U32(ctx, 31, 0x4133E4u);
    ctx->pc = 0x4133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4133DCu;
    // 0x4133e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4127C0u, 0x4133DCu, 0x4133E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4133E4u;
label_4133e4:
    // 0x4133e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4133e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4133e8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4133e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4133ec: 0x24634b98  addiu       $v1, $v1, 0x4B98
    ctx->pc = 0x4133ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19352));
    // 0x4133f0: 0x24425cb8  addiu       $v0, $v0, 0x5CB8
    ctx->pc = 0x4133f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23736));
    // 0x4133f4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x4133f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x4133f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4133f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4133fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4133fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x413400: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x413400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x413404: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x413404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x413408: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x413408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41340c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x41340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_413410:
    // 0x413410: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x413410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x413414: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x413414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x413418: 0x0  nop
    ctx->pc = 0x413418u;
    // NOP
    // 0x41341c: 0x0  nop
    ctx->pc = 0x41341cu;
    // NOP
    // 0x413420: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x413420u;
    {
        const bool branch_taken_0x413420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x413424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413420u;
        // 0x413424: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413420) {
            ctx->pc = 0x413410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413410;
        }
    }
    ctx->pc = 0x413428u;
    // 0x413428: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x413428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x41342c: 0xc0e1284  jal         func_384A10
    ctx->pc = 0x41342Cu;
    SET_GPR_U32(ctx, 31, 0x413434u);
    ctx->pc = 0x413430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41342Cu;
    // 0x413430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x41342Cu, 0x413434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413434u;
label_413434:
    // 0x413434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x413434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41343c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413440: 0x3e00008  jr          $ra
    ctx->pc = 0x413440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413440u;
        // 0x413444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413448u;
}
