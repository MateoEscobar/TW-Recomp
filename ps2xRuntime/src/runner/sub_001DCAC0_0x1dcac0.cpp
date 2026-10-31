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

// Function: sub_001DCAC0
// Address: 0x1dcac0 - 0x1dcb20
void sub_001DCAC0_0x1dcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCAC0_0x1dcac0");
#endif

    switch (ctx->pc) {
        case 0x1dcae8u: goto label_1dcae8;
        case 0x1dcaf8u: goto label_1dcaf8;
        case 0x1dcb08u: goto label_1dcb08;
        case 0x1dcb10u: goto label_1dcb10;
        default: break;
    }

    ctx->pc = 0x1dcac0u;

    // 0x1dcac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dcac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dcac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dcac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dcacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcad8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1dcad8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1dcadc: 0xae031b88  sw          $v1, 0x1B88($s0)
    ctx->pc = 0x1dcadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7048), GPR_U32(ctx, 3));
    // 0x1dcae0: 0xc107458  jal         func_41D160
    ctx->pc = 0x1DCAE0u;
    SET_GPR_U32(ctx, 31, 0x1DCAE8u);
    ctx->pc = 0x1DCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCAE0u;
    // 0x1dcae4: 0xae033a78  sw          $v1, 0x3A78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 14968), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DCAE0u, 0x1DCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAE8u;
label_1dcae8:
    // 0x1dcae8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCAE8u;
    {
        const bool branch_taken_0x1dcae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcae8) {
            ctx->pc = 0x1DCAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCAE8u;
            // 0x1dcaec: 0x26102b00  addiu       $s0, $s0, 0x2B00 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11008));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB00u;
            goto label_1dcb00;
        }
    }
    ctx->pc = 0x1DCAF0u;
    // 0x1dcaf0: 0xc07528c  jal         func_1D4A30
    ctx->pc = 0x1DCAF0u;
    SET_GPR_U32(ctx, 31, 0x1DCAF8u);
    ctx->pc = 0x1DCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCAF0u;
    // 0x1dcaf4: 0x26042b00  addiu       $a0, $s0, 0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A30u, 0x1DCAF0u, 0x1DCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAF8u;
label_1dcaf8:
    // 0x1dcaf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCAF8u;
    {
        const bool branch_taken_0x1dcaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF8u;
        // 0x1dcafc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaf8) {
            ctx->pc = 0x1DCB14u;
            goto label_1dcb14;
        }
    }
    ctx->pc = 0x1DCB00u;
label_1dcb00:
    // 0x1dcb00: 0xc07528c  jal         func_1D4A30
    ctx->pc = 0x1DCB00u;
    SET_GPR_U32(ctx, 31, 0x1DCB08u);
    ctx->pc = 0x1DCB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB00u;
    // 0x1dcb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A30u, 0x1DCB00u, 0x1DCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB08u;
label_1dcb08:
    // 0x1dcb08: 0xc07528c  jal         func_1D4A30
    ctx->pc = 0x1DCB08u;
    SET_GPR_U32(ctx, 31, 0x1DCB10u);
    ctx->pc = 0x1DCB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB08u;
    // 0x1dcb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A30u, 0x1DCB08u, 0x1DCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB10u;
label_1dcb10:
    // 0x1dcb10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dcb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcb14:
    // 0x1dcb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB18u;
        // 0x1dcb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB20u;
}
