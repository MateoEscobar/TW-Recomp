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

// Function: sub_0017EC38
// Address: 0x17ec38 - 0x17ec78
void sub_0017EC38_0x17ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EC38_0x17ec38");
#endif

    switch (ctx->pc) {
        case 0x17ec54u: goto label_17ec54;
        case 0x17ec64u: goto label_17ec64;
        default: break;
    }

    ctx->pc = 0x17ec38u;

    // 0x17ec38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ec3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ec40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ec44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ec44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ec4c: 0xc05fb30  jal         func_17ECC0
    ctx->pc = 0x17EC4Cu;
    SET_GPR_U32(ctx, 31, 0x17EC54u);
    ctx->pc = 0x17EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC4Cu;
    // 0x17ec50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC0u, 0x17EC4Cu, 0x17EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC54u;
label_17ec54:
    // 0x17ec54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec5c: 0xc05fb58  jal         func_17ED60
    ctx->pc = 0x17EC5Cu;
    SET_GPR_U32(ctx, 31, 0x17EC64u);
    ctx->pc = 0x17EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC5Cu;
    // 0x17ec60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED60u, 0x17EC5Cu, 0x17EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC64u;
label_17ec64:
    // 0x17ec64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ec68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ec68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ec6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec70: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC70u;
        // 0x17ec74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC78u;
}
