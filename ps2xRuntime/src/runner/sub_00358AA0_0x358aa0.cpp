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

// Function: sub_00358AA0
// Address: 0x358aa0 - 0x358ad8
void sub_00358AA0_0x358aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358AA0_0x358aa0");
#endif

    switch (ctx->pc) {
        case 0x358ab4u: goto label_358ab4;
        case 0x358abcu: goto label_358abc;
        case 0x358ac4u: goto label_358ac4;
        default: break;
    }

    ctx->pc = 0x358aa0u;

    // 0x358aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358aac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358AACu;
    SET_GPR_U32(ctx, 31, 0x358AB4u);
    ctx->pc = 0x358AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AACu;
    // 0x358ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358AACu, 0x358AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AB4u;
label_358ab4:
    // 0x358ab4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358AB4u;
    SET_GPR_U32(ctx, 31, 0x358ABCu);
    ctx->pc = 0x358AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AB4u;
    // 0x358ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358AB4u, 0x358ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ABCu;
label_358abc:
    // 0x358abc: 0xc08dfa6  jal         func_237E98
    ctx->pc = 0x358ABCu;
    SET_GPR_U32(ctx, 31, 0x358AC4u);
    ctx->pc = 0x358AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358ABCu;
    // 0x358ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x358ABCu, 0x358AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AC4u;
label_358ac4:
    // 0x358ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358acc: 0x3e00008  jr          $ra
    ctx->pc = 0x358ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358ACCu;
        // 0x358ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358AD4u;
    // 0x358ad4: 0x0  nop
    ctx->pc = 0x358ad4u;
    // NOP
    ctx->pc = 0x358ad8u;
}
