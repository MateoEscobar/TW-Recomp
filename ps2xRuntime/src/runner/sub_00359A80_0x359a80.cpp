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

// Function: sub_00359A80
// Address: 0x359a80 - 0x359ae0
void sub_00359A80_0x359a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359A80_0x359a80");
#endif

    switch (ctx->pc) {
        case 0x359aa0u: goto label_359aa0;
        case 0x359aa8u: goto label_359aa8;
        case 0x359abcu: goto label_359abc;
        case 0x359ac8u: goto label_359ac8;
        default: break;
    }

    ctx->pc = 0x359a80u;

    // 0x359a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359a98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359A98u;
    SET_GPR_U32(ctx, 31, 0x359AA0u);
    ctx->pc = 0x359A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A98u;
    // 0x359a9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359A98u, 0x359AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AA0u;
label_359aa0:
    // 0x359aa0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359AA0u;
    SET_GPR_U32(ctx, 31, 0x359AA8u);
    ctx->pc = 0x359AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AA0u;
    // 0x359aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359AA0u, 0x359AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AA8u;
label_359aa8:
    // 0x359aa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ab4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359AB4u;
    SET_GPR_U32(ctx, 31, 0x359ABCu);
    ctx->pc = 0x359AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AB4u;
    // 0x359ab8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359AB4u, 0x359ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359ABCu;
label_359abc:
    // 0x359abc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x359abcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359ac0: 0xc08d784  jal         func_235E10
    ctx->pc = 0x359AC0u;
    SET_GPR_U32(ctx, 31, 0x359AC8u);
    ctx->pc = 0x359AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AC0u;
    // 0x359ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E10u, 0x359AC0u, 0x359AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AC8u;
label_359ac8:
    // 0x359ac8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x359AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AD8u;
        // 0x359adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359AE0u;
}
