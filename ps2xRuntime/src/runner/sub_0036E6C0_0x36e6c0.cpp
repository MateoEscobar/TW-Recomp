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

// Function: sub_0036E6C0
// Address: 0x36e6c0 - 0x36e720
void sub_0036E6C0_0x36e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E6C0_0x36e6c0");
#endif

    switch (ctx->pc) {
        case 0x36e6e0u: goto label_36e6e0;
        case 0x36e6e8u: goto label_36e6e8;
        case 0x36e6fcu: goto label_36e6fc;
        case 0x36e708u: goto label_36e708;
        default: break;
    }

    ctx->pc = 0x36e6c0u;

    // 0x36e6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e6c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36e6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e6d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E6D8u;
    SET_GPR_U32(ctx, 31, 0x36E6E0u);
    ctx->pc = 0x36E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E6D8u;
    // 0x36e6dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E6D8u, 0x36E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E6E0u;
label_36e6e0:
    // 0x36e6e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36E6E0u;
    SET_GPR_U32(ctx, 31, 0x36E6E8u);
    ctx->pc = 0x36E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E6E0u;
    // 0x36e6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36E6E0u, 0x36E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E6E8u;
label_36e6e8:
    // 0x36e6e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6f4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E6F4u;
    SET_GPR_U32(ctx, 31, 0x36E6FCu);
    ctx->pc = 0x36E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E6F4u;
    // 0x36e6f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E6F4u, 0x36E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E6FCu;
label_36e6fc:
    // 0x36e6fc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36e6fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36e700: 0xc10336a  jal         func_40CDA8
    ctx->pc = 0x36E700u;
    SET_GPR_U32(ctx, 31, 0x36E708u);
    ctx->pc = 0x36E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E700u;
    // 0x36e704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CDA8u, 0x36E700u, 0x36E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E708u;
label_36e708:
    // 0x36e708: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36e708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e70c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e718: 0x3e00008  jr          $ra
    ctx->pc = 0x36E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E718u;
        // 0x36e71c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E720u;
}
