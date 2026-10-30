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

// Function: sub_0023AE40
// Address: 0x23ae40 - 0x23ae90
void sub_0023AE40_0x23ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE40_0x23ae40");
#endif

    switch (ctx->pc) {
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae74u: goto label_23ae74;
        default: break;
    }

    ctx->pc = 0x23ae40u;

    // 0x23ae40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ae44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ae48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ae4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23ae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ae54: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23AE54u;
    SET_GPR_U32(ctx, 31, 0x23AE5Cu);
    ctx->pc = 0x23AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE54u;
    // 0x23ae58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23AE54u, 0x23AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE5Cu;
label_23ae5c:
    // 0x23ae5c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23AE5Cu;
    SET_GPR_U32(ctx, 31, 0x23AE64u);
    ctx->pc = 0x23AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE5Cu;
    // 0x23ae60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23AE5Cu, 0x23AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE64u;
label_23ae64:
    // 0x23ae64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AE64u;
    {
        const bool branch_taken_0x23ae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ae64) {
            ctx->pc = 0x23AE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE64u;
            // 0x23ae68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE80u;
            goto label_23ae80;
        }
    }
    ctx->pc = 0x23AE6Cu;
    // 0x23ae6c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x23AE6Cu;
    SET_GPR_U32(ctx, 31, 0x23AE74u);
    ctx->pc = 0x23AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE6Cu;
    // 0x23ae70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x23AE6Cu, 0x23AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE74u;
label_23ae74:
    // 0x23ae74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23AE74u;
    {
        const bool branch_taken_0x23ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ae74) {
            ctx->pc = 0x23AE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE74u;
            // 0x23ae78: 0xa050001e  sb          $s0, 0x1E($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 30), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE7Cu;
            goto label_23ae7c;
        }
    }
    ctx->pc = 0x23AE7Cu;
label_23ae7c:
    // 0x23ae7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ae7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ae80:
    // 0x23ae80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ae80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ae84: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE84u;
        // 0x23ae88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AE8Cu;
    // 0x23ae8c: 0x0  nop
    ctx->pc = 0x23ae8cu;
    // NOP
    ctx->pc = 0x23ae90u;
}
