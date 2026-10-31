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

// Function: sub_00422630
// Address: 0x422630 - 0x422670
void sub_00422630_0x422630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422630_0x422630");
#endif

    switch (ctx->pc) {
        case 0x422650u: goto label_422650;
        case 0x42265cu: goto label_42265c;
        default: break;
    }

    ctx->pc = 0x422630u;

    // 0x422630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x422630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x422634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x422634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x422638: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x422638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x42263c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x42263cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x422640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x422640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x422644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x422644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422648: 0xc0e409a  jal         func_390268
    ctx->pc = 0x422648u;
    SET_GPR_U32(ctx, 31, 0x422650u);
    ctx->pc = 0x42264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422648u;
    // 0x42264c: 0x2610e490  addiu       $s0, $s0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x422648u, 0x422650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422650u;
label_422650:
    // 0x422650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422654: 0xc108a66  jal         func_422998
    ctx->pc = 0x422654u;
    SET_GPR_U32(ctx, 31, 0x42265Cu);
    ctx->pc = 0x422658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422654u;
    // 0x422658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422998u, 0x422654u, 0x42265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42265Cu;
label_42265c:
    // 0x42265c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42265cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x422660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422664: 0x3e00008  jr          $ra
    ctx->pc = 0x422664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422664u;
        // 0x422668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42266Cu;
    // 0x42266c: 0x0  nop
    ctx->pc = 0x42266cu;
    // NOP
    ctx->pc = 0x422670u;
}
