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

// Function: sub_0036C258
// Address: 0x36c258 - 0x36c2b0
void sub_0036C258_0x36c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C258_0x36c258");
#endif

    switch (ctx->pc) {
        case 0x36c278u: goto label_36c278;
        case 0x36c28cu: goto label_36c28c;
        case 0x36c298u: goto label_36c298;
        default: break;
    }

    ctx->pc = 0x36c258u;

    // 0x36c258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c260: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c26c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c270: 0xc102488  jal         func_409220
    ctx->pc = 0x36C270u;
    SET_GPR_U32(ctx, 31, 0x36C278u);
    ctx->pc = 0x36C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C270u;
    // 0x36c274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C270u, 0x36C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C278u;
label_36c278:
    // 0x36c278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36c278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c280: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c284: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36C284u;
    SET_GPR_U32(ctx, 31, 0x36C28Cu);
    ctx->pc = 0x36C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C284u;
    // 0x36c288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36C284u, 0x36C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C28Cu;
label_36c28c:
    // 0x36c28c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36c28cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36c290: 0xc10aa4e  jal         func_42A938
    ctx->pc = 0x36C290u;
    SET_GPR_U32(ctx, 31, 0x36C298u);
    ctx->pc = 0x36C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C290u;
    // 0x36c294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x36C290u, 0x36C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C298u;
label_36c298:
    // 0x36c298: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c29c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2A8u;
        // 0x36c2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C2B0u;
}
