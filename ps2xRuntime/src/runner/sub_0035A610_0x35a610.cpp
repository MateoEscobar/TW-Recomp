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

// Function: sub_0035A610
// Address: 0x35a610 - 0x35a640
void sub_0035A610_0x35a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A610_0x35a610");
#endif

    switch (ctx->pc) {
        case 0x35a624u: goto label_35a624;
        case 0x35a62cu: goto label_35a62c;
        default: break;
    }

    ctx->pc = 0x35a610u;

    // 0x35a610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a61c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35A61Cu;
    SET_GPR_U32(ctx, 31, 0x35A624u);
    ctx->pc = 0x35A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A61Cu;
    // 0x35a620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35A61Cu, 0x35A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A624u;
label_35a624:
    // 0x35a624: 0xc08d936  jal         func_2364D8
    ctx->pc = 0x35A624u;
    SET_GPR_U32(ctx, 31, 0x35A62Cu);
    ctx->pc = 0x35A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A624u;
    // 0x35a628: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364D8u, 0x35A624u, 0x35A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A62Cu;
label_35a62c:
    // 0x35a62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a634: 0x3e00008  jr          $ra
    ctx->pc = 0x35A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A634u;
        // 0x35a638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A63Cu;
    // 0x35a63c: 0x0  nop
    ctx->pc = 0x35a63cu;
    // NOP
    ctx->pc = 0x35a640u;
}
