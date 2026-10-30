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

// Function: sub_0038D668
// Address: 0x38d668 - 0x38d690
void sub_0038D668_0x38d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D668_0x38d668");
#endif

    switch (ctx->pc) {
        case 0x38d678u: goto label_38d678;
        case 0x38d67cu: goto label_38d67c;
        default: break;
    }

    ctx->pc = 0x38d668u;

    // 0x38d668: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d66c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x38d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38d670: 0xc0e3408  jal         func_38D020
    ctx->pc = 0x38D670u;
    SET_GPR_U32(ctx, 31, 0x38D678u);
    ctx->pc = 0x38D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D670u;
    // 0x38d674: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D020u, 0x38D670u, 0x38D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D678u;
label_38d678:
    // 0x38d678: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38d678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38d67c:
    // 0x38d67c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38d67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d684: 0x3e00008  jr          $ra
    ctx->pc = 0x38D684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D684u;
        // 0x38d688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D68Cu;
    // 0x38d68c: 0x0  nop
    ctx->pc = 0x38d68cu;
    // NOP
    ctx->pc = 0x38d690u;
}
