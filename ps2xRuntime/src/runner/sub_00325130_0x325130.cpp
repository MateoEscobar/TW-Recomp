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

// Function: sub_00325130
// Address: 0x325130 - 0x325180
void sub_00325130_0x325130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325130_0x325130");
#endif

    switch (ctx->pc) {
        case 0x325148u: goto label_325148;
        case 0x325154u: goto label_325154;
        case 0x32515cu: goto label_32515c;
        case 0x325168u: goto label_325168;
        default: break;
    }

    ctx->pc = 0x325130u;

    // 0x325130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32513c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325140: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x325140u;
    SET_GPR_U32(ctx, 31, 0x325148u);
    ctx->pc = 0x325144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325140u;
    // 0x325144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x325140u, 0x325148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325148u;
label_325148:
    // 0x325148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32514c: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x32514Cu;
    SET_GPR_U32(ctx, 31, 0x325154u);
    ctx->pc = 0x325150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32514Cu;
    // 0x325150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x32514Cu, 0x325154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325154u;
label_325154:
    // 0x325154: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325154u;
    SET_GPR_U32(ctx, 31, 0x32515Cu);
    ctx->pc = 0x325158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325154u;
    // 0x325158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325154u, 0x32515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32515Cu;
label_32515c:
    // 0x32515c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325160: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325160u;
    SET_GPR_U32(ctx, 31, 0x325168u);
    ctx->pc = 0x325164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325160u;
    // 0x325164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325160u, 0x325168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325168u;
label_325168:
    // 0x325168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32516c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325174: 0x3e00008  jr          $ra
    ctx->pc = 0x325174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325174u;
        // 0x325178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32517Cu;
    // 0x32517c: 0x0  nop
    ctx->pc = 0x32517cu;
    // NOP
    ctx->pc = 0x325180u;
}
