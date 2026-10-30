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

// Function: sub_004DDE48
// Address: 0x4dde48 - 0x4dde98
void sub_004DDE48_0x4dde48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDE48_0x4dde48");
#endif

    switch (ctx->pc) {
        case 0x4dde78u: goto label_4dde78;
        case 0x4dde84u: goto label_4dde84;
        default: break;
    }

    ctx->pc = 0x4dde48u;

    // 0x4dde48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dde48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dde4c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4dde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4dde50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4dde50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4dde54: 0x244286a0  addiu       $v0, $v0, -0x7960
    ctx->pc = 0x4dde54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936224));
    // 0x4dde58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dde58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4dde5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dde5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dde60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dde60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dde64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dde64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dde68: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4dde68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x4dde6c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4dde6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4dde70: 0xc06f082  jal         func_1BC208
    ctx->pc = 0x4DDE70u;
    SET_GPR_U32(ctx, 31, 0x4DDE78u);
    ctx->pc = 0x4DDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDE70u;
    // 0x4dde74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC208u, 0x4DDE70u, 0x4DDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDE78u;
label_4dde78:
    // 0x4dde78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dde78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dde7c: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDE7Cu;
    SET_GPR_U32(ctx, 31, 0x4DDE84u);
    ctx->pc = 0x4DDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDE7Cu;
    // 0x4dde80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDE7Cu, 0x4DDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDE84u;
label_4dde84:
    // 0x4dde84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4dde84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dde88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dde88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dde8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dde8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dde90: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDE90u;
        // 0x4dde94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDE98u;
}
