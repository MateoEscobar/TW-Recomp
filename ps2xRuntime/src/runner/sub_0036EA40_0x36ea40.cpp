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

// Function: sub_0036EA40
// Address: 0x36ea40 - 0x36ea78
void sub_0036EA40_0x36ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EA40_0x36ea40");
#endif

    switch (ctx->pc) {
        case 0x36ea54u: goto label_36ea54;
        case 0x36ea5cu: goto label_36ea5c;
        case 0x36ea64u: goto label_36ea64;
        default: break;
    }

    ctx->pc = 0x36ea40u;

    // 0x36ea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ea44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ea48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ea4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EA4Cu;
    SET_GPR_U32(ctx, 31, 0x36EA54u);
    ctx->pc = 0x36EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA4Cu;
    // 0x36ea50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EA4Cu, 0x36EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA54u;
label_36ea54:
    // 0x36ea54: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36EA54u;
    SET_GPR_U32(ctx, 31, 0x36EA5Cu);
    ctx->pc = 0x36EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA54u;
    // 0x36ea58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36EA54u, 0x36EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA5Cu;
label_36ea5c:
    // 0x36ea5c: 0xc06d1ee  jal         func_1B47B8
    ctx->pc = 0x36EA5Cu;
    SET_GPR_U32(ctx, 31, 0x36EA64u);
    ctx->pc = 0x36EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA5Cu;
    // 0x36ea60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47B8u, 0x36EA5Cu, 0x36EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA64u;
label_36ea64:
    // 0x36ea64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ea68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ea68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA6Cu;
        // 0x36ea70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA74u;
    // 0x36ea74: 0x0  nop
    ctx->pc = 0x36ea74u;
    // NOP
    ctx->pc = 0x36ea78u;
}
