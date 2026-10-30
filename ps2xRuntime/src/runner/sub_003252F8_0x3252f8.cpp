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

// Function: sub_003252F8
// Address: 0x3252f8 - 0x325340
void sub_003252F8_0x3252f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003252F8_0x3252f8");
#endif

    switch (ctx->pc) {
        case 0x325314u: goto label_325314;
        case 0x325320u: goto label_325320;
        case 0x32532cu: goto label_32532c;
        default: break;
    }

    ctx->pc = 0x3252f8u;

    // 0x3252f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3252f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3252fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3252fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x325304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32530c: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x32530Cu;
    SET_GPR_U32(ctx, 31, 0x325314u);
    ctx->pc = 0x325310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32530Cu;
    // 0x325310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x32530Cu, 0x325314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325314u;
label_325314:
    // 0x325314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325318: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x325318u;
    SET_GPR_U32(ctx, 31, 0x325320u);
    ctx->pc = 0x32531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325318u;
    // 0x32531c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x325318u, 0x325320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325320u;
label_325320:
    // 0x325320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325324: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x325324u;
    SET_GPR_U32(ctx, 31, 0x32532Cu);
    ctx->pc = 0x325328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325324u;
    // 0x325328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x325324u, 0x32532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32532Cu;
label_32532c:
    // 0x32532c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32532cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325338: 0x3e00008  jr          $ra
    ctx->pc = 0x325338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325338u;
        // 0x32533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325340u;
}
