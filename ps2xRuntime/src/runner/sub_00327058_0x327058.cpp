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

// Function: sub_00327058
// Address: 0x327058 - 0x327080
void sub_00327058_0x327058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327058_0x327058");
#endif

    switch (ctx->pc) {
        case 0x327074u: goto label_327074;
        default: break;
    }

    ctx->pc = 0x327058u;

    // 0x327058: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x327058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32705c: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x32705cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x327060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327064: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x327064u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x327068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32706c: 0xc0c9bc6  jal         func_326F18
    ctx->pc = 0x32706Cu;
    SET_GPR_U32(ctx, 31, 0x327074u);
    ctx->pc = 0x327070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32706Cu;
    // 0x327070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F18u, 0x32706Cu, 0x327074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327074u;
label_327074:
    // 0x327074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327078: 0x3e00008  jr          $ra
    ctx->pc = 0x327078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327078u;
        // 0x32707c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327080u;
}
