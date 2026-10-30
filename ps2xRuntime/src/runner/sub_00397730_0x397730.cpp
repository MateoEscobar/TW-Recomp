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

// Function: sub_00397730
// Address: 0x397730 - 0x397780
void sub_00397730_0x397730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397730_0x397730");
#endif

    switch (ctx->pc) {
        case 0x397750u: goto label_397750;
        case 0x397758u: goto label_397758;
        case 0x397768u: goto label_397768;
        case 0x397770u: goto label_397770;
        default: break;
    }

    ctx->pc = 0x397730u;

    // 0x397730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x397730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x397734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x397734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x397738: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x397738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39773c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39773cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x397740: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397740u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x397744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397748: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x397748u;
    SET_GPR_U32(ctx, 31, 0x397750u);
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x397748u, 0x397750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397750u;
label_397750:
    // 0x397750: 0xc0e4060  jal         func_390180
    ctx->pc = 0x397750u;
    SET_GPR_U32(ctx, 31, 0x397758u);
    ctx->pc = 0x397754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397750u;
    // 0x397754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397750u, 0x397758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397758u;
label_397758:
    // 0x397758: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39775c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397760: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x397760u;
    SET_GPR_U32(ctx, 31, 0x397768u);
    ctx->pc = 0x397764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397760u;
    // 0x397764: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x397760u, 0x397768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397768u;
label_397768:
    // 0x397768: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x397768u;
    SET_GPR_U32(ctx, 31, 0x397770u);
    ctx->pc = 0x39776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397768u;
    // 0x39776c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x397768u, 0x397770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397770u;
label_397770:
    // 0x397770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x397770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397778: 0x3e00008  jr          $ra
    ctx->pc = 0x397778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397778u;
        // 0x39777c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397780u;
}
