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

// Function: sub_003A4128
// Address: 0x3a4128 - 0x3a4160
void sub_003A4128_0x3a4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4128_0x3a4128");
#endif

    switch (ctx->pc) {
        case 0x3a4154u: goto label_3a4154;
        default: break;
    }

    ctx->pc = 0x3a4128u;

    // 0x3a4128: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3a4128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x3a412c: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x3a412cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a4130: 0x8ca32c8c  lw          $v1, 0x2C8C($a1)
    ctx->pc = 0x3a4130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a4134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3a4138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a413c: 0x24421550  addiu       $v0, $v0, 0x1550
    ctx->pc = 0x3a413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5456));
    // 0x3a4140: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3a4140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a4144: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a414c: 0xc0ea176  jal         func_3A85D8
    ctx->pc = 0x3A414Cu;
    SET_GPR_U32(ctx, 31, 0x3A4154u);
    ctx->pc = 0x3A4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A414Cu;
    // 0x3a4150: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3A414Cu, 0x3A4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4154u;
label_3a4154:
    // 0x3a4154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4158: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4158u;
        // 0x3a415c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4160u;
}
