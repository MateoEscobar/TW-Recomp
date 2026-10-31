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

// Function: sub_0032C288
// Address: 0x32c288 - 0x32c2f0
void sub_0032C288_0x32c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C288_0x32c288");
#endif

    switch (ctx->pc) {
        case 0x32c2a4u: goto label_32c2a4;
        case 0x32c2b4u: goto label_32c2b4;
        case 0x32c2bcu: goto label_32c2bc;
        case 0x32c2c8u: goto label_32c2c8;
        case 0x32c2d4u: goto label_32c2d4;
        default: break;
    }

    ctx->pc = 0x32c288u;

    // 0x32c288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c28c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c290: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32c290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32c294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c29c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C29Cu;
    SET_GPR_U32(ctx, 31, 0x32C2A4u);
    ctx->pc = 0x32C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C29Cu;
    // 0x32c2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C29Cu, 0x32C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2A4u;
label_32c2a4:
    // 0x32c2a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32c2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c2ac: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C2ACu;
    SET_GPR_U32(ctx, 31, 0x32C2B4u);
    ctx->pc = 0x32C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2ACu;
    // 0x32c2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C2ACu, 0x32C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2B4u;
label_32c2b4:
    // 0x32c2b4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C2B4u;
    SET_GPR_U32(ctx, 31, 0x32C2BCu);
    ctx->pc = 0x32C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2B4u;
    // 0x32c2b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C2B4u, 0x32C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2BCu;
label_32c2bc:
    // 0x32c2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2c0: 0xc12e1d2  jal         func_4B8748
    ctx->pc = 0x32C2C0u;
    SET_GPR_U32(ctx, 31, 0x32C2C8u);
    ctx->pc = 0x32C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2C0u;
    // 0x32c2c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8748u, 0x32C2C0u, 0x32C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2C8u;
label_32c2c8:
    // 0x32c2c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2cc: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C2CCu;
    SET_GPR_U32(ctx, 31, 0x32C2D4u);
    ctx->pc = 0x32C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2CCu;
    // 0x32c2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C2CCu, 0x32C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C2D4u;
label_32c2d4:
    // 0x32c2d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32c2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2E4u;
        // 0x32c2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C2ECu;
    // 0x32c2ec: 0x0  nop
    ctx->pc = 0x32c2ecu;
    // NOP
    ctx->pc = 0x32c2f0u;
}
