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

// Function: sub_00169570
// Address: 0x169570 - 0x1695b8
void sub_00169570_0x169570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169570_0x169570");
#endif

    switch (ctx->pc) {
        case 0x16958cu: goto label_16958c;
        case 0x169598u: goto label_169598;
        case 0x1695a4u: goto label_1695a4;
        default: break;
    }

    ctx->pc = 0x169570u;

    // 0x169570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169574: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x169574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x169578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16957c: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x169580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169584: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x169584u;
    SET_GPR_U32(ctx, 31, 0x16958Cu);
    ctx->pc = 0x169588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169584u;
    // 0x169588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x169584u, 0x16958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16958Cu;
label_16958c:
    // 0x16958c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169590: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x169590u;
    SET_GPR_U32(ctx, 31, 0x169598u);
    ctx->pc = 0x169594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169590u;
    // 0x169594: 0x24050257  addiu       $a1, $zero, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x169590u, 0x169598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169598u;
label_169598:
    // 0x169598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16959c: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x16959Cu;
    SET_GPR_U32(ctx, 31, 0x1695A4u);
    ctx->pc = 0x1695A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16959Cu;
    // 0x1695a0: 0x24050256  addiu       $a1, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x16959Cu, 0x1695A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695A4u;
label_1695a4:
    // 0x1695a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1695a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1695a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1695a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1695ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1695ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1695B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695ACu;
        // 0x1695b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1695ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1695B4u;
    // 0x1695b4: 0x0  nop
    ctx->pc = 0x1695b4u;
    // NOP
    ctx->pc = 0x1695b8u;
}
