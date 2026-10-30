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

// Function: sub_0035ED28
// Address: 0x35ed28 - 0x35ed80
void sub_0035ED28_0x35ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ED28_0x35ed28");
#endif

    switch (ctx->pc) {
        case 0x35ed44u: goto label_35ed44;
        case 0x35ed4cu: goto label_35ed4c;
        case 0x35ed54u: goto label_35ed54;
        case 0x35ed5cu: goto label_35ed5c;
        case 0x35ed68u: goto label_35ed68;
        default: break;
    }

    ctx->pc = 0x35ed28u;

    // 0x35ed28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ed2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ed2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35ed34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ed38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ed3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ED3Cu;
    SET_GPR_U32(ctx, 31, 0x35ED44u);
    ctx->pc = 0x35ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED3Cu;
    // 0x35ed40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ED3Cu, 0x35ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED44u;
label_35ed44:
    // 0x35ed44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ED44u;
    SET_GPR_U32(ctx, 31, 0x35ED4Cu);
    ctx->pc = 0x35ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED44u;
    // 0x35ed48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ED44u, 0x35ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED4Cu;
label_35ed4c:
    // 0x35ed4c: 0xc0a492a  jal         func_2924A8
    ctx->pc = 0x35ED4Cu;
    SET_GPR_U32(ctx, 31, 0x35ED54u);
    ctx->pc = 0x35ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED4Cu;
    // 0x35ed50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2924A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924A8u, 0x35ED4Cu, 0x35ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED54u;
label_35ed54:
    // 0x35ed54: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35ED54u;
    SET_GPR_U32(ctx, 31, 0x35ED5Cu);
    ctx->pc = 0x35ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED54u;
    // 0x35ed58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35ED54u, 0x35ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED5Cu;
label_35ed5c:
    // 0x35ed5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed60: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35ED60u;
    SET_GPR_U32(ctx, 31, 0x35ED68u);
    ctx->pc = 0x35ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED60u;
    // 0x35ed64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35ED60u, 0x35ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED68u;
label_35ed68:
    // 0x35ed68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35ed68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ed6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ed70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ed74: 0x3e00008  jr          $ra
    ctx->pc = 0x35ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED74u;
        // 0x35ed78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ED74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ED7Cu;
    // 0x35ed7c: 0x0  nop
    ctx->pc = 0x35ed7cu;
    // NOP
    ctx->pc = 0x35ed80u;
}
