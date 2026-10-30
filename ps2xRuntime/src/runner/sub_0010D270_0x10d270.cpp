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

// Function: sub_0010D270
// Address: 0x10d270 - 0x10d2a0
void sub_0010D270_0x10d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D270_0x10d270");
#endif

    ctx->pc = 0x10d270u;

    // 0x10d270: 0x800013  mtlo        $a0
    ctx->pc = 0x10d270u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x10d274: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D274u;
    {
        const bool branch_taken_0x10d274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D274u;
        // 0x10d278: 0x240300d0  addiu       $v1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d274) {
            ctx->pc = 0x10D290u;
            goto label_10d290;
        }
    }
    ctx->pc = 0x10D27Cu;
    // 0x10d27c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d280: 0x70a31800  madd        $v1, $a1, $v1
    ctx->pc = 0x10d280u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10d284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d288: 0x3e00008  jr          $ra
    ctx->pc = 0x10D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D288u;
        // 0x10d28c: 0xac64008c  sw          $a0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D290u;
label_10d290:
    // 0x10d290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d294: 0x70a31800  madd        $v1, $a1, $v1
    ctx->pc = 0x10d294u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10d298: 0x3e00008  jr          $ra
    ctx->pc = 0x10D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D298u;
        // 0x10d29c: 0xac60008c  sw          $zero, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2A0u;
}
