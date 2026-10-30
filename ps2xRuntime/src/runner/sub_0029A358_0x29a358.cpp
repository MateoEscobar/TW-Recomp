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

// Function: sub_0029A358
// Address: 0x29a358 - 0x29a388
void sub_0029A358_0x29a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A358_0x29a358");
#endif

    switch (ctx->pc) {
        case 0x29a370u: goto label_29a370;
        default: break;
    }

    ctx->pc = 0x29a358u;

    // 0x29a358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29a364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a368: 0xc0a68e2  jal         func_29A388
    ctx->pc = 0x29A368u;
    SET_GPR_U32(ctx, 31, 0x29A370u);
    ctx->pc = 0x29A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A368u;
    // 0x29a36c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A388u, 0x29A368u, 0x29A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A370u;
label_29a370:
    // 0x29a370: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29a378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A37Cu;
        // 0x29a380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A384u;
    // 0x29a384: 0x0  nop
    ctx->pc = 0x29a384u;
    // NOP
    ctx->pc = 0x29a388u;
}
