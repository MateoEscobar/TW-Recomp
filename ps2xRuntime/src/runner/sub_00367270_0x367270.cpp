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

// Function: sub_00367270
// Address: 0x367270 - 0x3672a8
void sub_00367270_0x367270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367270_0x367270");
#endif

    switch (ctx->pc) {
        case 0x367284u: goto label_367284;
        case 0x36728cu: goto label_36728c;
        case 0x367294u: goto label_367294;
        default: break;
    }

    ctx->pc = 0x367270u;

    // 0x367270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36727c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36727Cu;
    SET_GPR_U32(ctx, 31, 0x367284u);
    ctx->pc = 0x367280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36727Cu;
    // 0x367280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36727Cu, 0x367284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367284u;
label_367284:
    // 0x367284: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367284u;
    SET_GPR_U32(ctx, 31, 0x36728Cu);
    ctx->pc = 0x367288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367284u;
    // 0x367288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367284u, 0x36728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36728Cu;
label_36728c:
    // 0x36728c: 0xc04782a  jal         func_11E0A8
    ctx->pc = 0x36728Cu;
    SET_GPR_U32(ctx, 31, 0x367294u);
    ctx->pc = 0x367290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36728Cu;
    // 0x367290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0A8u, 0x36728Cu, 0x367294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367294u;
label_367294:
    // 0x367294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36729c: 0x3e00008  jr          $ra
    ctx->pc = 0x36729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3672A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36729Cu;
        // 0x3672a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672A4u;
    // 0x3672a4: 0x0  nop
    ctx->pc = 0x3672a4u;
    // NOP
    ctx->pc = 0x3672a8u;
}
