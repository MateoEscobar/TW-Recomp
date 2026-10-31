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

// Function: sub_00379C20
// Address: 0x379c20 - 0x379c80
void sub_00379C20_0x379c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C20_0x379c20");
#endif

    switch (ctx->pc) {
        case 0x379c40u: goto label_379c40;
        case 0x379c48u: goto label_379c48;
        case 0x379c5cu: goto label_379c5c;
        case 0x379c68u: goto label_379c68;
        default: break;
    }

    ctx->pc = 0x379c20u;

    // 0x379c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379c28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x379c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x379c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379c38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379C38u;
    SET_GPR_U32(ctx, 31, 0x379C40u);
    ctx->pc = 0x379C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C38u;
    // 0x379c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379C38u, 0x379C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C40u;
label_379c40:
    // 0x379c40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379C40u;
    SET_GPR_U32(ctx, 31, 0x379C48u);
    ctx->pc = 0x379C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C40u;
    // 0x379c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379C40u, 0x379C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C48u;
label_379c48:
    // 0x379c48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x379c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x379C54u;
    SET_GPR_U32(ctx, 31, 0x379C5Cu);
    ctx->pc = 0x379C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C54u;
    // 0x379c58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x379C54u, 0x379C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C5Cu;
label_379c5c:
    // 0x379c5c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x379c5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379c60: 0xc0d3ee8  jal         func_34FBA0
    ctx->pc = 0x379C60u;
    SET_GPR_U32(ctx, 31, 0x379C68u);
    ctx->pc = 0x379C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C60u;
    // 0x379c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FBA0u, 0x379C60u, 0x379C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C68u;
label_379c68:
    // 0x379c68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c78: 0x3e00008  jr          $ra
    ctx->pc = 0x379C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C78u;
        // 0x379c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C80u;
}
