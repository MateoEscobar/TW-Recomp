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

// Function: sub_001D5350
// Address: 0x1d5350 - 0x1d5398
void sub_001D5350_0x1d5350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5350_0x1d5350");
#endif

    switch (ctx->pc) {
        case 0x1d5364u: goto label_1d5364;
        case 0x1d537cu: goto label_1d537c;
        case 0x1d5384u: goto label_1d5384;
        default: break;
    }

    ctx->pc = 0x1d5350u;

    // 0x1d5350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d535c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D535Cu;
    SET_GPR_U32(ctx, 31, 0x1D5364u);
    ctx->pc = 0x1D5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D535Cu;
    // 0x1d5360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D535Cu, 0x1D5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5364u;
label_1d5364:
    // 0x1d5364: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d5364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d5368: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d5368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1d536c: 0x2463b8c8  addiu       $v1, $v1, -0x4738
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949064));
    // 0x1d5370: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d5374: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D5374u;
    SET_GPR_U32(ctx, 31, 0x1D537Cu);
    ctx->pc = 0x1D5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5374u;
    // 0x1d5378: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D5374u, 0x1D537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D537Cu;
label_1d537c:
    // 0x1d537c: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D537Cu;
    SET_GPR_U32(ctx, 31, 0x1D5384u);
    ctx->pc = 0x1D5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D537Cu;
    // 0x1d5380: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D537Cu, 0x1D5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5384u;
label_1d5384:
    // 0x1d5384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d538c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5390: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5390u;
        // 0x1d5394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5398u;
}
