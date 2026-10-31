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

// Function: sub_00359080
// Address: 0x359080 - 0x3590e0
void sub_00359080_0x359080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359080_0x359080");
#endif

    switch (ctx->pc) {
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a8u: goto label_3590a8;
        case 0x3590bcu: goto label_3590bc;
        case 0x3590c8u: goto label_3590c8;
        default: break;
    }

    ctx->pc = 0x359080u;

    // 0x359080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359088: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35908c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359098: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359098u;
    SET_GPR_U32(ctx, 31, 0x3590A0u);
    ctx->pc = 0x35909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359098u;
    // 0x35909c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359098u, 0x3590A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590A0u;
label_3590a0:
    // 0x3590a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3590A0u;
    SET_GPR_U32(ctx, 31, 0x3590A8u);
    ctx->pc = 0x3590A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590A0u;
    // 0x3590a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3590A0u, 0x3590A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590A8u;
label_3590a8:
    // 0x3590a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3590a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3590acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3590b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590b4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3590B4u;
    SET_GPR_U32(ctx, 31, 0x3590BCu);
    ctx->pc = 0x3590B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590B4u;
    // 0x3590b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3590B4u, 0x3590BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590BCu;
label_3590bc:
    // 0x3590bc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3590bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3590c0: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x3590C0u;
    SET_GPR_U32(ctx, 31, 0x3590C8u);
    ctx->pc = 0x3590C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590C0u;
    // 0x3590c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x3590C0u, 0x3590C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590C8u;
label_3590c8:
    // 0x3590c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3590c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3590cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3590ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3590d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3590d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3590d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3590d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3590D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3590DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590D8u;
        // 0x3590dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3590D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3590E0u;
}
