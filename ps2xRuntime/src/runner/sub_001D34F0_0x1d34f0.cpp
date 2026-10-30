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

// Function: sub_001D34F0
// Address: 0x1d34f0 - 0x1d3558
void sub_001D34F0_0x1d34f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D34F0_0x1d34f0");
#endif

    switch (ctx->pc) {
        case 0x1d351cu: goto label_1d351c;
        case 0x1d3524u: goto label_1d3524;
        case 0x1d352cu: goto label_1d352c;
        case 0x1d3534u: goto label_1d3534;
        case 0x1d353cu: goto label_1d353c;
        case 0x1d3544u: goto label_1d3544;
        default: break;
    }

    ctx->pc = 0x1d34f0u;

    // 0x1d34f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d34f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d34f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d34f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d34f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d34f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d34fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3500: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d3500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3504: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3504u;
    {
        const bool branch_taken_0x1d3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3504) {
            ctx->pc = 0x1D3508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3504u;
            // 0x1d3508: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3548u;
            goto label_1d3548;
        }
    }
    ctx->pc = 0x1D350Cu;
    // 0x1d350c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d3510: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d3514: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D3514u;
    SET_GPR_U32(ctx, 31, 0x1D351Cu);
    ctx->pc = 0x1D3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3514u;
    // 0x1d3518: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D3514u, 0x1D351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D351Cu;
label_1d351c:
    // 0x1d351c: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D351Cu;
    SET_GPR_U32(ctx, 31, 0x1D3524u);
    ctx->pc = 0x1D3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D351Cu;
    // 0x1d3520: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D351Cu, 0x1D3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3524u;
label_1d3524:
    // 0x1d3524: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D3524u;
    SET_GPR_U32(ctx, 31, 0x1D352Cu);
    ctx->pc = 0x1D3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3524u;
    // 0x1d3528: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D3524u, 0x1D352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D352Cu;
label_1d352c:
    // 0x1d352c: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1D352Cu;
    SET_GPR_U32(ctx, 31, 0x1D3534u);
    ctx->pc = 0x1D3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D352Cu;
    // 0x1d3530: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D352Cu, 0x1D3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3534u;
label_1d3534:
    // 0x1d3534: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1D3534u;
    SET_GPR_U32(ctx, 31, 0x1D353Cu);
    ctx->pc = 0x1D3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3534u;
    // 0x1d3538: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1D3534u, 0x1D353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D353Cu;
label_1d353c:
    // 0x1d353c: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1D353Cu;
    SET_GPR_U32(ctx, 31, 0x1D3544u);
    ctx->pc = 0x1D3540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353Cu;
    // 0x1d3540: 0x26040640  addiu       $a0, $s0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1D353Cu, 0x1D3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3544u;
label_1d3544:
    // 0x1d3544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3548:
    // 0x1d3548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d354c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D354Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D354Cu;
        // 0x1d3550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D354Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3554u;
    // 0x1d3554: 0x0  nop
    ctx->pc = 0x1d3554u;
    // NOP
    ctx->pc = 0x1d3558u;
}
