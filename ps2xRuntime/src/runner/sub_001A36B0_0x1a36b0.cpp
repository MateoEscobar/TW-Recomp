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

// Function: sub_001A36B0
// Address: 0x1a36b0 - 0x1a3720
void sub_001A36B0_0x1a36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A36B0_0x1a36b0");
#endif

    switch (ctx->pc) {
        case 0x1a36d8u: goto label_1a36d8;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3708u: goto label_1a3708;
        default: break;
    }

    ctx->pc = 0x1a36b0u;

    // 0x1a36b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a36b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a36b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a36bc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1a36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1a36c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a36c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a36c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a36cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a36ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36d0: 0xc068e36  jal         func_1A38D8
    ctx->pc = 0x1A36D0u;
    SET_GPR_U32(ctx, 31, 0x1A36D8u);
    ctx->pc = 0x1A36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36D0u;
    // 0x1a36d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38D8u, 0x1A36D0u, 0x1A36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36D8u;
label_1a36d8:
    // 0x1a36d8: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1a36dc: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1A36DCu;
    SET_GPR_U32(ctx, 31, 0x1A36E4u);
    ctx->pc = 0x1A36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36DCu;
    // 0x1a36e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A36DCu, 0x1A36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36E4u;
label_1a36e4:
    // 0x1a36e4: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1a36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1a36e8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36E8u;
    // 0x1a36ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A36E8u, 0x1A36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36F0u;
label_1a36f0:
    // 0x1a36f0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a36f4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1A36F4u;
    SET_GPR_U32(ctx, 31, 0x1A36FCu);
    ctx->pc = 0x1A36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36F4u;
    // 0x1a36f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A36F4u, 0x1A36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36FCu;
label_1a36fc:
    // 0x1a36fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3700: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1A3700u;
    SET_GPR_U32(ctx, 31, 0x1A3708u);
    ctx->pc = 0x1A3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3700u;
    // 0x1a3704: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1A3700u, 0x1A3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3708u;
label_1a3708:
    // 0x1a3708: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a3708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a370c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a370cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3714: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3714u;
        // 0x1a3718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A371Cu;
    // 0x1a371c: 0x0  nop
    ctx->pc = 0x1a371cu;
    // NOP
    ctx->pc = 0x1a3720u;
}
