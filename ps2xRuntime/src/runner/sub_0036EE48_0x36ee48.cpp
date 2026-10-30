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

// Function: sub_0036EE48
// Address: 0x36ee48 - 0x36eec8
void sub_0036EE48_0x36ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EE48_0x36ee48");
#endif

    switch (ctx->pc) {
        case 0x36ee6cu: goto label_36ee6c;
        case 0x36ee74u: goto label_36ee74;
        case 0x36ee88u: goto label_36ee88;
        case 0x36ee9cu: goto label_36ee9c;
        case 0x36eeacu: goto label_36eeac;
        default: break;
    }

    ctx->pc = 0x36ee48u;

    // 0x36ee48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36ee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36ee4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ee50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36ee54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ee54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36ee5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36ee60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ee64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EE64u;
    SET_GPR_U32(ctx, 31, 0x36EE6Cu);
    ctx->pc = 0x36EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE64u;
    // 0x36ee68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EE64u, 0x36EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE6Cu;
label_36ee6c:
    // 0x36ee6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36EE6Cu;
    SET_GPR_U32(ctx, 31, 0x36EE74u);
    ctx->pc = 0x36EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE6Cu;
    // 0x36ee70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36EE6Cu, 0x36EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE74u;
label_36ee74:
    // 0x36ee74: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x36ee74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ee78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ee80: 0xc102488  jal         func_409220
    ctx->pc = 0x36EE80u;
    SET_GPR_U32(ctx, 31, 0x36EE88u);
    ctx->pc = 0x36EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE80u;
    // 0x36ee84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EE80u, 0x36EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE88u;
label_36ee88:
    // 0x36ee88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ee94: 0xc102488  jal         func_409220
    ctx->pc = 0x36EE94u;
    SET_GPR_U32(ctx, 31, 0x36EE9Cu);
    ctx->pc = 0x36EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE94u;
    // 0x36ee98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EE94u, 0x36EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE9Cu;
label_36ee9c:
    // 0x36ee9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36ee9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36eea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eea4: 0xc06a3ee  jal         func_1A8FB8
    ctx->pc = 0x36EEA4u;
    SET_GPR_U32(ctx, 31, 0x36EEACu);
    ctx->pc = 0x36EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEA4u;
    // 0x36eea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8FB8u, 0x36EEA4u, 0x36EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEACu;
label_36eeac:
    // 0x36eeac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36eeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36eeb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36eeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eeb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36eeb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36eebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x36EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEC0u;
        // 0x36eec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EEC8u;
}
