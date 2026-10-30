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

// Function: sub_0035AD40
// Address: 0x35ad40 - 0x35ada0
void sub_0035AD40_0x35ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AD40_0x35ad40");
#endif

    switch (ctx->pc) {
        case 0x35ad60u: goto label_35ad60;
        case 0x35ad68u: goto label_35ad68;
        case 0x35ad7cu: goto label_35ad7c;
        case 0x35ad88u: goto label_35ad88;
        default: break;
    }

    ctx->pc = 0x35ad40u;

    // 0x35ad40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ad44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ad48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ad4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ad4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ad54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ad58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AD58u;
    SET_GPR_U32(ctx, 31, 0x35AD60u);
    ctx->pc = 0x35AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD58u;
    // 0x35ad5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AD58u, 0x35AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD60u;
label_35ad60:
    // 0x35ad60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AD60u;
    SET_GPR_U32(ctx, 31, 0x35AD68u);
    ctx->pc = 0x35AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD60u;
    // 0x35ad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AD60u, 0x35AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD68u;
label_35ad68:
    // 0x35ad68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ad68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ad70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad74: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35AD74u;
    SET_GPR_U32(ctx, 31, 0x35AD7Cu);
    ctx->pc = 0x35AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD74u;
    // 0x35ad78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35AD74u, 0x35AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD7Cu;
label_35ad7c:
    // 0x35ad7c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35ad7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ad80: 0xc08ddc0  jal         func_237700
    ctx->pc = 0x35AD80u;
    SET_GPR_U32(ctx, 31, 0x35AD88u);
    ctx->pc = 0x35AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD80u;
    // 0x35ad84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237700u, 0x35AD80u, 0x35AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD88u;
label_35ad88:
    // 0x35ad88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ad88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ad90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ad94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x35AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD98u;
        // 0x35ad9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ADA0u;
}
