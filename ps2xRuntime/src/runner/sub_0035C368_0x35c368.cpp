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

// Function: sub_0035C368
// Address: 0x35c368 - 0x35c3a0
void sub_0035C368_0x35c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C368_0x35c368");
#endif

    switch (ctx->pc) {
        case 0x35c37cu: goto label_35c37c;
        case 0x35c384u: goto label_35c384;
        case 0x35c38cu: goto label_35c38c;
        default: break;
    }

    ctx->pc = 0x35c368u;

    // 0x35c368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c36c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c374: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C374u;
    SET_GPR_U32(ctx, 31, 0x35C37Cu);
    ctx->pc = 0x35C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C374u;
    // 0x35c378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C374u, 0x35C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C37Cu;
label_35c37c:
    // 0x35c37c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C37Cu;
    SET_GPR_U32(ctx, 31, 0x35C384u);
    ctx->pc = 0x35C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C37Cu;
    // 0x35c380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C37Cu, 0x35C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C384u;
label_35c384:
    // 0x35c384: 0xc08e11e  jal         func_238478
    ctx->pc = 0x35C384u;
    SET_GPR_U32(ctx, 31, 0x35C38Cu);
    ctx->pc = 0x35C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C384u;
    // 0x35c388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238478u, 0x35C384u, 0x35C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C38Cu;
label_35c38c:
    // 0x35c38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c394: 0x3e00008  jr          $ra
    ctx->pc = 0x35C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C394u;
        // 0x35c398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C39Cu;
    // 0x35c39c: 0x0  nop
    ctx->pc = 0x35c39cu;
    // NOP
    ctx->pc = 0x35c3a0u;
}
