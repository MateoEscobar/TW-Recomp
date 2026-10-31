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

// Function: sub_00379288
// Address: 0x379288 - 0x3792c0
void sub_00379288_0x379288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379288_0x379288");
#endif

    switch (ctx->pc) {
        case 0x37929cu: goto label_37929c;
        case 0x3792a4u: goto label_3792a4;
        case 0x3792acu: goto label_3792ac;
        default: break;
    }

    ctx->pc = 0x379288u;

    // 0x379288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37928c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379294: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379294u;
    SET_GPR_U32(ctx, 31, 0x37929Cu);
    ctx->pc = 0x379298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379294u;
    // 0x379298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379294u, 0x37929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37929Cu;
label_37929c:
    // 0x37929c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37929Cu;
    SET_GPR_U32(ctx, 31, 0x3792A4u);
    ctx->pc = 0x3792A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37929Cu;
    // 0x3792a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37929Cu, 0x3792A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792A4u;
label_3792a4:
    // 0x3792a4: 0xc0e5dcc  jal         func_397730
    ctx->pc = 0x3792A4u;
    SET_GPR_U32(ctx, 31, 0x3792ACu);
    ctx->pc = 0x3792A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792A4u;
    // 0x3792a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397730u, 0x3792A4u, 0x3792ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792ACu;
label_3792ac:
    // 0x3792ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3792acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3792b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3792b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3792B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3792B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792B4u;
        // 0x3792b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3792B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3792BCu;
    // 0x3792bc: 0x0  nop
    ctx->pc = 0x3792bcu;
    // NOP
    ctx->pc = 0x3792c0u;
}
