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

// Function: sub_003A4048
// Address: 0x3a4048 - 0x3a4080
void sub_003A4048_0x3a4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4048_0x3a4048");
#endif

    switch (ctx->pc) {
        case 0x3a4074u: goto label_3a4074;
        default: break;
    }

    ctx->pc = 0x3a4048u;

    // 0x3a4048: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3a4048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x3a404c: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x3a404cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a4050: 0x8ca32c8c  lw          $v1, 0x2C8C($a1)
    ctx->pc = 0x3a4050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a4054: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a4054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3a4058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a405c: 0x24421550  addiu       $v0, $v0, 0x1550
    ctx->pc = 0x3a405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5456));
    // 0x3a4060: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3a4060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a4064: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a406c: 0xc0ea15e  jal         func_3A8578
    ctx->pc = 0x3A406Cu;
    SET_GPR_U32(ctx, 31, 0x3A4074u);
    ctx->pc = 0x3A4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A406Cu;
    // 0x3a4070: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8578u, 0x3A406Cu, 0x3A4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4074u;
label_3a4074:
    // 0x3a4074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4078: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4078u;
        // 0x3a407c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4080u;
}
