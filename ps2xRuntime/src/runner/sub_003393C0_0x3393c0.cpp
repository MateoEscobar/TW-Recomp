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

// Function: sub_003393C0
// Address: 0x3393c0 - 0x339448
void sub_003393C0_0x3393c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003393C0_0x3393c0");
#endif

    switch (ctx->pc) {
        case 0x3393e8u: goto label_3393e8;
        default: break;
    }

    ctx->pc = 0x3393c0u;

    // 0x3393c0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3393c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3393c4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3393c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x3393c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3393c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3393cc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3393CCu;
    {
        const bool branch_taken_0x3393cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393CCu;
        // 0x3393d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393cc) {
            ctx->pc = 0x3393DCu;
            goto label_3393dc;
        }
    }
    ctx->pc = 0x3393D4u;
    // 0x3393d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3393D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3393D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393D4u;
        // 0x3393d8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3393D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3393DCu;
label_3393dc:
    // 0x3393dc: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x3393dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3393e0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3393e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3393e4: 0x0  nop
    ctx->pc = 0x3393e4u;
    // NOP
label_3393e8:
    // 0x3393e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3393e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3393ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3393ECu;
    {
        const bool branch_taken_0x3393ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3393ec) {
            ctx->pc = 0x3393F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3393ECu;
            // 0x3393f0: 0x8cc30018  lw          $v1, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339408u;
            goto label_339408;
        }
    }
    ctx->pc = 0x3393F4u;
    // 0x3393f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3393f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393f8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3393f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x3393fc: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x3393fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x339400: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x339400u;
    {
        const bool branch_taken_0x339400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339400u;
        // 0x339404: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339400) {
            ctx->pc = 0x339428u;
            goto label_339428;
        }
    }
    ctx->pc = 0x339408u;
label_339408:
    // 0x339408: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x339408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x33940c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x33940cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x339410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x339410u;
    {
        const bool branch_taken_0x339410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339410) {
            ctx->pc = 0x339428u;
            goto label_339428;
        }
    }
    ctx->pc = 0x339418u;
    // 0x339418: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x339418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33941c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x33941cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x339420: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x339420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x339424: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x339424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339428:
    // 0x339428: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x339428u;
    {
        const bool branch_taken_0x339428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x339428) {
            ctx->pc = 0x33942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339428u;
            // 0x33942c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3393E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3393e8;
        }
    }
    ctx->pc = 0x339430u;
    // 0x339430: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339430u;
    {
        const bool branch_taken_0x339430 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x339430) {
            ctx->pc = 0x339440u;
            goto label_339440;
        }
    }
    ctx->pc = 0x339438u;
    // 0x339438: 0x3e00008  jr          $ra
    ctx->pc = 0x339438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339438u;
        // 0x33943c: 0xace60010  sw          $a2, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339440u;
label_339440:
    // 0x339440: 0x3e00008  jr          $ra
    ctx->pc = 0x339440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339440u;
        // 0x339444: 0xace60014  sw          $a2, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339448u;
}
