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

// Function: sub_0035E7E0
// Address: 0x35e7e0 - 0x35e818
void sub_0035E7E0_0x35e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E7E0_0x35e7e0");
#endif

    switch (ctx->pc) {
        case 0x35e7f4u: goto label_35e7f4;
        case 0x35e7fcu: goto label_35e7fc;
        case 0x35e804u: goto label_35e804;
        default: break;
    }

    ctx->pc = 0x35e7e0u;

    // 0x35e7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e7e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e7ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E7ECu;
    SET_GPR_U32(ctx, 31, 0x35E7F4u);
    ctx->pc = 0x35E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7ECu;
    // 0x35e7f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E7ECu, 0x35E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7F4u;
label_35e7f4:
    // 0x35e7f4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E7F4u;
    SET_GPR_U32(ctx, 31, 0x35E7FCu);
    ctx->pc = 0x35E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7F4u;
    // 0x35e7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E7F4u, 0x35E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E7FCu;
label_35e7fc:
    // 0x35e7fc: 0xc107690  jal         func_41DA40
    ctx->pc = 0x35E7FCu;
    SET_GPR_U32(ctx, 31, 0x35E804u);
    ctx->pc = 0x35E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E7FCu;
    // 0x35e800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DA40u, 0x35E7FCu, 0x35E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E804u;
label_35e804:
    // 0x35e804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E80Cu;
        // 0x35e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E814u;
    // 0x35e814: 0x0  nop
    ctx->pc = 0x35e814u;
    // NOP
    ctx->pc = 0x35e818u;
}
