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

// Function: sub_00372A38
// Address: 0x372a38 - 0x372ad8
void sub_00372A38_0x372a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372A38_0x372a38");
#endif

    switch (ctx->pc) {
        case 0x372a64u: goto label_372a64;
        case 0x372a6cu: goto label_372a6c;
        case 0x372a80u: goto label_372a80;
        case 0x372a88u: goto label_372a88;
        case 0x372a9cu: goto label_372a9c;
        case 0x372aa4u: goto label_372aa4;
        case 0x372ab4u: goto label_372ab4;
        default: break;
    }

    ctx->pc = 0x372a38u;

    // 0x372a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x372a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x372a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372a40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x372a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x372a44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x372a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x372a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372a54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x372a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x372a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372a5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372A5Cu;
    SET_GPR_U32(ctx, 31, 0x372A64u);
    ctx->pc = 0x372A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A5Cu;
    // 0x372a60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372A5Cu, 0x372A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A64u;
label_372a64:
    // 0x372a64: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372A64u;
    SET_GPR_U32(ctx, 31, 0x372A6Cu);
    ctx->pc = 0x372A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A64u;
    // 0x372a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372A64u, 0x372A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A6Cu;
label_372a6c:
    // 0x372a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372a78: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372A78u;
    SET_GPR_U32(ctx, 31, 0x372A80u);
    ctx->pc = 0x372A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A78u;
    // 0x372a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372A78u, 0x372A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A80u;
label_372a80:
    // 0x372a80: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372A80u;
    SET_GPR_U32(ctx, 31, 0x372A88u);
    ctx->pc = 0x372A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A80u;
    // 0x372a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372A80u, 0x372A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A88u;
label_372a88:
    // 0x372a88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372A94u;
    SET_GPR_U32(ctx, 31, 0x372A9Cu);
    ctx->pc = 0x372A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A94u;
    // 0x372a98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372A94u, 0x372A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A9Cu;
label_372a9c:
    // 0x372a9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372A9Cu;
    SET_GPR_U32(ctx, 31, 0x372AA4u);
    ctx->pc = 0x372AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A9Cu;
    // 0x372aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372A9Cu, 0x372AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AA4u;
label_372aa4:
    // 0x372aa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x372aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x372aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372aac: 0xc044f46  jal         func_113D18
    ctx->pc = 0x372AACu;
    SET_GPR_U32(ctx, 31, 0x372AB4u);
    ctx->pc = 0x372AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372AACu;
    // 0x372ab0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D18u, 0x372AACu, 0x372AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AB4u;
label_372ab4:
    // 0x372ab4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x372ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372abc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x372abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372ac4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x372ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372acc: 0x3e00008  jr          $ra
    ctx->pc = 0x372ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372ACCu;
        // 0x372ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372AD4u;
    // 0x372ad4: 0x0  nop
    ctx->pc = 0x372ad4u;
    // NOP
    ctx->pc = 0x372ad8u;
}
