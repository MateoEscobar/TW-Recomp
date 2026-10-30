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

// Function: sub_0032BB10
// Address: 0x32bb10 - 0x32bb78
void sub_0032BB10_0x32bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BB10_0x32bb10");
#endif

    switch (ctx->pc) {
        case 0x32bb28u: goto label_32bb28;
        case 0x32bb40u: goto label_32bb40;
        case 0x32bb48u: goto label_32bb48;
        case 0x32bb50u: goto label_32bb50;
        case 0x32bb58u: goto label_32bb58;
        case 0x32bb64u: goto label_32bb64;
        default: break;
    }

    ctx->pc = 0x32bb10u;

    // 0x32bb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bb14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bb20: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BB20u;
    SET_GPR_U32(ctx, 31, 0x32BB28u);
    ctx->pc = 0x32BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB20u;
    // 0x32bb24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BB20u, 0x32BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB28u;
label_32bb28:
    // 0x32bb28: 0x3405fe47  ori         $a1, $zero, 0xFE47
    ctx->pc = 0x32bb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65095);
    // 0x32bb2c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32bb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32bb30: 0x34a5fa36  ori         $a1, $a1, 0xFA36
    ctx->pc = 0x32bb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64054);
    // 0x32bb34: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x32bb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x32bb38: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32BB38u;
    SET_GPR_U32(ctx, 31, 0x32BB40u);
    ctx->pc = 0x32BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB38u;
    // 0x32bb3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32BB38u, 0x32BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB40u;
label_32bb40:
    // 0x32bb40: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BB40u;
    SET_GPR_U32(ctx, 31, 0x32BB48u);
    ctx->pc = 0x32BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB40u;
    // 0x32bb44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BB40u, 0x32BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB48u;
label_32bb48:
    // 0x32bb48: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x32BB48u;
    SET_GPR_U32(ctx, 31, 0x32BB50u);
    ctx->pc = 0x32BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB48u;
    // 0x32bb4c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x32BB48u, 0x32BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB50u;
label_32bb50:
    // 0x32bb50: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BB50u;
    SET_GPR_U32(ctx, 31, 0x32BB58u);
    ctx->pc = 0x32BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB50u;
    // 0x32bb54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BB50u, 0x32BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB58u;
label_32bb58:
    // 0x32bb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb5c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BB5Cu;
    SET_GPR_U32(ctx, 31, 0x32BB64u);
    ctx->pc = 0x32BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB5Cu;
    // 0x32bb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BB5Cu, 0x32BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB64u;
label_32bb64:
    // 0x32bb64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB70u;
        // 0x32bb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB78u;
}
