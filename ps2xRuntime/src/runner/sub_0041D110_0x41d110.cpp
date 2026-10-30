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

// Function: sub_0041D110
// Address: 0x41d110 - 0x41d160
void sub_0041D110_0x41d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D110_0x41d110");
#endif

    switch (ctx->pc) {
        case 0x41d128u: goto label_41d128;
        case 0x41d134u: goto label_41d134;
        default: break;
    }

    ctx->pc = 0x41d110u;

    // 0x41d110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41d114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41d118: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41d11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d120: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x41D120u;
    SET_GPR_U32(ctx, 31, 0x41D128u);
    ctx->pc = 0x41D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D120u;
    // 0x41d124: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x41D120u, 0x41D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D128u;
label_41d128:
    // 0x41d128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d12c: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x41D12Cu;
    SET_GPR_U32(ctx, 31, 0x41D134u);
    ctx->pc = 0x41D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D12Cu;
    // 0x41d130: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x41D12Cu, 0x41D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D134u;
label_41d134:
    // 0x41d134: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x41d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41d138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d13c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41d13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41d140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d144: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x41d148: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x41d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41d14c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d150: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x41d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x41d154: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x41d154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x41d158: 0x3e00008  jr          $ra
    ctx->pc = 0x41D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D158u;
        // 0x41d15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D160u;
}
