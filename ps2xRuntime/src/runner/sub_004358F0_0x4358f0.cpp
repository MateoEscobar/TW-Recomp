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

// Function: sub_004358F0
// Address: 0x4358f0 - 0x435928
void sub_004358F0_0x4358f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004358F0_0x4358f0");
#endif

    switch (ctx->pc) {
        case 0x435910u: goto label_435910;
        default: break;
    }

    ctx->pc = 0x4358f0u;

    // 0x4358f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4358f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4358f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4358f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4358f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4358f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4358fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4358fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435900: 0x8c6469ec  lw          $a0, 0x69EC($v1)
    ctx->pc = 0x435900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x435904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435908: 0xc10d27e  jal         func_4349F8
    ctx->pc = 0x435908u;
    SET_GPR_U32(ctx, 31, 0x435910u);
    ctx->pc = 0x43590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435908u;
    // 0x43590c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349F8u, 0x435908u, 0x435910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435910u;
label_435910:
    // 0x435910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435914: 0x3e00008  jr          $ra
    ctx->pc = 0x435914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435914u;
        // 0x435918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43591Cu;
    // 0x43591c: 0x0  nop
    ctx->pc = 0x43591cu;
    // NOP
    // 0x435920: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x435920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x435924: 0x0  nop
    ctx->pc = 0x435924u;
    // NOP
    ctx->pc = 0x435928u;
}
