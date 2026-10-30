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

// Function: sub_0035C418
// Address: 0x35c418 - 0x35c470
void sub_0035C418_0x35c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C418_0x35c418");
#endif

    switch (ctx->pc) {
        case 0x35c434u: goto label_35c434;
        case 0x35c43cu: goto label_35c43c;
        case 0x35c444u: goto label_35c444;
        case 0x35c44cu: goto label_35c44c;
        case 0x35c458u: goto label_35c458;
        default: break;
    }

    ctx->pc = 0x35c418u;

    // 0x35c418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c41c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35c424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c42c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C42Cu;
    SET_GPR_U32(ctx, 31, 0x35C434u);
    ctx->pc = 0x35C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C42Cu;
    // 0x35c430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C42Cu, 0x35C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C434u;
label_35c434:
    // 0x35c434: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C434u;
    SET_GPR_U32(ctx, 31, 0x35C43Cu);
    ctx->pc = 0x35C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C434u;
    // 0x35c438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C434u, 0x35C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C43Cu;
label_35c43c:
    // 0x35c43c: 0xc08e056  jal         func_238158
    ctx->pc = 0x35C43Cu;
    SET_GPR_U32(ctx, 31, 0x35C444u);
    ctx->pc = 0x35C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C43Cu;
    // 0x35c440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238158u, 0x35C43Cu, 0x35C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C444u;
label_35c444:
    // 0x35c444: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35C444u;
    SET_GPR_U32(ctx, 31, 0x35C44Cu);
    ctx->pc = 0x35C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C444u;
    // 0x35c448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35C444u, 0x35C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C44Cu;
label_35c44c:
    // 0x35c44c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35c44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c450: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35C450u;
    SET_GPR_U32(ctx, 31, 0x35C458u);
    ctx->pc = 0x35C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C450u;
    // 0x35c454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35C450u, 0x35C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C458u;
label_35c458:
    // 0x35c458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35c458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c464: 0x3e00008  jr          $ra
    ctx->pc = 0x35C464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C464u;
        // 0x35c468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C46Cu;
    // 0x35c46c: 0x0  nop
    ctx->pc = 0x35c46cu;
    // NOP
    ctx->pc = 0x35c470u;
}
