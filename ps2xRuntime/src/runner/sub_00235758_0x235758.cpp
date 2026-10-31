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

// Function: sub_00235758
// Address: 0x235758 - 0x235798
void sub_00235758_0x235758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235758_0x235758");
#endif

    switch (ctx->pc) {
        case 0x23576cu: goto label_23576c;
        case 0x235774u: goto label_235774;
        default: break;
    }

    ctx->pc = 0x235758u;

    // 0x235758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23575c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235764: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235764u;
    SET_GPR_U32(ctx, 31, 0x23576Cu);
    ctx->pc = 0x235768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235764u;
    // 0x235768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235764u, 0x23576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23576Cu;
label_23576c:
    // 0x23576c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23576Cu;
    SET_GPR_U32(ctx, 31, 0x235774u);
    ctx->pc = 0x235770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23576Cu;
    // 0x235770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23576Cu, 0x235774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235774u;
label_235774:
    // 0x235774: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x235774u;
    {
        const bool branch_taken_0x235774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235774) {
            ctx->pc = 0x235778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235774u;
            // 0x235778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235788u;
            goto label_235788;
        }
    }
    ctx->pc = 0x23577Cu;
    // 0x23577c: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x23577cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x235780: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x235780u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x235784: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x235784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235788:
    // 0x235788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23578c: 0x3e00008  jr          $ra
    ctx->pc = 0x23578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23578Cu;
        // 0x235790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235794u;
    // 0x235794: 0x0  nop
    ctx->pc = 0x235794u;
    // NOP
    ctx->pc = 0x235798u;
}
