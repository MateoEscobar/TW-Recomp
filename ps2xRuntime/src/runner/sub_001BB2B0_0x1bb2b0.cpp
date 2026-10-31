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

// Function: sub_001BB2B0
// Address: 0x1bb2b0 - 0x1bb2f0
void sub_001BB2B0_0x1bb2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB2B0_0x1bb2b0");
#endif

    switch (ctx->pc) {
        case 0x1bb2ccu: goto label_1bb2cc;
        default: break;
    }

    ctx->pc = 0x1bb2b0u;

    // 0x1bb2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bb2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb2c4: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1BB2C4u;
    SET_GPR_U32(ctx, 31, 0x1BB2CCu);
    ctx->pc = 0x1BB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C4u;
    // 0x1bb2c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1BB2C4u, 0x1BB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2CCu;
label_1bb2cc:
    // 0x1bb2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb2d0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1bb2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1bb2d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bb2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1bb2d8: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1bb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1bb2dc: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1bb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x1bb2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E8u;
        // 0x1bb2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB2F0u;
}
