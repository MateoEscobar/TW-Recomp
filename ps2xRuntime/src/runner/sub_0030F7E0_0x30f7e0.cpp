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

// Function: sub_0030F7E0
// Address: 0x30f7e0 - 0x30f868
void sub_0030F7E0_0x30f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F7E0_0x30f7e0");
#endif

    switch (ctx->pc) {
        case 0x30f814u: goto label_30f814;
        case 0x30f820u: goto label_30f820;
        case 0x30f82cu: goto label_30f82c;
        case 0x30f838u: goto label_30f838;
        case 0x30f84cu: goto label_30f84c;
        case 0x30f854u: goto label_30f854;
        default: break;
    }

    ctx->pc = 0x30f7e0u;

    // 0x30f7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f7e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f7ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f7fc: 0x92240028  lbu         $a0, 0x28($s1)
    ctx->pc = 0x30f7fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x30f800: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30F800u;
    {
        const bool branch_taken_0x30f800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F800u;
        // 0x30f804: 0x247001b0  addiu       $s0, $v1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f800) {
            ctx->pc = 0x30F840u;
            goto label_30f840;
        }
    }
    ctx->pc = 0x30F808u;
    // 0x30f808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f80c: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30F80Cu;
    SET_GPR_U32(ctx, 31, 0x30F814u);
    ctx->pc = 0x30F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F80Cu;
    // 0x30f810: 0x24050256  addiu       $a1, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30F80Cu, 0x30F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F814u;
label_30f814:
    // 0x30f814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f818: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30F818u;
    SET_GPR_U32(ctx, 31, 0x30F820u);
    ctx->pc = 0x30F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F818u;
    // 0x30f81c: 0x24050257  addiu       $a1, $zero, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30F818u, 0x30F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F820u;
label_30f820:
    // 0x30f820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f824: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30F824u;
    SET_GPR_U32(ctx, 31, 0x30F82Cu);
    ctx->pc = 0x30F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F824u;
    // 0x30f828: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30F824u, 0x30F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F82Cu;
label_30f82c:
    // 0x30f82c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f830: 0xc0c3e1a  jal         func_30F868
    ctx->pc = 0x30F830u;
    SET_GPR_U32(ctx, 31, 0x30F838u);
    ctx->pc = 0x30F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F830u;
    // 0x30f834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F868u, 0x30F830u, 0x30F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F838u;
label_30f838:
    // 0x30f838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F838u;
    {
        const bool branch_taken_0x30f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F838u;
        // 0x30f83c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f838) {
            ctx->pc = 0x30F858u;
            goto label_30f858;
        }
    }
    ctx->pc = 0x30F840u;
label_30f840:
    // 0x30f840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f844: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x30F844u;
    SET_GPR_U32(ctx, 31, 0x30F84Cu);
    ctx->pc = 0x30F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F844u;
    // 0x30f848: 0x2405025c  addiu       $a1, $zero, 0x25C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x30F844u, 0x30F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F84Cu;
label_30f84c:
    // 0x30f84c: 0xc05a57a  jal         func_1695E8
    ctx->pc = 0x30F84Cu;
    SET_GPR_U32(ctx, 31, 0x30F854u);
    ctx->pc = 0x30F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F84Cu;
    // 0x30f850: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1695E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1695E8u, 0x30F84Cu, 0x30F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F854u;
label_30f854:
    // 0x30f854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30f854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30f858:
    // 0x30f858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f860: 0x3e00008  jr          $ra
    ctx->pc = 0x30F860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F860u;
        // 0x30f864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F868u;
}
