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

// Function: sub_0036A658
// Address: 0x36a658 - 0x36a690
void sub_0036A658_0x36a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A658_0x36a658");
#endif

    switch (ctx->pc) {
        case 0x36a66cu: goto label_36a66c;
        case 0x36a674u: goto label_36a674;
        case 0x36a67cu: goto label_36a67c;
        default: break;
    }

    ctx->pc = 0x36a658u;

    // 0x36a658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a664: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A664u;
    SET_GPR_U32(ctx, 31, 0x36A66Cu);
    ctx->pc = 0x36A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A664u;
    // 0x36a668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A664u, 0x36A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A66Cu;
label_36a66c:
    // 0x36a66c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A66Cu;
    SET_GPR_U32(ctx, 31, 0x36A674u);
    ctx->pc = 0x36A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A66Cu;
    // 0x36a670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A66Cu, 0x36A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A674u;
label_36a674:
    // 0x36a674: 0xc10753e  jal         func_41D4F8
    ctx->pc = 0x36A674u;
    SET_GPR_U32(ctx, 31, 0x36A67Cu);
    ctx->pc = 0x36A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A674u;
    // 0x36a678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D4F8u, 0x36A674u, 0x36A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A67Cu;
label_36a67c:
    // 0x36a67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a684: 0x3e00008  jr          $ra
    ctx->pc = 0x36A684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A684u;
        // 0x36a688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A68Cu;
    // 0x36a68c: 0x0  nop
    ctx->pc = 0x36a68cu;
    // NOP
    ctx->pc = 0x36a690u;
}
