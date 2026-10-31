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

// Function: sub_00365540
// Address: 0x365540 - 0x3655a0
void sub_00365540_0x365540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365540_0x365540");
#endif

    switch (ctx->pc) {
        case 0x365560u: goto label_365560;
        case 0x365568u: goto label_365568;
        case 0x36557cu: goto label_36557c;
        case 0x365588u: goto label_365588;
        default: break;
    }

    ctx->pc = 0x365540u;

    // 0x365540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x365548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36554c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36554cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365558: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365558u;
    SET_GPR_U32(ctx, 31, 0x365560u);
    ctx->pc = 0x36555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365558u;
    // 0x36555c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365558u, 0x365560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365560u;
label_365560:
    // 0x365560: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365560u;
    SET_GPR_U32(ctx, 31, 0x365568u);
    ctx->pc = 0x365564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365560u;
    // 0x365564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365560u, 0x365568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365568u;
label_365568:
    // 0x365568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36556c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365574: 0xc1024c6  jal         func_409318
    ctx->pc = 0x365574u;
    SET_GPR_U32(ctx, 31, 0x36557Cu);
    ctx->pc = 0x365578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365574u;
    // 0x365578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x365574u, 0x36557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36557Cu;
label_36557c:
    // 0x36557c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36557cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x365580: 0xc08eb90  jal         func_23AE40
    ctx->pc = 0x365580u;
    SET_GPR_U32(ctx, 31, 0x365588u);
    ctx->pc = 0x365584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365580u;
    // 0x365584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE40u, 0x365580u, 0x365588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365588u;
label_365588:
    // 0x365588: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x365588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36558c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36558cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365598: 0x3e00008  jr          $ra
    ctx->pc = 0x365598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365598u;
        // 0x36559c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3655A0u;
}
