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

// Function: sub_003672A8
// Address: 0x3672a8 - 0x3672e0
void sub_003672A8_0x3672a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003672A8_0x3672a8");
#endif

    switch (ctx->pc) {
        case 0x3672bcu: goto label_3672bc;
        case 0x3672c4u: goto label_3672c4;
        case 0x3672ccu: goto label_3672cc;
        default: break;
    }

    ctx->pc = 0x3672a8u;

    // 0x3672a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3672a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3672ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3672acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3672b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3672b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3672b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3672B4u;
    SET_GPR_U32(ctx, 31, 0x3672BCu);
    ctx->pc = 0x3672B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3672B4u;
    // 0x3672b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3672B4u, 0x3672BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3672BCu;
label_3672bc:
    // 0x3672bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3672BCu;
    SET_GPR_U32(ctx, 31, 0x3672C4u);
    ctx->pc = 0x3672C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3672BCu;
    // 0x3672c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3672BCu, 0x3672C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3672C4u;
label_3672c4:
    // 0x3672c4: 0xc047866  jal         func_11E198
    ctx->pc = 0x3672C4u;
    SET_GPR_U32(ctx, 31, 0x3672CCu);
    ctx->pc = 0x3672C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3672C4u;
    // 0x3672c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x3672C4u, 0x3672CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3672CCu;
label_3672cc:
    // 0x3672cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3672ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3672d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3672d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3672D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3672D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672D4u;
        // 0x3672d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3672D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672DCu;
    // 0x3672dc: 0x0  nop
    ctx->pc = 0x3672dcu;
    // NOP
    ctx->pc = 0x3672e0u;
}
