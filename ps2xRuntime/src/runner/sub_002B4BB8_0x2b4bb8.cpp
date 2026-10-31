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

// Function: sub_002B4BB8
// Address: 0x2b4bb8 - 0x2b4c00
void sub_002B4BB8_0x2b4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4BB8_0x2b4bb8");
#endif

    switch (ctx->pc) {
        case 0x2b4bdcu: goto label_2b4bdc;
        case 0x2b4be4u: goto label_2b4be4;
        default: break;
    }

    ctx->pc = 0x2b4bb8u;

    // 0x2b4bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4bcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4bd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b4bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4bd4: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B4BD4u;
    SET_GPR_U32(ctx, 31, 0x2B4BDCu);
    ctx->pc = 0x2B4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BD4u;
    // 0x2b4bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B4BD4u, 0x2B4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BDCu;
label_2b4bdc:
    // 0x2b4bdc: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2B4BDCu;
    SET_GPR_U32(ctx, 31, 0x2B4BE4u);
    ctx->pc = 0x2B4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BDCu;
    // 0x2b4be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2B4BDCu, 0x2B4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BE4u;
label_2b4be4:
    // 0x2b4be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4bec: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2b4becu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2b4bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4bf4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b4bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BF8u;
        // 0x2b4bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C00u;
}
