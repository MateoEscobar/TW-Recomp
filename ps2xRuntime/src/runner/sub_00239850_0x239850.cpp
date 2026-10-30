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

// Function: sub_00239850
// Address: 0x239850 - 0x239888
void sub_00239850_0x239850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239850_0x239850");
#endif

    switch (ctx->pc) {
        case 0x239864u: goto label_239864;
        case 0x23986cu: goto label_23986c;
        default: break;
    }

    ctx->pc = 0x239850u;

    // 0x239850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239854: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23985c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23985Cu;
    SET_GPR_U32(ctx, 31, 0x239864u);
    ctx->pc = 0x239860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23985Cu;
    // 0x239860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23985Cu, 0x239864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239864u;
label_239864:
    // 0x239864: 0xc08a61a  jal         func_229868
    ctx->pc = 0x239864u;
    SET_GPR_U32(ctx, 31, 0x23986Cu);
    ctx->pc = 0x239868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239864u;
    // 0x239868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239864u, 0x23986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23986Cu;
label_23986c:
    // 0x23986c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x23986Cu;
    {
        const bool branch_taken_0x23986c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23986c) {
            ctx->pc = 0x239870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23986Cu;
            // 0x239870: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239878u;
            goto label_239878;
        }
    }
    ctx->pc = 0x239874u;
    // 0x239874: 0x8c420380  lw          $v0, 0x380($v0)
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_239878:
    // 0x239878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23987c: 0x3e00008  jr          $ra
    ctx->pc = 0x23987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23987Cu;
        // 0x239880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239884u;
    // 0x239884: 0x0  nop
    ctx->pc = 0x239884u;
    // NOP
    ctx->pc = 0x239888u;
}
