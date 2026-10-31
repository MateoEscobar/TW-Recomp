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

// Function: sub_001A3660
// Address: 0x1a3660 - 0x1a36b0
void sub_001A3660_0x1a3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3660_0x1a3660");
#endif

    switch (ctx->pc) {
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3698u: goto label_1a3698;
        default: break;
    }

    ctx->pc = 0x1a3660u;

    // 0x1a3660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a366c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1A366Cu;
    SET_GPR_U32(ctx, 31, 0x1A3674u);
    ctx->pc = 0x1A3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A366Cu;
    // 0x1a3670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A366Cu, 0x1A3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3674u;
label_1a3674:
    // 0x1a3674: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1a3678: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a367c: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1a3680: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A3680u;
    SET_GPR_U32(ctx, 31, 0x1A3688u);
    ctx->pc = 0x1A3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3680u;
    // 0x1a3684: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A3680u, 0x1A3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3688u;
label_1a3688:
    // 0x1a3688: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A3688u;
    SET_GPR_U32(ctx, 31, 0x1A3690u);
    ctx->pc = 0x1A368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3688u;
    // 0x1a368c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A3688u, 0x1A3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3690u;
label_1a3690:
    // 0x1a3690: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A3690u;
    SET_GPR_U32(ctx, 31, 0x1A3698u);
    ctx->pc = 0x1A3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3690u;
    // 0x1a3694: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A3690u, 0x1A3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3698u;
label_1a3698:
    // 0x1a3698: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a369c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a36a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a36a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a36a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A36A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A4u;
        // 0x1a36a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A36A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A36ACu;
    // 0x1a36ac: 0x0  nop
    ctx->pc = 0x1a36acu;
    // NOP
    ctx->pc = 0x1a36b0u;
}
