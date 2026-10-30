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

// Function: sub_0035A4E0
// Address: 0x35a4e0 - 0x35a510
void sub_0035A4E0_0x35a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A4E0_0x35a4e0");
#endif

    switch (ctx->pc) {
        case 0x35a4f4u: goto label_35a4f4;
        case 0x35a4fcu: goto label_35a4fc;
        default: break;
    }

    ctx->pc = 0x35a4e0u;

    // 0x35a4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a4ec: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35A4ECu;
    SET_GPR_U32(ctx, 31, 0x35A4F4u);
    ctx->pc = 0x35A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4ECu;
    // 0x35a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35A4ECu, 0x35A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4F4u;
label_35a4f4:
    // 0x35a4f4: 0xc08d924  jal         func_236490
    ctx->pc = 0x35A4F4u;
    SET_GPR_U32(ctx, 31, 0x35A4FCu);
    ctx->pc = 0x35A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4F4u;
    // 0x35a4f8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236490u, 0x35A4F4u, 0x35A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4FCu;
label_35a4fc:
    // 0x35a4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a504: 0x3e00008  jr          $ra
    ctx->pc = 0x35A504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A504u;
        // 0x35a508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A50Cu;
    // 0x35a50c: 0x0  nop
    ctx->pc = 0x35a50cu;
    // NOP
    ctx->pc = 0x35a510u;
}
