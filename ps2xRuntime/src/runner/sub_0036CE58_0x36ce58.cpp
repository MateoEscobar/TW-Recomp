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

// Function: sub_0036CE58
// Address: 0x36ce58 - 0x36cf00
void sub_0036CE58_0x36ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CE58_0x36ce58");
#endif

    switch (ctx->pc) {
        case 0x36ce84u: goto label_36ce84;
        case 0x36ce8cu: goto label_36ce8c;
        case 0x36cea0u: goto label_36cea0;
        case 0x36cea8u: goto label_36cea8;
        case 0x36cebcu: goto label_36cebc;
        case 0x36cec4u: goto label_36cec4;
        case 0x36ced4u: goto label_36ced4;
        case 0x36cee0u: goto label_36cee0;
        default: break;
    }

    ctx->pc = 0x36ce58u;

    // 0x36ce58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36ce5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ce60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36ce64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36ce68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ce68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ce6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36ce74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36ce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ce7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CE7Cu;
    SET_GPR_U32(ctx, 31, 0x36CE84u);
    ctx->pc = 0x36CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE7Cu;
    // 0x36ce80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CE7Cu, 0x36CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE84u;
label_36ce84:
    // 0x36ce84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CE84u;
    SET_GPR_U32(ctx, 31, 0x36CE8Cu);
    ctx->pc = 0x36CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE84u;
    // 0x36ce88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CE84u, 0x36CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE8Cu;
label_36ce8c:
    // 0x36ce8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ce8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36ce90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ce98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CE98u;
    SET_GPR_U32(ctx, 31, 0x36CEA0u);
    ctx->pc = 0x36CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE98u;
    // 0x36ce9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CE98u, 0x36CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEA0u;
label_36cea0:
    // 0x36cea0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CEA0u;
    SET_GPR_U32(ctx, 31, 0x36CEA8u);
    ctx->pc = 0x36CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CEA0u;
    // 0x36cea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CEA0u, 0x36CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEA8u;
label_36cea8:
    // 0x36cea8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36cea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ceac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36ceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ceb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36ceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ceb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CEB4u;
    SET_GPR_U32(ctx, 31, 0x36CEBCu);
    ctx->pc = 0x36CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CEB4u;
    // 0x36ceb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CEB4u, 0x36CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEBCu;
label_36cebc:
    // 0x36cebc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36CEBCu;
    SET_GPR_U32(ctx, 31, 0x36CEC4u);
    ctx->pc = 0x36CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CEBCu;
    // 0x36cec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36CEBCu, 0x36CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEC4u;
label_36cec4:
    // 0x36cec4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36cec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x36cec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cecc: 0xc0e17aa  jal         func_385EA8
    ctx->pc = 0x36CECCu;
    SET_GPR_U32(ctx, 31, 0x36CED4u);
    ctx->pc = 0x36CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CECCu;
    // 0x36ced0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385EA8u, 0x36CECCu, 0x36CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CED4u;
label_36ced4:
    // 0x36ced4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ced8: 0xc102562  jal         func_409588
    ctx->pc = 0x36CED8u;
    SET_GPR_U32(ctx, 31, 0x36CEE0u);
    ctx->pc = 0x36CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CED8u;
    // 0x36cedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36CED8u, 0x36CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEE0u;
label_36cee0:
    // 0x36cee0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36cee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36cee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cee8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36cee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ceec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36ceecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cef0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36cef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x36CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEF8u;
        // 0x36cefc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CF00u;
}
