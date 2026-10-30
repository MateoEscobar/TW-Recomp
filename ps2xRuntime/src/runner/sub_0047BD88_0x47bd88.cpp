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

// Function: sub_0047BD88
// Address: 0x47bd88 - 0x47bdb0
void sub_0047BD88_0x47bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BD88_0x47bd88");
#endif

    switch (ctx->pc) {
        case 0x47bd9cu: goto label_47bd9c;
        default: break;
    }

    ctx->pc = 0x47bd88u;

    // 0x47bd88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47bd8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47bd90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47bd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47bd94: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x47BD94u;
    SET_GPR_U32(ctx, 31, 0x47BD9Cu);
    ctx->pc = 0x47BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BD94u;
    // 0x47bd98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x47BD94u, 0x47BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BD9Cu;
label_47bd9c:
    // 0x47bd9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47bd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47bda4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47bda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x47BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BDA8u;
        // 0x47bdac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BDB0u;
}
