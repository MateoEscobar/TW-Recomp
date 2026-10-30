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

// Function: sub_0037CA20
// Address: 0x37ca20 - 0x37ca78
void sub_0037CA20_0x37ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CA20_0x37ca20");
#endif

    switch (ctx->pc) {
        case 0x37ca3cu: goto label_37ca3c;
        case 0x37ca44u: goto label_37ca44;
        case 0x37ca4cu: goto label_37ca4c;
        case 0x37ca54u: goto label_37ca54;
        case 0x37ca60u: goto label_37ca60;
        default: break;
    }

    ctx->pc = 0x37ca20u;

    // 0x37ca20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ca24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37ca2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ca30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ca34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CA34u;
    SET_GPR_U32(ctx, 31, 0x37CA3Cu);
    ctx->pc = 0x37CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA34u;
    // 0x37ca38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CA34u, 0x37CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA3Cu;
label_37ca3c:
    // 0x37ca3c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CA3Cu;
    SET_GPR_U32(ctx, 31, 0x37CA44u);
    ctx->pc = 0x37CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA3Cu;
    // 0x37ca40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CA3Cu, 0x37CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA44u;
label_37ca44:
    // 0x37ca44: 0xc10897c  jal         func_4225F0
    ctx->pc = 0x37CA44u;
    SET_GPR_U32(ctx, 31, 0x37CA4Cu);
    ctx->pc = 0x37CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA44u;
    // 0x37ca48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4225F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4225F0u, 0x37CA44u, 0x37CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA4Cu;
label_37ca4c:
    // 0x37ca4c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CA4Cu;
    SET_GPR_U32(ctx, 31, 0x37CA54u);
    ctx->pc = 0x37CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA4Cu;
    // 0x37ca50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CA4Cu, 0x37CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA54u;
label_37ca54:
    // 0x37ca54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37ca54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca58: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37CA58u;
    SET_GPR_U32(ctx, 31, 0x37CA60u);
    ctx->pc = 0x37CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA58u;
    // 0x37ca5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37CA58u, 0x37CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA60u;
label_37ca60:
    // 0x37ca60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ca64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ca68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ca68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA6Cu;
        // 0x37ca70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CA74u;
    // 0x37ca74: 0x0  nop
    ctx->pc = 0x37ca74u;
    // NOP
    ctx->pc = 0x37ca78u;
}
