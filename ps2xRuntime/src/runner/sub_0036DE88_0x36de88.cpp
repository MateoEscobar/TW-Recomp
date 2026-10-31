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

// Function: sub_0036DE88
// Address: 0x36de88 - 0x36ded8
void sub_0036DE88_0x36de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DE88_0x36de88");
#endif

    switch (ctx->pc) {
        case 0x36dea4u: goto label_36dea4;
        case 0x36deacu: goto label_36deac;
        case 0x36deb4u: goto label_36deb4;
        case 0x36dec0u: goto label_36dec0;
        default: break;
    }

    ctx->pc = 0x36de88u;

    // 0x36de88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36de88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36de8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36de8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36de94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36de98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36de9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DE9Cu;
    SET_GPR_U32(ctx, 31, 0x36DEA4u);
    ctx->pc = 0x36DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE9Cu;
    // 0x36dea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DE9Cu, 0x36DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEA4u;
label_36dea4:
    // 0x36dea4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DEA4u;
    SET_GPR_U32(ctx, 31, 0x36DEACu);
    ctx->pc = 0x36DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEA4u;
    // 0x36dea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DEA4u, 0x36DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEACu;
label_36deac:
    // 0x36deac: 0xc0e5d66  jal         func_397598
    ctx->pc = 0x36DEACu;
    SET_GPR_U32(ctx, 31, 0x36DEB4u);
    ctx->pc = 0x36DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEACu;
    // 0x36deb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397598u, 0x36DEACu, 0x36DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEB4u;
label_36deb4:
    // 0x36deb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36deb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36deb8: 0xc102562  jal         func_409588
    ctx->pc = 0x36DEB8u;
    SET_GPR_U32(ctx, 31, 0x36DEC0u);
    ctx->pc = 0x36DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEB8u;
    // 0x36debc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36DEB8u, 0x36DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEC0u;
label_36dec0:
    // 0x36dec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36dec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36decc: 0x3e00008  jr          $ra
    ctx->pc = 0x36DECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DECCu;
        // 0x36ded0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DED4u;
    // 0x36ded4: 0x0  nop
    ctx->pc = 0x36ded4u;
    // NOP
    ctx->pc = 0x36ded8u;
}
