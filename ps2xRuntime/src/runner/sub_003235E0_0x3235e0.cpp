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

// Function: sub_003235E0
// Address: 0x3235e0 - 0x323618
void sub_003235E0_0x3235e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003235E0_0x3235e0");
#endif

    switch (ctx->pc) {
        case 0x3235f0u: goto label_3235f0;
        case 0x323608u: goto label_323608;
        default: break;
    }

    ctx->pc = 0x3235e0u;

    // 0x3235e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3235e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3235e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3235e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3235e8: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x3235E8u;
    SET_GPR_U32(ctx, 31, 0x3235F0u);
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x3235E8u, 0x3235F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235F0u;
label_3235f0:
    // 0x3235f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3235F0u;
    {
        const bool branch_taken_0x3235f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3235f0) {
            ctx->pc = 0x323600u;
            goto label_323600;
        }
    }
    ctx->pc = 0x3235F8u;
    // 0x3235f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3235F8u;
    {
        const bool branch_taken_0x3235f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235F8u;
        // 0x3235fc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235f8) {
            ctx->pc = 0x323608u;
            goto label_323608;
        }
    }
    ctx->pc = 0x323600u;
label_323600:
    // 0x323600: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x323600u;
    SET_GPR_U32(ctx, 31, 0x323608u);
    ctx->pc = 0x323604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323600u;
    // 0x323604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x323600u, 0x323608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323608u;
label_323608:
    // 0x323608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32360c: 0x3e00008  jr          $ra
    ctx->pc = 0x32360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32360Cu;
        // 0x323610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323614u;
    // 0x323614: 0x0  nop
    ctx->pc = 0x323614u;
    // NOP
    ctx->pc = 0x323618u;
}
