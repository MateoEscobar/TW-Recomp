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

// Function: sub_00358608
// Address: 0x358608 - 0x358640
void sub_00358608_0x358608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358608_0x358608");
#endif

    switch (ctx->pc) {
        case 0x35861cu: goto label_35861c;
        case 0x358624u: goto label_358624;
        case 0x35862cu: goto label_35862c;
        default: break;
    }

    ctx->pc = 0x358608u;

    // 0x358608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35860c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358614: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358614u;
    SET_GPR_U32(ctx, 31, 0x35861Cu);
    ctx->pc = 0x358618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358614u;
    // 0x358618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358614u, 0x35861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35861Cu;
label_35861c:
    // 0x35861c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35861Cu;
    SET_GPR_U32(ctx, 31, 0x358624u);
    ctx->pc = 0x358620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35861Cu;
    // 0x358620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35861Cu, 0x358624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358624u;
label_358624:
    // 0x358624: 0xc08cfbc  jal         func_233EF0
    ctx->pc = 0x358624u;
    SET_GPR_U32(ctx, 31, 0x35862Cu);
    ctx->pc = 0x358628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358624u;
    // 0x358628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x358624u, 0x35862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35862Cu;
label_35862c:
    // 0x35862c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35862cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358634: 0x3e00008  jr          $ra
    ctx->pc = 0x358634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358634u;
        // 0x358638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35863Cu;
    // 0x35863c: 0x0  nop
    ctx->pc = 0x35863cu;
    // NOP
    ctx->pc = 0x358640u;
}
