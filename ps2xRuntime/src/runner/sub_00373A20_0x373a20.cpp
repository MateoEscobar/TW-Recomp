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

// Function: sub_00373A20
// Address: 0x373a20 - 0x373a88
void sub_00373A20_0x373a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A20_0x373a20");
#endif

    switch (ctx->pc) {
        case 0x373a40u: goto label_373a40;
        case 0x373a48u: goto label_373a48;
        case 0x373a60u: goto label_373a60;
        case 0x373a6cu: goto label_373a6c;
        default: break;
    }

    ctx->pc = 0x373a20u;

    // 0x373a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373a38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373A38u;
    SET_GPR_U32(ctx, 31, 0x373A40u);
    ctx->pc = 0x373A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A38u;
    // 0x373a3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373A38u, 0x373A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A40u;
label_373a40:
    // 0x373a40: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373A40u;
    SET_GPR_U32(ctx, 31, 0x373A48u);
    ctx->pc = 0x373A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A40u;
    // 0x373a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373A40u, 0x373A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A48u;
label_373a48:
    // 0x373a48: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373a48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a50: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373a50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a58: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373A58u;
    SET_GPR_U32(ctx, 31, 0x373A60u);
    ctx->pc = 0x373A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A58u;
    // 0x373a5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373A58u, 0x373A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A60u;
label_373a60:
    // 0x373a60: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x373a60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373a64: 0xc05aaa6  jal         func_16AA98
    ctx->pc = 0x373A64u;
    SET_GPR_U32(ctx, 31, 0x373A6Cu);
    ctx->pc = 0x373A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A64u;
    // 0x373a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AA98u, 0x373A64u, 0x373A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A6Cu;
label_373a6c:
    // 0x373a6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x373A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A7Cu;
        // 0x373a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A84u;
    // 0x373a84: 0x0  nop
    ctx->pc = 0x373a84u;
    // NOP
    ctx->pc = 0x373a88u;
}
