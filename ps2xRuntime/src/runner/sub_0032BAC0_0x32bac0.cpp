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

// Function: sub_0032BAC0
// Address: 0x32bac0 - 0x32bb10
void sub_0032BAC0_0x32bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BAC0_0x32bac0");
#endif

    switch (ctx->pc) {
        case 0x32bad8u: goto label_32bad8;
        case 0x32bae0u: goto label_32bae0;
        case 0x32baecu: goto label_32baec;
        case 0x32baf8u: goto label_32baf8;
        default: break;
    }

    ctx->pc = 0x32bac0u;

    // 0x32bac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bad0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BAD0u;
    SET_GPR_U32(ctx, 31, 0x32BAD8u);
    ctx->pc = 0x32BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAD0u;
    // 0x32bad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BAD0u, 0x32BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAD8u;
label_32bad8:
    // 0x32bad8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BAD8u;
    SET_GPR_U32(ctx, 31, 0x32BAE0u);
    ctx->pc = 0x32BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAD8u;
    // 0x32badc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BAD8u, 0x32BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAE0u;
label_32bae0:
    // 0x32bae0: 0x46000305  abs.s       $f12, $f0
    ctx->pc = 0x32bae0u;
    ctx->f[12] = FPU_ABS_S(ctx->f[0]);
    // 0x32bae4: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BAE4u;
    SET_GPR_U32(ctx, 31, 0x32BAECu);
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BAE4u, 0x32BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAECu;
label_32baec:
    // 0x32baec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32baecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32baf0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BAF0u;
    SET_GPR_U32(ctx, 31, 0x32BAF8u);
    ctx->pc = 0x32BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAF0u;
    // 0x32baf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BAF0u, 0x32BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAF8u;
label_32baf8:
    // 0x32baf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32baf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb04: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB04u;
        // 0x32bb08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB0Cu;
    // 0x32bb0c: 0x0  nop
    ctx->pc = 0x32bb0cu;
    // NOP
    ctx->pc = 0x32bb10u;
}
