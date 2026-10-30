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

// Function: sub_0032FD60
// Address: 0x32fd60 - 0x32fda8
void sub_0032FD60_0x32fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FD60_0x32fd60");
#endif

    switch (ctx->pc) {
        case 0x32fd80u: goto label_32fd80;
        case 0x32fd90u: goto label_32fd90;
        default: break;
    }

    ctx->pc = 0x32fd60u;

    // 0x32fd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32fd64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32fd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32fd6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32fd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fd78: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x32FD78u;
    SET_GPR_U32(ctx, 31, 0x32FD80u);
    ctx->pc = 0x32FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD78u;
    // 0x32fd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x32FD78u, 0x32FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD80u;
label_32fd80:
    // 0x32fd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32fd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd88: 0xc0cbebc  jal         func_32FAF0
    ctx->pc = 0x32FD88u;
    SET_GPR_U32(ctx, 31, 0x32FD90u);
    ctx->pc = 0x32FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD88u;
    // 0x32fd8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x32FD88u, 0x32FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD90u;
label_32fd90:
    // 0x32fd90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32fd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fd94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fd98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x32FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD9Cu;
        // 0x32fda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDA4u;
    // 0x32fda4: 0x0  nop
    ctx->pc = 0x32fda4u;
    // NOP
    ctx->pc = 0x32fda8u;
}
