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

// Function: sub_003975C0
// Address: 0x3975c0 - 0x397610
void sub_003975C0_0x3975c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003975C0_0x3975c0");
#endif

    switch (ctx->pc) {
        case 0x3975e0u: goto label_3975e0;
        case 0x3975e8u: goto label_3975e8;
        case 0x3975f8u: goto label_3975f8;
        case 0x397600u: goto label_397600;
        default: break;
    }

    ctx->pc = 0x3975c0u;

    // 0x3975c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3975c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3975c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3975c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3975c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3975c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3975cc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3975ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3975d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3975d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3975d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3975d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3975d8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3975D8u;
    SET_GPR_U32(ctx, 31, 0x3975E0u);
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3975D8u, 0x3975E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3975E0u;
label_3975e0:
    // 0x3975e0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3975E0u;
    SET_GPR_U32(ctx, 31, 0x3975E8u);
    ctx->pc = 0x3975E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3975E0u;
    // 0x3975e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3975E0u, 0x3975E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3975E8u;
label_3975e8:
    // 0x3975e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3975e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3975ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3975ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3975f0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3975F0u;
    SET_GPR_U32(ctx, 31, 0x3975F8u);
    ctx->pc = 0x3975F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3975F0u;
    // 0x3975f4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3975F0u, 0x3975F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3975F8u;
label_3975f8:
    // 0x3975f8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3975F8u;
    SET_GPR_U32(ctx, 31, 0x397600u);
    ctx->pc = 0x3975FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3975F8u;
    // 0x3975fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3975F8u, 0x397600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397600u;
label_397600:
    // 0x397600: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x397600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397608: 0x3e00008  jr          $ra
    ctx->pc = 0x397608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397608u;
        // 0x39760c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397610u;
}
