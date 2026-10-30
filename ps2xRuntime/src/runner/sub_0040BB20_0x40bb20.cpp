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

// Function: sub_0040BB20
// Address: 0x40bb20 - 0x40bba8
void sub_0040BB20_0x40bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BB20_0x40bb20");
#endif

    switch (ctx->pc) {
        case 0x40bb44u: goto label_40bb44;
        case 0x40bb4cu: goto label_40bb4c;
        case 0x40bb58u: goto label_40bb58;
        case 0x40bb64u: goto label_40bb64;
        case 0x40bb70u: goto label_40bb70;
        case 0x40bb8cu: goto label_40bb8c;
        default: break;
    }

    ctx->pc = 0x40bb20u;

    // 0x40bb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40bb24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40bb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40bb2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40bb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40bb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb34: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bb3c: 0xc102866  jal         func_40A198
    ctx->pc = 0x40BB3Cu;
    SET_GPR_U32(ctx, 31, 0x40BB44u);
    ctx->pc = 0x40BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB3Cu;
    // 0x40bb40: 0x24a583e0  addiu       $a1, $a1, -0x7C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40BB3Cu, 0x40BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB44u;
label_40bb44:
    // 0x40bb44: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40BB44u;
    SET_GPR_U32(ctx, 31, 0x40BB4Cu);
    ctx->pc = 0x40BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB44u;
    // 0x40bb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40BB44u, 0x40BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB4Cu;
label_40bb4c:
    // 0x40bb4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40bb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb50: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40BB50u;
    SET_GPR_U32(ctx, 31, 0x40BB58u);
    ctx->pc = 0x40BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB50u;
    // 0x40bb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40BB50u, 0x40BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB58u;
label_40bb58:
    // 0x40bb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40bb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb5c: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40BB5Cu;
    SET_GPR_U32(ctx, 31, 0x40BB64u);
    ctx->pc = 0x40BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB5Cu;
    // 0x40bb60: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40BB5Cu, 0x40BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB64u;
label_40bb64:
    // 0x40bb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb68: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x40BB68u;
    SET_GPR_U32(ctx, 31, 0x40BB70u);
    ctx->pc = 0x40BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB68u;
    // 0x40bb6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x40BB68u, 0x40BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB70u;
label_40bb70:
    // 0x40bb70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb74: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40BB74u;
    {
        const bool branch_taken_0x40bb74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BB74u;
        // 0x40bb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bb74) {
            ctx->pc = 0x40BB84u;
            goto label_40bb84;
        }
    }
    ctx->pc = 0x40BB7Cu;
    // 0x40bb7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x40bb80: 0x245083f0  addiu       $s0, $v0, -0x7C10
    ctx->pc = 0x40bb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
label_40bb84:
    // 0x40bb84: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40BB84u;
    SET_GPR_U32(ctx, 31, 0x40BB8Cu);
    ctx->pc = 0x40BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB84u;
    // 0x40bb88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40BB84u, 0x40BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB8Cu;
label_40bb8c:
    // 0x40bb8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40bb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40bb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bb94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40bb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40bb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x40BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BB9Cu;
        // 0x40bba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BBA4u;
    // 0x40bba4: 0x0  nop
    ctx->pc = 0x40bba4u;
    // NOP
    ctx->pc = 0x40bba8u;
}
