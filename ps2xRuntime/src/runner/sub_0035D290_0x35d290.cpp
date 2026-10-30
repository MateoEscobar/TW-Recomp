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

// Function: sub_0035D290
// Address: 0x35d290 - 0x35d308
void sub_0035D290_0x35d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D290_0x35d290");
#endif

    switch (ctx->pc) {
        case 0x35d2b8u: goto label_35d2b8;
        case 0x35d2c0u: goto label_35d2c0;
        case 0x35d2d4u: goto label_35d2d4;
        case 0x35d2dcu: goto label_35d2dc;
        case 0x35d2e8u: goto label_35d2e8;
        default: break;
    }

    ctx->pc = 0x35d290u;

    // 0x35d290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d298: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35d29c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35d2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35d2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d2b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D2B0u;
    SET_GPR_U32(ctx, 31, 0x35D2B8u);
    ctx->pc = 0x35D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2B0u;
    // 0x35d2b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D2B0u, 0x35D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2B8u;
label_35d2b8:
    // 0x35d2b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D2B8u;
    SET_GPR_U32(ctx, 31, 0x35D2C0u);
    ctx->pc = 0x35D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2B8u;
    // 0x35d2bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D2B8u, 0x35D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2C0u;
label_35d2c0:
    // 0x35d2c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D2CCu;
    SET_GPR_U32(ctx, 31, 0x35D2D4u);
    ctx->pc = 0x35D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2CCu;
    // 0x35d2d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D2CCu, 0x35D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2D4u;
label_35d2d4:
    // 0x35d2d4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35D2D4u;
    SET_GPR_U32(ctx, 31, 0x35D2DCu);
    ctx->pc = 0x35D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2D4u;
    // 0x35d2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35D2D4u, 0x35D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2DCu;
label_35d2dc:
    // 0x35d2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2e0: 0xc08eb62  jal         func_23AD88
    ctx->pc = 0x35D2E0u;
    SET_GPR_U32(ctx, 31, 0x35D2E8u);
    ctx->pc = 0x35D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2E0u;
    // 0x35d2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD88u, 0x35D2E0u, 0x35D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2E8u;
label_35d2e8:
    // 0x35d2e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35d2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35d2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d2f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35d2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x35D2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2FCu;
        // 0x35d300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D304u;
    // 0x35d304: 0x0  nop
    ctx->pc = 0x35d304u;
    // NOP
    ctx->pc = 0x35d308u;
}
