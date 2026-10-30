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

// Function: sub_0036CF00
// Address: 0x36cf00 - 0x36cf88
void sub_0036CF00_0x36cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CF00_0x36cf00");
#endif

    switch (ctx->pc) {
        case 0x36cf28u: goto label_36cf28;
        case 0x36cf30u: goto label_36cf30;
        case 0x36cf44u: goto label_36cf44;
        case 0x36cf4cu: goto label_36cf4c;
        case 0x36cf58u: goto label_36cf58;
        case 0x36cf60u: goto label_36cf60;
        case 0x36cf6cu: goto label_36cf6c;
        default: break;
    }

    ctx->pc = 0x36cf00u;

    // 0x36cf00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36cf04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cf08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36cf0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36cf10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36cf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36cf1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cf20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CF20u;
    SET_GPR_U32(ctx, 31, 0x36CF28u);
    ctx->pc = 0x36CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF20u;
    // 0x36cf24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CF20u, 0x36CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF28u;
label_36cf28:
    // 0x36cf28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CF28u;
    SET_GPR_U32(ctx, 31, 0x36CF30u);
    ctx->pc = 0x36CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF28u;
    // 0x36cf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CF28u, 0x36CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF30u;
label_36cf30:
    // 0x36cf30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36cf34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cf3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CF3Cu;
    SET_GPR_U32(ctx, 31, 0x36CF44u);
    ctx->pc = 0x36CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF3Cu;
    // 0x36cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CF3Cu, 0x36CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF44u;
label_36cf44:
    // 0x36cf44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CF44u;
    SET_GPR_U32(ctx, 31, 0x36CF4Cu);
    ctx->pc = 0x36CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF44u;
    // 0x36cf48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CF44u, 0x36CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF4Cu;
label_36cf4c:
    // 0x36cf4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf50: 0xc0e17d8  jal         func_385F60
    ctx->pc = 0x36CF50u;
    SET_GPR_U32(ctx, 31, 0x36CF58u);
    ctx->pc = 0x36CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF50u;
    // 0x36cf54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385F60u, 0x36CF50u, 0x36CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF58u;
label_36cf58:
    // 0x36cf58: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36CF58u;
    SET_GPR_U32(ctx, 31, 0x36CF60u);
    ctx->pc = 0x36CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF58u;
    // 0x36cf5c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36CF58u, 0x36CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF60u;
label_36cf60:
    // 0x36cf60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf64: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36CF64u;
    SET_GPR_U32(ctx, 31, 0x36CF6Cu);
    ctx->pc = 0x36CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF64u;
    // 0x36cf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36CF64u, 0x36CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF6Cu;
label_36cf6c:
    // 0x36cf6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36cf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36cf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cf74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36cf74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cf78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36cf78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cf80: 0x3e00008  jr          $ra
    ctx->pc = 0x36CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF80u;
        // 0x36cf84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CF88u;
}
