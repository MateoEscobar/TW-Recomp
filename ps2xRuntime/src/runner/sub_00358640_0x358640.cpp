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

// Function: sub_00358640
// Address: 0x358640 - 0x358678
void sub_00358640_0x358640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358640_0x358640");
#endif

    switch (ctx->pc) {
        case 0x358654u: goto label_358654;
        case 0x35865cu: goto label_35865c;
        case 0x358664u: goto label_358664;
        default: break;
    }

    ctx->pc = 0x358640u;

    // 0x358640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35864c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35864Cu;
    SET_GPR_U32(ctx, 31, 0x358654u);
    ctx->pc = 0x358650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35864Cu;
    // 0x358650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35864Cu, 0x358654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358654u;
label_358654:
    // 0x358654: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358654u;
    SET_GPR_U32(ctx, 31, 0x35865Cu);
    ctx->pc = 0x358658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358654u;
    // 0x358658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358654u, 0x35865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35865Cu;
label_35865c:
    // 0x35865c: 0xc08df9c  jal         func_237E70
    ctx->pc = 0x35865Cu;
    SET_GPR_U32(ctx, 31, 0x358664u);
    ctx->pc = 0x358660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35865Cu;
    // 0x358660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E70u, 0x35865Cu, 0x358664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358664u;
label_358664:
    // 0x358664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35866c: 0x3e00008  jr          $ra
    ctx->pc = 0x35866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35866Cu;
        // 0x358670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358674u;
    // 0x358674: 0x0  nop
    ctx->pc = 0x358674u;
    // NOP
    ctx->pc = 0x358678u;
}
