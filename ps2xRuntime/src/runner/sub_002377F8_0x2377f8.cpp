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

// Function: sub_002377F8
// Address: 0x2377f8 - 0x237848
void sub_002377F8_0x2377f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002377F8_0x2377f8");
#endif

    switch (ctx->pc) {
        case 0x237810u: goto label_237810;
        case 0x237818u: goto label_237818;
        case 0x23782cu: goto label_23782c;
        case 0x237838u: goto label_237838;
        default: break;
    }

    ctx->pc = 0x2377f8u;

    // 0x2377f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2377f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2377fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2377fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237800: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237808: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237808u;
    SET_GPR_U32(ctx, 31, 0x237810u);
    ctx->pc = 0x23780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237808u;
    // 0x23780c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237808u, 0x237810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237810u;
label_237810:
    // 0x237810: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237810u;
    SET_GPR_U32(ctx, 31, 0x237818u);
    ctx->pc = 0x237814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237810u;
    // 0x237814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237810u, 0x237818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237818u;
label_237818:
    // 0x237818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23781c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23781Cu;
    {
        const bool branch_taken_0x23781c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23781Cu;
        // 0x237820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23781c) {
            ctx->pc = 0x237838u;
            goto label_237838;
        }
    }
    ctx->pc = 0x237824u;
    // 0x237824: 0xc08bad0  jal         func_22EB40
    ctx->pc = 0x237824u;
    SET_GPR_U32(ctx, 31, 0x23782Cu);
    ctx->pc = 0x237828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237824u;
    // 0x237828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x237824u, 0x23782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23782Cu;
label_23782c:
    // 0x23782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237830: 0xc089974  jal         func_2265D0
    ctx->pc = 0x237830u;
    SET_GPR_U32(ctx, 31, 0x237838u);
    ctx->pc = 0x237834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237830u;
    // 0x237834: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x237830u, 0x237838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237838u;
label_237838:
    // 0x237838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23783c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237840: 0x3e00008  jr          $ra
    ctx->pc = 0x237840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237840u;
        // 0x237844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237848u;
}
