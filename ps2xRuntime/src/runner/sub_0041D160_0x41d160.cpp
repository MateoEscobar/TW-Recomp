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

// Function: sub_0041D160
// Address: 0x41d160 - 0x41d1b0
void sub_0041D160_0x41d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D160_0x41d160");
#endif

    switch (ctx->pc) {
        case 0x41d178u: goto label_41d178;
        case 0x41d184u: goto label_41d184;
        default: break;
    }

    ctx->pc = 0x41d160u;

    // 0x41d160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41d164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41d168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41d16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d170: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x41D170u;
    SET_GPR_U32(ctx, 31, 0x41D178u);
    ctx->pc = 0x41D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D170u;
    // 0x41d174: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x41D170u, 0x41D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D178u;
label_41d178:
    // 0x41d178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41d178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d17c: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x41D17Cu;
    SET_GPR_U32(ctx, 31, 0x41D184u);
    ctx->pc = 0x41D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D17Cu;
    // 0x41d180: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x41D17Cu, 0x41D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D184u;
label_41d184:
    // 0x41d184: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x41d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41d188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d18c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x41d18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41d190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d194: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41d194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x41d198: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x41d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41d19c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d1a0: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x41d1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x41d1a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x41d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x41D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D1A8u;
        // 0x41d1ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D1B0u;
}
