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

// Function: sub_00365A48
// Address: 0x365a48 - 0x365ad8
void sub_00365A48_0x365a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365A48_0x365a48");
#endif

    switch (ctx->pc) {
        case 0x365a68u: goto label_365a68;
        case 0x365a7cu: goto label_365a7c;
        case 0x365a84u: goto label_365a84;
        case 0x365a90u: goto label_365a90;
        case 0x365a9cu: goto label_365a9c;
        case 0x365ab4u: goto label_365ab4;
        case 0x365ac0u: goto label_365ac0;
        default: break;
    }

    ctx->pc = 0x365a48u;

    // 0x365a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x365a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x365a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365a60: 0xc102488  jal         func_409220
    ctx->pc = 0x365A60u;
    SET_GPR_U32(ctx, 31, 0x365A68u);
    ctx->pc = 0x365A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A60u;
    // 0x365a64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365A60u, 0x365A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A68u;
label_365a68:
    // 0x365a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365a74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365A74u;
    SET_GPR_U32(ctx, 31, 0x365A7Cu);
    ctx->pc = 0x365A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A74u;
    // 0x365a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365A74u, 0x365A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A7Cu;
label_365a7c:
    // 0x365a7c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365A7Cu;
    SET_GPR_U32(ctx, 31, 0x365A84u);
    ctx->pc = 0x365A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A7Cu;
    // 0x365a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365A7Cu, 0x365A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A84u;
label_365a84:
    // 0x365a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a88: 0xc046fea  jal         func_11BFA8
    ctx->pc = 0x365A88u;
    SET_GPR_U32(ctx, 31, 0x365A90u);
    ctx->pc = 0x365A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A88u;
    // 0x365a8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFA8u, 0x365A88u, 0x365A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A90u;
label_365a90:
    // 0x365a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a94: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x365A94u;
    SET_GPR_U32(ctx, 31, 0x365A9Cu);
    ctx->pc = 0x365A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A94u;
    // 0x365a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x365A94u, 0x365A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A9Cu;
label_365a9c:
    // 0x365a9c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x365A9Cu;
    {
        const bool branch_taken_0x365a9c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x365AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A9Cu;
        // 0x365aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a9c) {
            ctx->pc = 0x365AB8u;
            goto label_365ab8;
        }
    }
    ctx->pc = 0x365AA4u;
    // 0x365aa4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x365aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x365aa8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x365aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x365aac: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x365AACu;
    SET_GPR_U32(ctx, 31, 0x365AB4u);
    ctx->pc = 0x365AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AACu;
    // 0x365ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x365AACu, 0x365AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AB4u;
label_365ab4:
    // 0x365ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_365ab8:
    // 0x365ab8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x365AB8u;
    SET_GPR_U32(ctx, 31, 0x365AC0u);
    ctx->pc = 0x365ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AB8u;
    // 0x365abc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x365AB8u, 0x365AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AC0u;
label_365ac0:
    // 0x365ac0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x365ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x365AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365AD0u;
        // 0x365ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365AD8u;
}
