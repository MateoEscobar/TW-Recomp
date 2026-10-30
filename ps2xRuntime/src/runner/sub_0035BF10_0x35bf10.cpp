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

// Function: sub_0035BF10
// Address: 0x35bf10 - 0x35bf68
void sub_0035BF10_0x35bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BF10_0x35bf10");
#endif

    switch (ctx->pc) {
        case 0x35bf2cu: goto label_35bf2c;
        case 0x35bf34u: goto label_35bf34;
        case 0x35bf3cu: goto label_35bf3c;
        case 0x35bf44u: goto label_35bf44;
        case 0x35bf50u: goto label_35bf50;
        default: break;
    }

    ctx->pc = 0x35bf10u;

    // 0x35bf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bf14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35bf1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bf24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BF24u;
    SET_GPR_U32(ctx, 31, 0x35BF2Cu);
    ctx->pc = 0x35BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF24u;
    // 0x35bf28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BF24u, 0x35BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF2Cu;
label_35bf2c:
    // 0x35bf2c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BF2Cu;
    SET_GPR_U32(ctx, 31, 0x35BF34u);
    ctx->pc = 0x35BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF2Cu;
    // 0x35bf30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BF2Cu, 0x35BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF34u;
label_35bf34:
    // 0x35bf34: 0xc08df42  jal         func_237D08
    ctx->pc = 0x35BF34u;
    SET_GPR_U32(ctx, 31, 0x35BF3Cu);
    ctx->pc = 0x35BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF34u;
    // 0x35bf38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237D08u, 0x35BF34u, 0x35BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF3Cu;
label_35bf3c:
    // 0x35bf3c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35BF3Cu;
    SET_GPR_U32(ctx, 31, 0x35BF44u);
    ctx->pc = 0x35BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF3Cu;
    // 0x35bf40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35BF3Cu, 0x35BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF44u;
label_35bf44:
    // 0x35bf44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35bf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf48: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35BF48u;
    SET_GPR_U32(ctx, 31, 0x35BF50u);
    ctx->pc = 0x35BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF48u;
    // 0x35bf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35BF48u, 0x35BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF50u;
label_35bf50:
    // 0x35bf50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35bf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x35BF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF5Cu;
        // 0x35bf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BF64u;
    // 0x35bf64: 0x0  nop
    ctx->pc = 0x35bf64u;
    // NOP
    ctx->pc = 0x35bf68u;
}
