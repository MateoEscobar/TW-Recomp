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

// Function: sub_0035CEA0
// Address: 0x35cea0 - 0x35cf60
void sub_0035CEA0_0x35cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CEA0_0x35cea0");
#endif

    switch (ctx->pc) {
        case 0x35ced0u: goto label_35ced0;
        case 0x35ced8u: goto label_35ced8;
        case 0x35cef8u: goto label_35cef8;
        case 0x35cf00u: goto label_35cf00;
        case 0x35cf28u: goto label_35cf28;
        case 0x35cf30u: goto label_35cf30;
        case 0x35cf40u: goto label_35cf40;
        default: break;
    }

    ctx->pc = 0x35cea0u;

    // 0x35cea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35cea4: 0x3406819a  ori         $a2, $zero, 0x819A
    ctx->pc = 0x35cea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33178);
    // 0x35cea8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35cea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35ceac: 0x34c69800  ori         $a2, $a2, 0x9800
    ctx->pc = 0x35ceacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38912);
    // 0x35ceb0: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x35ceb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x35ceb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ceb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cebc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35cec0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35cec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cec8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CEC8u;
    SET_GPR_U32(ctx, 31, 0x35CED0u);
    ctx->pc = 0x35CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEC8u;
    // 0x35cecc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CEC8u, 0x35CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CED0u;
label_35ced0:
    // 0x35ced0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CED0u;
    SET_GPR_U32(ctx, 31, 0x35CED8u);
    ctx->pc = 0x35CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CED0u;
    // 0x35ced4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CED0u, 0x35CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CED8u;
label_35ced8:
    // 0x35ced8: 0x3406811e  ori         $a2, $zero, 0x811E
    ctx->pc = 0x35ced8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33054);
    // 0x35cedc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35cedcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35cee0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x35cee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x35cee4: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x35cee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x35cee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35cee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cef0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CEF0u;
    SET_GPR_U32(ctx, 31, 0x35CEF8u);
    ctx->pc = 0x35CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEF0u;
    // 0x35cef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CEF0u, 0x35CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CEF8u;
label_35cef8:
    // 0x35cef8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CEF8u;
    SET_GPR_U32(ctx, 31, 0x35CF00u);
    ctx->pc = 0x35CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEF8u;
    // 0x35cefc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CEF8u, 0x35CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF00u;
label_35cf00:
    // 0x35cf00: 0x3406feba  ori         $a2, $zero, 0xFEBA
    ctx->pc = 0x35cf00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65210);
    // 0x35cf04: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35cf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35cf08: 0x34c6e147  ori         $a2, $a2, 0xE147
    ctx->pc = 0x35cf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57671);
    // 0x35cf0c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35cf0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35cf10: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x35cf10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x35cf14: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x35cf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x35cf18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35cf18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CF20u;
    SET_GPR_U32(ctx, 31, 0x35CF28u);
    ctx->pc = 0x35CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF20u;
    // 0x35cf24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CF20u, 0x35CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF28u;
label_35cf28:
    // 0x35cf28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35CF28u;
    SET_GPR_U32(ctx, 31, 0x35CF30u);
    ctx->pc = 0x35CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF28u;
    // 0x35cf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35CF28u, 0x35CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF30u;
label_35cf30:
    // 0x35cf30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf38: 0xc08e46a  jal         func_2391A8
    ctx->pc = 0x35CF38u;
    SET_GPR_U32(ctx, 31, 0x35CF40u);
    ctx->pc = 0x35CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF38u;
    // 0x35cf3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2391A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2391A8u, 0x35CF38u, 0x35CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF40u;
label_35cf40:
    // 0x35cf40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35cf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cf44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35cf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cf4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35cf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cf54: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF54u;
        // 0x35cf58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF5Cu;
    // 0x35cf5c: 0x0  nop
    ctx->pc = 0x35cf5cu;
    // NOP
    ctx->pc = 0x35cf60u;
}
