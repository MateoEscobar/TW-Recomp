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

// Function: sub_00336D28
// Address: 0x336d28 - 0x336d68
void sub_00336D28_0x336d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336D28_0x336d28");
#endif

    switch (ctx->pc) {
        case 0x336d4cu: goto label_336d4c;
        case 0x336d58u: goto label_336d58;
        default: break;
    }

    ctx->pc = 0x336d28u;

    // 0x336d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336d2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x336d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x336d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x336d34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x336d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336d40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x336d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d44: 0xc0cdbb8  jal         func_336EE0
    ctx->pc = 0x336D44u;
    SET_GPR_U32(ctx, 31, 0x336D4Cu);
    ctx->pc = 0x336D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D44u;
    // 0x336d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x336D44u, 0x336D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D4Cu;
label_336d4c:
    // 0x336d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d50: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x336D50u;
    SET_GPR_U32(ctx, 31, 0x336D58u);
    ctx->pc = 0x336D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D50u;
    // 0x336d54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x336D50u, 0x336D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D58u;
label_336d58:
    // 0x336d58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x336d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336d60: 0x3e00008  jr          $ra
    ctx->pc = 0x336D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D60u;
        // 0x336d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336D68u;
}
