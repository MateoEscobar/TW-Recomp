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

// Function: sub_00288A48
// Address: 0x288a48 - 0x288a78
void sub_00288A48_0x288a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288A48_0x288a48");
#endif

    switch (ctx->pc) {
        case 0x288a60u: goto label_288a60;
        default: break;
    }

    ctx->pc = 0x288a48u;

    // 0x288a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x288a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288a58: 0xc0a229e  jal         func_288A78
    ctx->pc = 0x288A58u;
    SET_GPR_U32(ctx, 31, 0x288A60u);
    ctx->pc = 0x288A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A58u;
    // 0x288a5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A78u, 0x288A58u, 0x288A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A60u;
label_288a60:
    // 0x288a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x288A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A6Cu;
        // 0x288a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A74u;
    // 0x288a74: 0x0  nop
    ctx->pc = 0x288a74u;
    // NOP
    ctx->pc = 0x288a78u;
}
