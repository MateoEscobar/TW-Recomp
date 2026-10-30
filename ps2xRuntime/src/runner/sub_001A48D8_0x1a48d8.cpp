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

// Function: sub_001A48D8
// Address: 0x1a48d8 - 0x1a4930
void sub_001A48D8_0x1a48d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A48D8_0x1a48d8");
#endif

    switch (ctx->pc) {
        case 0x1a4900u: goto label_1a4900;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4918u: goto label_1a4918;
        default: break;
    }

    ctx->pc = 0x1a48d8u;

    // 0x1a48d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a48dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a48e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a48e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a48e4: 0x24429730  addiu       $v0, $v0, -0x68D0
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940464));
    // 0x1a48e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a48e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a48ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a48ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a48f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a48f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48f8: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A48F8u;
    SET_GPR_U32(ctx, 31, 0x1A4900u);
    ctx->pc = 0x1A48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48F8u;
    // 0x1a48fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A48F8u, 0x1A4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4900u;
label_1a4900:
    // 0x1a4900: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1a4904: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1A4904u;
    SET_GPR_U32(ctx, 31, 0x1A490Cu);
    ctx->pc = 0x1A4908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4904u;
    // 0x1a4908: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1A4904u, 0x1A490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A490Cu;
label_1a490c:
    // 0x1a490c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4910: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4910u;
    // 0x1a4914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1A4910u, 0x1A4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4918u;
label_1a4918:
    // 0x1a4918: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a491c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a491cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4924u;
        // 0x1a4928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A492Cu;
    // 0x1a492c: 0x0  nop
    ctx->pc = 0x1a492cu;
    // NOP
    ctx->pc = 0x1a4930u;
}
