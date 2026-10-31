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

// Function: sub_00359A20
// Address: 0x359a20 - 0x359a80
void sub_00359A20_0x359a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359A20_0x359a20");
#endif

    switch (ctx->pc) {
        case 0x359a40u: goto label_359a40;
        case 0x359a48u: goto label_359a48;
        case 0x359a5cu: goto label_359a5c;
        case 0x359a68u: goto label_359a68;
        default: break;
    }

    ctx->pc = 0x359a20u;

    // 0x359a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359a38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359A38u;
    SET_GPR_U32(ctx, 31, 0x359A40u);
    ctx->pc = 0x359A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A38u;
    // 0x359a3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359A38u, 0x359A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A40u;
label_359a40:
    // 0x359a40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359A40u;
    SET_GPR_U32(ctx, 31, 0x359A48u);
    ctx->pc = 0x359A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A40u;
    // 0x359a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359A40u, 0x359A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A48u;
label_359a48:
    // 0x359a48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359A54u;
    SET_GPR_U32(ctx, 31, 0x359A5Cu);
    ctx->pc = 0x359A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A54u;
    // 0x359a58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359A54u, 0x359A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A5Cu;
label_359a5c:
    // 0x359a5c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x359a5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359a60: 0xc08d754  jal         func_235D50
    ctx->pc = 0x359A60u;
    SET_GPR_U32(ctx, 31, 0x359A68u);
    ctx->pc = 0x359A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A60u;
    // 0x359a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D50u, 0x359A60u, 0x359A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A68u;
label_359a68:
    // 0x359a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a78: 0x3e00008  jr          $ra
    ctx->pc = 0x359A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A78u;
        // 0x359a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359A80u;
}
