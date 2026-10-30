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

// Function: sub_00306B50
// Address: 0x306b50 - 0x306b88
void sub_00306B50_0x306b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306B50_0x306b50");
#endif

    switch (ctx->pc) {
        case 0x306b6cu: goto label_306b6c;
        default: break;
    }

    ctx->pc = 0x306b50u;

    // 0x306b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306b54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x306b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306b64: 0xc0c1af4  jal         func_306BD0
    ctx->pc = 0x306B64u;
    SET_GPR_U32(ctx, 31, 0x306B6Cu);
    ctx->pc = 0x306B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B64u;
    // 0x306b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306BD0u, 0x306B64u, 0x306B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B6Cu;
label_306b6c:
    // 0x306b6c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x306b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x306b70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x306B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B7Cu;
        // 0x306b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306B84u;
    // 0x306b84: 0x0  nop
    ctx->pc = 0x306b84u;
    // NOP
    ctx->pc = 0x306b88u;
}
