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

// Function: sub_003323A8
// Address: 0x3323a8 - 0x3323d8
void sub_003323A8_0x3323a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003323A8_0x3323a8");
#endif

    switch (ctx->pc) {
        case 0x3323bcu: goto label_3323bc;
        case 0x3323c8u: goto label_3323c8;
        default: break;
    }

    ctx->pc = 0x3323a8u;

    // 0x3323a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3323a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3323ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3323acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3323b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3323b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3323b4: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x3323B4u;
    SET_GPR_U32(ctx, 31, 0x3323BCu);
    ctx->pc = 0x3323B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323B4u;
    // 0x3323b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x3323B4u, 0x3323BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323BCu;
label_3323bc:
    // 0x3323bc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x3323bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3323c0: 0xc0cc710  jal         func_331C40
    ctx->pc = 0x3323C0u;
    SET_GPR_U32(ctx, 31, 0x3323C8u);
    ctx->pc = 0x3323C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323C0u;
    // 0x3323c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C40u, 0x3323C0u, 0x3323C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323C8u;
label_3323c8:
    // 0x3323c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3323c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3323cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3323ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3323d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3323D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3323D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323D0u;
        // 0x3323d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3323D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3323D8u;
}
