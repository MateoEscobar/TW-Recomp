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

// Function: sub_001D66D0
// Address: 0x1d66d0 - 0x1d6738
void sub_001D66D0_0x1d66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D66D0_0x1d66d0");
#endif

    switch (ctx->pc) {
        case 0x1d6700u: goto label_1d6700;
        case 0x1d670cu: goto label_1d670c;
        case 0x1d6718u: goto label_1d6718;
        case 0x1d6724u: goto label_1d6724;
        default: break;
    }

    ctx->pc = 0x1d66d0u;

    // 0x1d66d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d66d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d66d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d66dc: 0x2442bc08  addiu       $v0, $v0, -0x43F8
    ctx->pc = 0x1d66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949896));
    // 0x1d66e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d66e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d66e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d66e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d66e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d66ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d66ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d66f4: 0x260403f0  addiu       $a0, $s0, 0x3F0
    ctx->pc = 0x1d66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x1d66f8: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D66F8u;
    SET_GPR_U32(ctx, 31, 0x1D6700u);
    ctx->pc = 0x1D66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66F8u;
    // 0x1d66fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D66F8u, 0x1D6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6700u;
label_1d6700:
    // 0x1d6700: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1d6704: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D6704u;
    SET_GPR_U32(ctx, 31, 0x1D670Cu);
    ctx->pc = 0x1D6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6704u;
    // 0x1d6708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D6704u, 0x1D670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D670Cu;
label_1d670c:
    // 0x1d670c: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1d670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1d6710: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D6710u;
    SET_GPR_U32(ctx, 31, 0x1D6718u);
    ctx->pc = 0x1D6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6710u;
    // 0x1d6714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D6710u, 0x1D6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6718u;
label_1d6718:
    // 0x1d6718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d671c: 0xc07590c  jal         func_1D6430
    ctx->pc = 0x1D671Cu;
    SET_GPR_U32(ctx, 31, 0x1D6724u);
    ctx->pc = 0x1D6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D671Cu;
    // 0x1d6720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6430u, 0x1D671Cu, 0x1D6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6724u;
label_1d6724:
    // 0x1d6724: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d672c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d672cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6730: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6730u;
        // 0x1d6734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6738u;
}
