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

// Function: sub_0035C120
// Address: 0x35c120 - 0x35c180
void sub_0035C120_0x35c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C120_0x35c120");
#endif

    switch (ctx->pc) {
        case 0x35c140u: goto label_35c140;
        case 0x35c148u: goto label_35c148;
        case 0x35c15cu: goto label_35c15c;
        case 0x35c168u: goto label_35c168;
        default: break;
    }

    ctx->pc = 0x35c120u;

    // 0x35c120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c128: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35c12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c138: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C138u;
    SET_GPR_U32(ctx, 31, 0x35C140u);
    ctx->pc = 0x35C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C138u;
    // 0x35c13c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C138u, 0x35C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C140u;
label_35c140:
    // 0x35c140: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C140u;
    SET_GPR_U32(ctx, 31, 0x35C148u);
    ctx->pc = 0x35C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C140u;
    // 0x35c144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C140u, 0x35C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C148u;
label_35c148:
    // 0x35c148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c154: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35C154u;
    SET_GPR_U32(ctx, 31, 0x35C15Cu);
    ctx->pc = 0x35C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C154u;
    // 0x35c158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35C154u, 0x35C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C15Cu;
label_35c15c:
    // 0x35c15c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35c15cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35c160: 0xc08e13e  jal         func_2384F8
    ctx->pc = 0x35C160u;
    SET_GPR_U32(ctx, 31, 0x35C168u);
    ctx->pc = 0x35C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C160u;
    // 0x35c164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384F8u, 0x35C160u, 0x35C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C168u;
label_35c168:
    // 0x35c168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35c168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c178: 0x3e00008  jr          $ra
    ctx->pc = 0x35C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C178u;
        // 0x35c17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C180u;
}
